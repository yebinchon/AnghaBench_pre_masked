
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct propeller_cmd {int instr; scalar_t__* operands; scalar_t__* prefix; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int const*,struct propeller_cmd*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 char* FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 const char *VAR_4;
 struct propeller_cmd VAR_5;
 int VAR_6 = FUNC_0 (VAR_2, &VAR_5);
 if (VAR_5.prefix[0] && VAR_5.operands[0]) {
  VAR_4 = FUNC_2 ("%s %s %s", VAR_5.prefix, VAR_5.instr, VAR_5.operands);
 } else if (VAR_5.operands[0]) {
  VAR_4 = FUNC_2 ("%s %s", VAR_5.instr, VAR_5.operands);
 } else {
  VAR_4 = FUNC_2 ("%s", VAR_5.instr);
 }
 FUNC_1 (VAR_1, VAR_4);
 VAR_1->size = 4;
 return VAR_6;
}
