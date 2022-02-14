
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* DebugInfo; } ;
struct handle_wrapper {TYPE_2__ lock; int * hglobal; scalar_t__ delete_on_release; int ref; } ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__* Spare; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct handle_wrapper*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct handle_wrapper *VAR_0)
{
    ULONG VAR_1 = FUNC_4(&VAR_0->ref);

    if (!VAR_1)
    {
        if (VAR_0->delete_on_release)
        {
            FUNC_2(VAR_0->hglobal);
            VAR_0->hglobal = ((void*)0);
        }

        VAR_0->lock.DebugInfo->Spare[0] = 0;
        FUNC_0(&VAR_0->lock);
        FUNC_3(FUNC_1(), 0, VAR_0);
    }
}
