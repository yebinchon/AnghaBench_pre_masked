
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_5__ {int MachineType; int * CommonDataArea; } ;
struct TYPE_6__ {TYPE_1__ I386; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__* PLOADER_PARAMETER_BLOCK ;
typedef int * PKGDTENTRY ;
typedef int KTSS ;
typedef int KIDTENTRY ;
typedef int KGDTENTRY ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int) ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(PLOADER_PARAMETER_BLOCK VAR_11)
{
    ULONG VAR_12;

    ULONG_PTR VAR_13 = 0;
    ULONG_PTR VAR_14 = 0;
    ULONG VAR_15, VAR_16;

    VAR_11->u.I386.CommonDataArea = ((void*)0);
    VAR_11->u.I386.MachineType = VAR_4;


    VAR_13 = (ULONG_PTR)FUNC_2(2 * VAR_6, VAR_3);
    VAR_9 = VAR_13 >> VAR_5;
    if (VAR_13 == 0)
    {
        FUNC_4("Could not allocate PCR.");
        return;
    }


    VAR_12 = (sizeof(KTSS) + VAR_6) & ~(VAR_6 - 1);


    VAR_14 = (ULONG_PTR)FUNC_2(VAR_12, VAR_2);
    VAR_10 = VAR_14 >> VAR_5;
    if (VAR_14 == 0)
    {
        FUNC_4("Could not allocate TSS.");
        return;
    }


    VAR_15 = VAR_7*sizeof(KGDTENTRY) + VAR_8*sizeof(KIDTENTRY);
    VAR_16 = (VAR_15 + VAR_6 - 1) >> VAR_5;
    VAR_1 = (PKGDTENTRY)FUNC_2(VAR_16 * VAR_6, VAR_2);
    if (VAR_1 == ((void*)0))
    {
        FUNC_4("Could not allocate pages for GDT+IDT!");
        return;
    }


    FUNC_3(VAR_1, VAR_16 << VAR_5);



    if (FUNC_1() == VAR_0)
    {
        FUNC_0("MempAllocatePageTables failed!\n");
    }


    FUNC_5();


    FUNC_6();
}
