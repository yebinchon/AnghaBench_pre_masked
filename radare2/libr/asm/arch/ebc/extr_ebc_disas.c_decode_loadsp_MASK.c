
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
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 (int ,int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_5, ebc_command_t *VAR_6) {
 int VAR_7 = 2;
 FUNC_0(VAR_6->instr, VAR_0, "%s",
   VAR_4[VAR_5[0] & VAR_1]);
 FUNC_0(VAR_6->operands, VAR_2, "%s, r%u",
   VAR_3[VAR_5[1] & 0x7],
   (VAR_5[1] >> 4) & 0x7);
 return VAR_7;
}
