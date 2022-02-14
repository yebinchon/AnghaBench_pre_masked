
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* mnemonic; TYPE_1__* operands; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ ArmOp ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1, ArmOp *VAR_2) {
 char *VAR_3 = FUNC_2 (VAR_1);
 char *VAR_4 = FUNC_1 (VAR_3, ' ');
 if (!VAR_4) {
  VAR_2->operands[0].type = VAR_0;
  VAR_2->mnemonic = VAR_3;
   return 1;
 }
 VAR_4[0] = '\0';
 VAR_2->mnemonic = VAR_3;
 VAR_4 ++;
 return FUNC_0 (VAR_4, VAR_2);
}
