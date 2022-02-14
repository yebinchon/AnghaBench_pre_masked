
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG64 ;
struct TYPE_2__ {int Limit; int Base; } ;
typedef int PVOID ;
typedef int* PULONG64 ;
typedef scalar_t__ PKGDTENTRY64 ;
typedef int KTSS ;
typedef int KGDTENTRY ;
typedef TYPE_1__ KDESCRIPTOR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int,int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static
VOID
FUNC_4(PVOID VAR_10, ULONG64 VAR_11)
{
    PKGDTENTRY64 VAR_12;
    KDESCRIPTOR VAR_13;
    FUNC_2("Amd64SetupGdt(GdtBase = %p, TssBase = %p)\n", VAR_10, VAR_11);


    VAR_12 = FUNC_0(VAR_10, VAR_1);
    *(PULONG64)VAR_12 = 0x0000000000000000ULL;


    VAR_12 = FUNC_0(VAR_10, VAR_2);
    *(PULONG64)VAR_12 = 0x00209b0000000000ULL;


    VAR_12 = FUNC_0(VAR_10, VAR_3);
    *(PULONG64)VAR_12 = 0x00cf93000000ffffULL;


    VAR_12 = FUNC_0(VAR_10, VAR_4);
    *(PULONG64)VAR_12 = 0x00cffb000000ffffULL;


    VAR_12 = FUNC_0(VAR_10, VAR_7);
    *(PULONG64)VAR_12 = 0x00cff3000000ffffULL;


    VAR_12 = FUNC_0(VAR_10, VAR_6);
    *(PULONG64)VAR_12 = 0x0020fb0000000000ULL;


    VAR_12 = FUNC_0(VAR_10, VAR_5);
    *(PULONG64)VAR_12 = 0xff40f3fd50003c00ULL;


    VAR_12 = FUNC_0(VAR_10, VAR_8);
    FUNC_1(VAR_12, VAR_11, sizeof(KTSS), VAR_0, 0);


    VAR_13.Base = VAR_10;
    VAR_13.Limit = VAR_9 * sizeof(KGDTENTRY) - 1;


    FUNC_3(&VAR_13.Limit);
    FUNC_2("Leave Amd64SetupGdt()\n");
}
