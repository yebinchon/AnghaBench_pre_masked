
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int help_page ;


 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 static char* VAR_0[]=
 {
  "mknspimg version 1.0, Texas Instruments, 2004",
  "Syntax:",
  "        mknspimg -o outfile -i image1 image2 -a align1 align2 [-v] [-b] [-p prod_id] [-r rel_id] [-s rel_name] [-f flags]",
  "Example:",
  "        mknspimg -o nsp_image.bin -i kernel.bin files.img -a 0 4096",
  "This generates 'nsp_image.bin' from two input files aligning first to 0 and second to 4096 bytes."
 };

 int VAR_1 = sizeof(VAR_0)/sizeof(char*);
 int VAR_2;
 for(VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0("%s\n", VAR_0[VAR_2]);
 }
}
