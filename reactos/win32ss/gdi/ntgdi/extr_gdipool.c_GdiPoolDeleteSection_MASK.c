
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int slhLog; } ;
struct TYPE_8__ {scalar_t__ cAllocCount; int pvBaseAddress; } ;
typedef int SIZE_T ;
typedef TYPE_1__* PGDI_POOL_SECTION ;
typedef TYPE_2__* PGDI_POOL ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int *,int ) ;

__attribute__((used)) static
VOID
FUNC_7(PGDI_POOL VAR_2, PGDI_POOL_SECTION VAR_3)
{
    NTSTATUS VAR_4;
    SIZE_T VAR_5 = 0;


    if (VAR_3->cAllocCount != 0)
    {
        FUNC_2("There are %lu allocations left, section=%p, pool=%p\n",
                VAR_3->cAllocCount, VAR_3, VAR_2);
        FUNC_1(&VAR_2->slhLog);
        FUNC_0(VAR_0);
    }


    VAR_4 = FUNC_6(FUNC_5(),
                                 &VAR_3->pvBaseAddress,
                                 &VAR_5,
                                 VAR_1);
    FUNC_0(FUNC_4(VAR_4));


    FUNC_3(VAR_3);
}
