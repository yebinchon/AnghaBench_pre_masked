
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* first_link; } ;
typedef TYPE_1__ HLPFILE_PAGE ;
typedef TYPE_2__ HLPFILE_LINK ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(HLPFILE_PAGE* VAR_0)
{
    HLPFILE_LINK* VAR_1;
    HLPFILE_LINK* VAR_2;

    for (VAR_1 = VAR_0->first_link; VAR_1; VAR_1 = VAR_2)
    {
        VAR_2 = VAR_1->next;
        FUNC_1(FUNC_0(), 0, VAR_1);
    }
}
