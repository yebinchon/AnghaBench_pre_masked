
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int HardwareEsp; int HardwareSegSs; } ;
struct TYPE_4__ {TYPE_2__ Tf; } ;
typedef int PKTRAP_FRAME ;
typedef TYPE_1__* PKDB_KTRAP_FRAME ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static VOID
FUNC_4(
    PKDB_KTRAP_FRAME VAR_2,
    PKTRAP_FRAME VAR_3)
{

    FUNC_3(VAR_3, &VAR_2->Tf, FUNC_0(VAR_1, VAR_0));



    FUNC_2(VAR_3, VAR_2->Tf.HardwareSegSs);
    FUNC_1(VAR_3, VAR_2->Tf.HardwareEsp);


}
