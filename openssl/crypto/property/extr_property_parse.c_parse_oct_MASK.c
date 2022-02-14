
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int int_val; } ;
struct TYPE_5__ {TYPE_1__ v; int type; } ;
typedef TYPE_2__ PROPERTY_DEFINITION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3[], PROPERTY_DEFINITION *VAR_4)
{
    const char *VAR_5 = *VAR_3;
    int64_t VAR_6 = 0;

    if (*VAR_5 == '9' || *VAR_5 == '8' || !FUNC_1(*VAR_5))
        return 0;
    do {
        VAR_6 = (VAR_6 << 3) + (*VAR_5 - '0');
    } while (FUNC_1(*++VAR_5) && *VAR_5 != '9' && *VAR_5 != '8');
    if (!FUNC_2(*VAR_5) && *VAR_5 != '\0' && *VAR_5 != ',') {
        FUNC_0(VAR_0, VAR_2,
                       "HERE-->%s", *VAR_3);
        return 0;
    }
    *VAR_3 = FUNC_3(VAR_5);
    VAR_4->type = VAR_1;
    VAR_4->v.int_val = VAR_6;
    return 1;
}
