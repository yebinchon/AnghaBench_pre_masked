
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int ReadWaitQueue; } ;
typedef TYPE_1__* PCONSRV_CONSOLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static VOID
FUNC_3(PCONSRV_CONSOLE VAR_1)
{
    FUNC_1(&VAR_1->ReadWaitQueue,
                  VAR_0,
                  ((void*)0),
                  ((void*)0));
    if (!FUNC_2(&VAR_1->ReadWaitQueue))
    {
        FUNC_0(&VAR_1->ReadWaitQueue);
    }
}
