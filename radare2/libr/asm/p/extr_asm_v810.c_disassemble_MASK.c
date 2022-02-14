
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct v810_cmd {char* instr; char* operands; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int const*,int,struct v810_cmd*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 struct v810_cmd VAR_4 = {
  .instr = "",
  .operands = ""
 };
 if (VAR_3 < 2) {
  return -1;
 }
 int VAR_5 = FUNC_2 (VAR_2, VAR_3, &VAR_4);
 if (VAR_5 > 0) {
  FUNC_0 (VAR_1, FUNC_1 ("%s %s", VAR_4.instr, VAR_4.operands));
 }
 return VAR_1->size = VAR_5;
}
