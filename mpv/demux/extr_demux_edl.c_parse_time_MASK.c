
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 double FUNC_0 (TYPE_1__,TYPE_1__*) ;
 int FUNC_1 (double) ;

__attribute__((used)) static bool FUNC_2(bstr VAR_0, double *VAR_1)
{
    bstr VAR_2;
    double VAR_3 = FUNC_0(VAR_0, &VAR_2);
    if (!VAR_0.len || VAR_2.len || !FUNC_1(VAR_3))
        return 0;
    *VAR_1 = VAR_3;
    return 1;
}
