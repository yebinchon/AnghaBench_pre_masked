
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int operands; int instr; } ;
typedef TYPE_1__ ebc_command_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 FUNC_0(VAR_5->instr, VAR_1, "%s", VAR_3[VAR_0]);
 FUNC_0(VAR_5->operands, VAR_2, "%d", VAR_4[1]);
 return 2;
}
