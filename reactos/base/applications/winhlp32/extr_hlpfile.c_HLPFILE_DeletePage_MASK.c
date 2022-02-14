
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int first_macro; struct TYPE_4__* next; } ;
typedef TYPE_1__ HLPFILE_PAGE ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(HLPFILE_PAGE* VAR_0)
{
    HLPFILE_PAGE* VAR_1;

    while (VAR_0)
    {
        VAR_1 = VAR_0->next;
        FUNC_1(VAR_0->first_macro);
        FUNC_2(FUNC_0(), 0, VAR_0);
        VAR_0 = VAR_1;
    }
}
