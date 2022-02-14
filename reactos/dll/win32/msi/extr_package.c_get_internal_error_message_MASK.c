
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int * text; } ;
typedef int * LPCWSTR ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static LPCWSTR FUNC_1(int VAR_1)
{
    int VAR_2 = 0;

    while (VAR_0[VAR_2].id != 0)
    {
        if (VAR_0[VAR_2].id == VAR_1)
            return VAR_0[VAR_2].text;
        VAR_2++;
    }

    FUNC_0("missing error message %d\n", VAR_1);
    return ((void*)0);
}
