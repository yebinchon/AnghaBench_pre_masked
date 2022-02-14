
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* FunctionTypes; scalar_t__ nFunctions; } ;
typedef TYPE_1__ _cmsParametricCurvesCollection ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static
int FUNC_1(int VAR_0, _cmsParametricCurvesCollection* VAR_1)
{
    int VAR_2;

    for (VAR_2=0; VAR_2 < (int) VAR_1 ->nFunctions; VAR_2++)
        if (FUNC_0(VAR_0) == VAR_1 ->FunctionTypes[VAR_2]) return VAR_2;

    return -1;
}
