
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int count; struct TYPE_6__* cmd; int entry; int hModule; int hWnd; int (* proc ) (int ,int ,long,long) ;TYPE_1__* info; } ;
struct TYPE_5__ {long data; } ;
typedef TYPE_2__ CPlApplet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,unsigned int,long) ;
 int FUNC_5 (int ,int ,long,long) ;

void FUNC_6(CPlApplet* VAR_2)
{
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++)
        VAR_2->proc(VAR_2->hWnd, VAR_1, VAR_3, VAR_2->info[VAR_3].data);

    if (VAR_2->proc) VAR_2->proc(VAR_2->hWnd, VAR_0, 0L, 0L);
    FUNC_0(VAR_2->hModule);

    FUNC_3( &VAR_2->entry );

    FUNC_2(FUNC_1(), 0, VAR_2->cmd);
    FUNC_2(FUNC_1(), 0, VAR_2);
}
