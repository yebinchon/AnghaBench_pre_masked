
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef int FILE ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_3 (FILE *VAR_2)
{
  unsigned int VAR_3;

  FUNC_2 (VAR_2, FUNC_1("\nThe following MIPS specific disassembler options are supported for use\nwith the -M switch (multiple options should be separated by commas):\n"));



  FUNC_2 (VAR_2, FUNC_1("\n  gpr-names=ABI            Print GPR names according to  specified ABI.\n                           Default: based on binary being disassembled.\n"));



  FUNC_2 (VAR_2, FUNC_1("\n  fpr-names=ABI            Print FPR names according to specified ABI.\n                           Default: numeric.\n"));



  FUNC_2 (VAR_2, FUNC_1("\n  cp0-names=ARCH           Print CP0 register names according to\n                           specified architecture.\n                           Default: based on binary being disassembled.\n"));




  FUNC_2 (VAR_2, FUNC_1("\n  hwr-names=ARCH           Print HWR names according to specified \n			   architecture.\n                           Default: based on binary being disassembled.\n"));




  FUNC_2 (VAR_2, FUNC_1("\n  reg-names=ABI            Print GPR and FPR names according to\n                           specified ABI.\n"));



  FUNC_2 (VAR_2, FUNC_1("\n  reg-names=ARCH           Print CP0 register and HWR names according to\n                           specified architecture.\n"));



  FUNC_2 (VAR_2, FUNC_1("\n  For the options above, the following values are supported for \"ABI\":\n   "));


  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_0); VAR_3++) {
   FUNC_2 (VAR_2, " %s", VAR_0[VAR_3].name);
  }
  FUNC_2 (VAR_2, FUNC_1("\n"));

  FUNC_2 (VAR_2, FUNC_1("\n  For the options above, The following values are supported for \"ARCH\":\n   "));


  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_1); VAR_3++) {
   if (*VAR_1[VAR_3].name != '\0') {
    FUNC_2 (VAR_2, " %s", VAR_1[VAR_3].name);
   }
  }
  FUNC_2 (VAR_2, FUNC_1("\n"));

  FUNC_2 (VAR_2, FUNC_1("\n"));
}
