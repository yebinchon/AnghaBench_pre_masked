
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_10__ {char* instr; scalar_t__* operands; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ ebc_command_t ;
struct TYPE_11__ {int size; } ;
typedef TYPE_4__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int const*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,char const*) ;
 char* FUNC_2 (char*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ebc_command_t VAR_4 = { 0, 0 };
 int VAR_5 = FUNC_0 (VAR_2, &VAR_4);
 const char *VAR_6 = (VAR_4.operands[0])
  ? FUNC_2 ("%s %s", VAR_4.instr, VAR_4.operands): VAR_4.instr;
 FUNC_1 (VAR_1, VAR_6);
 return VAR_1->size = VAR_5;
}
