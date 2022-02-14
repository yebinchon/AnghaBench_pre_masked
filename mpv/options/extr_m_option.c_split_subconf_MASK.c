
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_1__ bstr ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct mp_log*,TYPE_1__,char*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct mp_log *VAR_0, bstr VAR_1, bstr *VAR_2,
                         bstr *VAR_3, bstr *VAR_4)
{
    bstr VAR_5 = *VAR_2;
    bstr VAR_6 = {0};
    bstr VAR_7;
    int VAR_8 = FUNC_1(VAR_0, VAR_1, ":=,\\%\"'[]", &VAR_5, &VAR_7);
    if (VAR_8 < 0)
        return VAR_8;
    if (FUNC_0(&VAR_5, "=")) {
        VAR_8 = FUNC_1(VAR_0, VAR_7, ":=,\\%\"'[]", &VAR_5, &VAR_6);
        if (VAR_8 < 0)
            return VAR_8;
    }
    *VAR_2 = VAR_5;
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_6;
    return 0;
}
