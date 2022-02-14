
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
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int const) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(OPENSSL_CTX *VAR_4, const char *VAR_5[], char VAR_6,
                        PROPERTY_DEFINITION *VAR_7, const int VAR_8)
{
    char VAR_9[1000];
    const char *VAR_10 = *VAR_5;
    size_t VAR_11 = 0;
    int VAR_12 = 0;

    while (*VAR_10 != '\0' && *VAR_10 != VAR_6) {
        if (VAR_11 < sizeof(VAR_9) - 1)
            VAR_9[VAR_11++] = *VAR_10;
        else
            VAR_12 = 1;
        VAR_10++;
    }
    if (*VAR_10 == '\0') {
        FUNC_0(VAR_0, VAR_2,
                       "HERE-->%c%s", VAR_6, *VAR_5);
        return 0;
    }
    VAR_9[VAR_11] = '\0';
    if (VAR_12) {
        FUNC_0(VAR_0, VAR_3, "HERE-->%s", *VAR_5);
    } else {
        VAR_7->v.str_val = FUNC_1(VAR_4, VAR_9, VAR_8);
    }
    *VAR_5 = FUNC_2(VAR_10 + 1);
    VAR_7->type = VAR_1;
    return !VAR_12;
}
