
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ut8 ;
struct TYPE_3__ {int operands; int instr; } ;
typedef TYPE_1__ ebc_command_t ;


 int VAR_0 ;
 size_t const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t const,int) ;
 char** VAR_3 ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 char VAR_6[3] = {0};
 if (FUNC_0 (VAR_4[0], 7)) {
  const char *VAR_7 = (FUNC_0(VAR_4[0], 6))? "cs": "cc";
  FUNC_1 (VAR_6, 3, "%s", VAR_7);
 }
 FUNC_1(VAR_5->instr, VAR_0, "%s%s",
   VAR_3[VAR_4[0] & VAR_1], VAR_6);
 FUNC_1(VAR_5->operands, VAR_2, "0x%x", VAR_4[1]);
 return 2;
}
