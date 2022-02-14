
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_3__ {int ExclusiveWaiter; int Exclusive; int SectionObject; int ExclusiveWait; } ;
typedef TYPE_1__* PNOCC_BCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,size_t) ;
 int VAR_5 ;

VOID
FUNC_5(ULONG VAR_6)
{
    PNOCC_BCB VAR_7 = &VAR_1[VAR_6];

    FUNC_3(&VAR_7->ExclusiveWait,
                          VAR_2,
                          VAR_4,
                          VAR_3,
                          ((void*)0));

    FUNC_1();
    FUNC_0(VAR_7->ExclusiveWaiter);
    FUNC_0(VAR_7->SectionObject);
    VAR_7->Exclusive = VAR_5;
    VAR_7->ExclusiveWaiter--;
    FUNC_4(VAR_0, VAR_6);
    FUNC_2();
}
