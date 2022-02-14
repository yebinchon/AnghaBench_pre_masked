
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;

void FUNC_7(int VAR_1, const ulong *VAR_2, int VAR_3)
{

 if (!VAR_0[VAR_1]) {
  return;
 }


 FUNC_0(VAR_1);


 FUNC_1(VAR_2, VAR_3 << 2);



 FUNC_3(1000);


 if (!FUNC_4(VAR_1)) {
  FUNC_2("Timed out of wait for DMA channel for SATA device %d to have in-progress clear\n",
   VAR_1);
 }


 if (FUNC_6(VAR_1, 30)) {
  FUNC_2("Timed out of wait for SATA device %d to have BUSY clear\n",
   VAR_1);
 }
 if (!FUNC_5(VAR_1)) {
  FUNC_2("oxnas_sata_output_data() Wait for ATA no-error timed-out\n");
 }
}
