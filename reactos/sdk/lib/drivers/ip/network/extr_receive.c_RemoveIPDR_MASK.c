
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int ListEntry; } ;
typedef TYPE_1__* PIPDATAGRAM_REASSEMBLY ;
typedef int KIRQL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

VOID FUNC_4(
  PIPDATAGRAM_REASSEMBLY VAR_2)





{
  KIRQL VAR_3;

  FUNC_1(VAR_0, ("Removing IPDR at (0x%X).\n", VAR_2));

  FUNC_2(&VAR_1, &VAR_3);
  FUNC_0(&VAR_2->ListEntry);
  FUNC_3(&VAR_1, VAR_3);
}
