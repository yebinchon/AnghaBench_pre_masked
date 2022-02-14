
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int data; } ;
typedef TYPE_1__ tlsextalpnctx ;
typedef int SSL ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned char**,unsigned char*,int ,int ,unsigned char const*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(SSL *VAR_5, const unsigned char **VAR_6, unsigned char *VAR_7,
                   const unsigned char *VAR_8, unsigned int VAR_9, void *VAR_10)
{
    tlsextalpnctx *VAR_11 = VAR_10;

    if (!VAR_4) {

        unsigned int VAR_12;
        FUNC_0(VAR_3, "ALPN protocols advertised by the client: ");
        for (VAR_12 = 0; VAR_12 < VAR_9;) {
            if (VAR_12)
                FUNC_1(VAR_3, ", ", 2);
            FUNC_1(VAR_3, &VAR_8[VAR_12 + 1], VAR_8[VAR_12]);
            VAR_12 += VAR_8[VAR_12] + 1;
        }
        FUNC_1(VAR_3, "\n", 1);
    }

    if (FUNC_2
        ((unsigned char **)VAR_6, VAR_7, VAR_11->data, VAR_11->len, VAR_8,
         VAR_9) != VAR_0) {
        return VAR_1;
    }

    if (!VAR_4) {
        FUNC_0(VAR_3, "ALPN protocols selected: ");
        FUNC_1(VAR_3, *VAR_6, *VAR_7);
        FUNC_1(VAR_3, "\n", 1);
    }

    return VAR_2;
}
