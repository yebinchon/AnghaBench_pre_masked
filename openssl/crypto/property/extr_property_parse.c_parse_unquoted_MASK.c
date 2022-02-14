
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v ;
struct TYPE_4__ {int str_val; } ;
struct TYPE_5__ {int type; TYPE_1__ v; } ;
typedef TYPE_2__ PROPERTY_DEFINITION ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int *,char*,int const) ;
 char FUNC_4 (char const) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(OPENSSL_CTX *VAR_4, const char *VAR_5[],
                          PROPERTY_DEFINITION *VAR_6, const int VAR_7)
{
    char VAR_8[1000];
    const char *VAR_9 = *VAR_5;
    size_t VAR_10 = 0;
    int VAR_11 = 0;

    if (*VAR_9 == '\0' || *VAR_9 == ',')
        return 0;
    while (FUNC_1(*VAR_9) && !FUNC_2(*VAR_9) && *VAR_9 != ',') {
        if (VAR_10 < sizeof(VAR_8) - 1)
            VAR_8[VAR_10++] = FUNC_4(*VAR_9);
        else
            VAR_11 = 1;
        VAR_9++;
    }
    if (!FUNC_2(*VAR_9) && *VAR_9 != '\0' && *VAR_9 != ',') {
        FUNC_0(VAR_0, VAR_2,
                       "HERE-->%s", VAR_9);
        return 0;
    }
    VAR_8[VAR_10] = 0;
    if (VAR_11) {
        FUNC_0(VAR_0, VAR_3, "HERE-->%s", *VAR_5);
    } else {
        VAR_6->v.str_val = FUNC_3(VAR_4, VAR_8, VAR_7);
    }
    *VAR_5 = FUNC_5(VAR_9);
    VAR_6->type = VAR_1;
    return !VAR_11;
}
