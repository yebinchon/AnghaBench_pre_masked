
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
typedef int * PVOID ;
typedef TYPE_3__* PLOADER_PARAMETER_BLOCK ;
typedef int * PKGDTENTRY ;
typedef int KTSS ;
typedef int KIDTENTRY ;
typedef int KGDTENTRY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int) ;
 int VAR_11 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

void FUNC_5(PLOADER_PARAMETER_BLOCK VAR_12)
{
    ULONG_PTR VAR_13 = 0;
    ULONG_PTR VAR_14 = 0;
    ULONG VAR_15, VAR_16;

    VAR_12->u.I386.CommonDataArea = (PVOID)VAR_0;
    VAR_12->u.I386.MachineType = VAR_5;


    VAR_13 = (ULONG_PTR)FUNC_1(2 * VAR_7, VAR_4);
    VAR_10 = VAR_13 >> VAR_6;
    if (VAR_13 == 0)
    {
        FUNC_3("Can't allocate PCR.");
        return;
    }
    FUNC_2((PVOID)VAR_13, 2 * VAR_7);


    VAR_15 = (sizeof(KTSS) + VAR_7) & ~(VAR_7 - 1);
    VAR_14 = (ULONG_PTR)FUNC_1(VAR_15, VAR_3);
    VAR_11 = VAR_14 >> VAR_6;


    VAR_15 = VAR_8 * sizeof(KGDTENTRY) + VAR_9 * sizeof(KIDTENTRY);
    VAR_16 = (VAR_15 + VAR_7 - 1) >> VAR_6;
    VAR_2 = (PKGDTENTRY)FUNC_1(VAR_16 * VAR_7, VAR_3);
    if (VAR_2 == ((void*)0))
    {
        FUNC_3("Can't allocate pages for GDT+IDT!");
        return;
    }


    FUNC_2(VAR_2, VAR_16 << VAR_6);



    if (FUNC_0() == VAR_1)
    {

    }


    FUNC_4();
}
