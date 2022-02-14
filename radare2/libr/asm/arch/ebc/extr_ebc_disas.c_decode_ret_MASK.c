
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {char* operands; int instr; } ;
typedef TYPE_1__ ebc_command_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_3, ebc_command_t *VAR_4) {
 int VAR_5 = 2;
 FUNC_0(VAR_4->instr, VAR_0, "%s", VAR_2[VAR_1]);
 VAR_4->operands[0] = '\0';
 return VAR_5;
}
