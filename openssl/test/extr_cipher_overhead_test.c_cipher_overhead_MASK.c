
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int min_dtls; } ;
typedef TYPE_1__ SSL_CIPHER ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__ const*,size_t*,size_t*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_5(void)
{
    int VAR_0 = 1, VAR_1, VAR_2 = FUNC_3();
    const SSL_CIPHER *VAR_3;
    size_t VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
        VAR_3 = FUNC_2(VAR_1);
        if (!VAR_3->min_dtls)
            continue;
        if (!FUNC_1(FUNC_4(VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7))) {
            FUNC_0("Failed getting %s", VAR_3->name);
            VAR_0 = 0;
        } else {
            FUNC_0("Cipher %s: %zu %zu %zu %zu",
                      VAR_3->name, VAR_4, VAR_5, VAR_6, VAR_7);
        }
    }
    return VAR_0;
}
