
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_15__ {TYPE_4__* Parent; } ;
struct TYPE_16__ {TYPE_3__ u1; } ;
struct TYPE_19__ {int Unused; TYPE_4__ BalancedRoot; } ;
struct TYPE_18__ {TYPE_9__ VadRoot; } ;
struct TYPE_13__ {int Spare; int Protection; } ;
struct TYPE_14__ {TYPE_1__ VadFlags; } ;
struct TYPE_12__ {scalar_t__ EndingVpn; TYPE_2__ u; } ;
struct TYPE_17__ {scalar_t__ Type; TYPE_10__* Vad; TYPE_10__ VadNode; int Protect; } ;
typedef int PMMSUPPORT ;
typedef TYPE_5__* PMEMORY_AREA ;
typedef TYPE_6__* PEPROCESS ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 TYPE_9__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 TYPE_6__* FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static VOID
FUNC_10(
    PMMSUPPORT VAR_9,
    PMEMORY_AREA VAR_10)
{
    PEPROCESS VAR_11 = FUNC_7(VAR_9);

    VAR_10->VadNode.u.VadFlags.Spare = 1;
    VAR_10->VadNode.u.VadFlags.Protection = FUNC_4(VAR_10->Protect);


    if (VAR_10->VadNode.EndingVpn + 1 < (ULONG_PTR)VAR_6 >> VAR_7)
    {
        FUNC_0(VAR_11 != ((void*)0));
        if (VAR_10->Type != VAR_1)
        {
            FUNC_0(VAR_10->Type == VAR_2 || VAR_10->Type == VAR_0);


            FUNC_2(FUNC_8(), FUNC_9());
            FUNC_1(&VAR_10->VadNode, &VAR_11->VadRoot);
            FUNC_5(FUNC_8(), FUNC_9());
            VAR_10->Vad = &VAR_10->VadNode;
        }
    }
    else
    {
        FUNC_0(VAR_11 == ((void*)0));

        if (!VAR_4)
        {
            VAR_3.BalancedRoot.u1.Parent = &VAR_3.BalancedRoot;
            VAR_3.Unused = 1;
            VAR_4 = VAR_8;
        }


        FUNC_3(FUNC_9(), &VAR_5);
        FUNC_1(&VAR_10->VadNode, &VAR_3);
        FUNC_6(FUNC_9(), &VAR_5);
        VAR_10->Vad = ((void*)0);
    }
}
