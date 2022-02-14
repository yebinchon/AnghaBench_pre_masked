
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int formattingOptions ;
struct TYPE_6__ {TYPE_1__* instruction; } ;
typedef TYPE_2__ disassembledInstruction ;
struct TYPE_5__ {char* mnemonic; int numOperands; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,TYPE_2__ const,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, const disassembledInstruction VAR_3, formattingOptions VAR_4) {

 int VAR_5, VAR_6;
 char VAR_7[256];
 *VAR_2 = '\0';



 if (VAR_1 == VAR_0)
  return 0;

 FUNC_1 (VAR_2, VAR_3.instruction->mnemonic);
 if (VAR_3.instruction->numOperands > 0)
  FUNC_1 (VAR_2, " ");

 for (VAR_6 = 0; VAR_6 < VAR_3.instruction->numOperands; VAR_6++) {


  if (VAR_6 > 0 && VAR_6 != VAR_3.instruction->numOperands)
   FUNC_1 (VAR_2, ", ");

  VAR_5 = FUNC_0(VAR_7, VAR_6, VAR_3, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  FUNC_1 (VAR_2, VAR_7);
 }

 return 1;
}
