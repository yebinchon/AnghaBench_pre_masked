
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_2__ {int Limit; int Base; } ;
typedef int PVOID ;
typedef int KIDTENTRY ;
typedef TYPE_1__ KDESCRIPTOR ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static
VOID
FUNC_4(PVOID VAR_1)
{
    KDESCRIPTOR VAR_2, VAR_3;
    ULONG VAR_4;
    FUNC_0("Amd64SetupIdt(IdtBase = %p)\n", VAR_1);


    FUNC_2(&VAR_3.Limit);


    VAR_4 = FUNC_3(VAR_3.Limit + 1, VAR_0 * sizeof(KIDTENTRY));



    VAR_2.Base = VAR_1;
    VAR_2.Limit = VAR_0 * sizeof(KIDTENTRY) - 1;


    FUNC_1(&VAR_2.Limit);
    FUNC_0("Leave Amd64SetupIdt()\n");
}
