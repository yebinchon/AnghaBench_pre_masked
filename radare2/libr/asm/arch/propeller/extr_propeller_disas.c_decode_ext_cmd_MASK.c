
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int ut16 ;
struct propeller_cmd {int operands; int instr; } ;






 int VAR_0 ;




 char** VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_3 (struct propeller_cmd *VAR_2, ut32 VAR_3) {
 ut16 VAR_4;

 VAR_4 = FUNC_1 (VAR_3);

 switch (VAR_4) {
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_2 (VAR_2->instr, VAR_0 - 1,
     "%s", VAR_1[135]);
   FUNC_2 (VAR_2->operands, VAR_0 - 1,
     "%d", FUNC_0 (VAR_3));
   return 4;
   break;
 }

 return -1;
}
