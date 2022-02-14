
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int buf_asm ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ amd29k_instr_t ;
struct TYPE_11__ {int cpu; int pc; } ;
struct TYPE_10__ {int size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 scalar_t__ FUNC_0 (int const*,int,TYPE_1__*,int ) ;
 int FUNC_1 (char*,int,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (!VAR_0 || !VAR_1 || !VAR_2 || VAR_3 < 4) {
  return -1;
 }
 char VAR_4[64];
 ut64 VAR_5 = VAR_0->pc;
 amd29k_instr_t VAR_6 = {0};
 VAR_1->size = 4;
 if (FUNC_0 (VAR_2, VAR_3, &VAR_6, VAR_0->cpu)) {
  FUNC_1 (VAR_4, sizeof (VAR_4), VAR_5, &VAR_6);
  FUNC_2 (VAR_1, VAR_4);
  return 4;
 }
 FUNC_2 (VAR_1, "invalid");
 return -1;
}
