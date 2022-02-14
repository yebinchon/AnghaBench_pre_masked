
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ Status; } ;
struct TYPE_7__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef int CCHAR ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;

VOID
FUNC_3(
    PIRP VAR_1,
    CCHAR VAR_2)
{
    FUNC_1("Completing IRP %p Status %x\n", VAR_1, VAR_1->IoStatus.Status);

    FUNC_0(VAR_1->IoStatus.Status != VAR_0);


    FUNC_2(VAR_1, VAR_2);
}
