
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpoa_client {int number_of_mps_macs; int * mps_macs; } ;
struct k_message {int MPS_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct k_message *VAR_2,
      struct mpoa_client *VAR_3)
{

 if (VAR_3->number_of_mps_macs)
  FUNC_0(VAR_3->mps_macs);
 VAR_3->number_of_mps_macs = 0;
 VAR_3->mps_macs = FUNC_1(VAR_2->MPS_ctrl, VAR_0, VAR_1);
 if (VAR_3->mps_macs == ((void*)0)) {
  FUNC_2("out of memory\n");
  return;
 }
 VAR_3->number_of_mps_macs = 1;
}
