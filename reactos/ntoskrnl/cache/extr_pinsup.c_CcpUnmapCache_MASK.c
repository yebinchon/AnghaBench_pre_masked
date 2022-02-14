
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int ToDeref; int ToUnmap; } ;
typedef TYPE_1__* PWORK_QUEUE_WITH_CONTEXT ;
typedef int PVOID ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

VOID
FUNC_4(PVOID VAR_0)
{
    PWORK_QUEUE_WITH_CONTEXT VAR_1 = (PWORK_QUEUE_WITH_CONTEXT)VAR_0;
    FUNC_0("Unmapping (finally) %x\n", VAR_1->ToUnmap);
    FUNC_2(VAR_1->ToUnmap);
    FUNC_3(VAR_1->ToDeref);
    FUNC_1(VAR_1);
    FUNC_0("Done\n");
}
