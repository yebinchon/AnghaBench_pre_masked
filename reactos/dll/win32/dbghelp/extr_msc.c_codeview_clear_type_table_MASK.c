
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_defined_types; int * defined_types; scalar_t__ allowed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if (VAR_3[VAR_4].allowed)
            FUNC_1(FUNC_0(), 0, VAR_3[VAR_4].defined_types);
        VAR_3[VAR_4].allowed = VAR_1;
        VAR_3[VAR_4].defined_types = ((void*)0);
        VAR_3[VAR_4].num_defined_types = 0;
    }
    VAR_2 = ((void*)0);
}
