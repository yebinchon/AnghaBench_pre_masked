
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ HLPFILE_MACRO ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(HLPFILE_MACRO* VAR_0)
{
    HLPFILE_MACRO* VAR_1;

    while (VAR_0)
    {
        VAR_1 = VAR_0->next;
        FUNC_1(FUNC_0(), 0, VAR_0);
        VAR_0 = VAR_1;
    }
}
