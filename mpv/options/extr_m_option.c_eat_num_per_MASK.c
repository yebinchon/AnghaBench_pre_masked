
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 long long VAR_0 ;
 long long VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 long long FUNC_1 (TYPE_1__,TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_2(bstr *VAR_2, int *VAR_3, bool *VAR_4)
{
    bstr VAR_5;
    long long VAR_6 = FUNC_1(*VAR_2, &VAR_5, 10);
    if (VAR_2->len == VAR_5.len || VAR_6 < VAR_1 || VAR_6 > VAR_0)
        return 0;
    *VAR_3 = VAR_6;
    *VAR_4 = 0;
    *VAR_2 = VAR_5;
    if (FUNC_0(&VAR_5, "%") && VAR_6 >= 0 && VAR_6 <= 100) {
        *VAR_4 = 1;
        *VAR_2 = VAR_5;
    }
    return 1;
}
