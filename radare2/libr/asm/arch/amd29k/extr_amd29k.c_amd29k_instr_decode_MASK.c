
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_9__ {char* cpu; int const mask; char* mnemonic; int op_type; int (* decode ) (TYPE_2__*,int const*) ;} ;
typedef TYPE_1__ amd29k_instruction_t ;
struct TYPE_10__ {char* mnemonic; int op_type; } ;
typedef TYPE_2__ amd29k_instr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (TYPE_2__*,int const*) ;
 int FUNC_4 (TYPE_2__*,int const*) ;

bool FUNC_5(const ut8* VAR_4, const ut32 VAR_5, amd29k_instr_t* VAR_6, const char* VAR_7) {
 if (!VAR_4 || VAR_5 < 4 || !VAR_6 || (VAR_7 && FUNC_1 (VAR_7) < 5)) {
  return 0;
 }
 if (!VAR_7) {
  VAR_7 = VAR_0;
 }
 if (VAR_4[0] == 0x70 && VAR_4[1] == 0x40 && VAR_4[2] == 0x01 && VAR_4[3] == 0x01) {
  FUNC_0 (VAR_6, VAR_4);
  VAR_6->mnemonic = "nop";
  VAR_6->op_type = VAR_2;
  return 1;
 }
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  const amd29k_instruction_t *VAR_9 = &VAR_3[VAR_8];
  if (VAR_9->cpu[0] == '*' && VAR_9->mask == VAR_4[0]) {
   VAR_9->decode (VAR_6, VAR_4);
   VAR_6->mnemonic = VAR_9->mnemonic;
   VAR_6->op_type = VAR_9->op_type;
   return 1;
  } else if (VAR_9->cpu[0] != '*' && VAR_9->cpu[3] == '0' && VAR_9->mask == VAR_4[0]) {
   VAR_9->decode (VAR_6, VAR_4);
   VAR_6->mnemonic = VAR_9->mnemonic;
   VAR_6->op_type = VAR_9->op_type;
   return 1;
  } else if (VAR_9->cpu[0] != '*' && VAR_9->cpu[3] == '5' && VAR_9->mask == VAR_4[0]) {
   VAR_9->decode (VAR_6, VAR_4);
   VAR_6->mnemonic = VAR_9->mnemonic;
   VAR_6->op_type = VAR_9->op_type;
   return 1;
  }
 }
 return 0;
}
