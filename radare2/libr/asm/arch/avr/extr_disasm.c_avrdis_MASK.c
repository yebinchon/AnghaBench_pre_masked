
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* ut64 ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ formattingOptions ;
typedef int disassembledInstruction ;
typedef int cut8 ;
struct TYPE_6__ {int opcode; void* address; } ;
typedef TYPE_2__ assembledInstruction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__) ;
 int FUNC_1 (char*,int ,TYPE_1__) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3 (char *VAR_2, ut64 VAR_3, cut8 *VAR_4, int VAR_5) {
 formattingOptions VAR_6 = { 0 };
 disassembledInstruction VAR_7;
 assembledInstruction VAR_8;
 VAR_1 = 0;
 VAR_0 = 0;
 if (VAR_5 < 2) {
  FUNC_2 (VAR_2, "truncated");
  return -1;
 }
 VAR_8.address = VAR_3;
 VAR_8.opcode = (VAR_4[0] | VAR_4[1] << 8);
 if (FUNC_0 (&VAR_7, VAR_8)) {
  FUNC_2 (VAR_2, "invalid");
  return -1;
 }
 if (VAR_1) {
  if (VAR_5 < 4) {
   FUNC_2 (VAR_2, "truncated");
   return -1;
  }
  VAR_8.address = VAR_3;

  VAR_8.opcode = (VAR_4[3] << 8) | (VAR_4[2]);




  if (FUNC_0 (&VAR_7, VAR_8)) {
   FUNC_2 (VAR_2, "invalid");
   return -1;
  }
  FUNC_1 (VAR_2, VAR_7, VAR_6);
  return 4;
 }
 FUNC_1 (VAR_2, VAR_7, VAR_6);

 return 2;
}
