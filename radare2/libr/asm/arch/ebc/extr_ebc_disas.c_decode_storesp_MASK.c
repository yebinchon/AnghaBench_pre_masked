
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int operands; int instr; } ;
typedef TYPE_1__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,int const,char*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_1 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_5, ebc_command_t *VAR_6) {
 int VAR_7 = 2;
 unsigned VAR_8 = (VAR_5[1] >> 4) & 0x07;
 FUNC_1 (VAR_6->instr, VAR_0, "%s",
  VAR_4[VAR_5[0] & VAR_1]);
 FUNC_0 (VAR_6->operands, VAR_2, "r%u, %s",
  VAR_5[1] & 0x7,
  VAR_8 < 2 ? VAR_3[VAR_8] : "RESERVED_DEDICATED_REG");
 return VAR_7;
}
