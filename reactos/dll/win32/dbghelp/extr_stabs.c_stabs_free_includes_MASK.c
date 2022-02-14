
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* vector; struct TYPE_4__* name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_5;

    FUNC_2();
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        FUNC_1(FUNC_0(), 0, VAR_2[VAR_5].name);
        FUNC_1(FUNC_0(), 0, VAR_2[VAR_5].vector);
    }
    FUNC_1(FUNC_0(), 0, VAR_2);
    VAR_2 = ((void*)0);
    VAR_4 = 0;
    VAR_3 = 0;
    FUNC_1(FUNC_0(), 0, VAR_1);
    VAR_1 = ((void*)0);
    VAR_0 = 0;
}
