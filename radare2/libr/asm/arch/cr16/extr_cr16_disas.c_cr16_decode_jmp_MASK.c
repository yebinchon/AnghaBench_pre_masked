
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {void* type; int operands; int instr; } ;


 int VAR_0 ;


 void* VAR_1 ;
 char** VAR_2 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct cr16_cmd*,size_t,size_t) ;
 char** VAR_3 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(const ut8 *VAR_4, struct cr16_cmd *VAR_5)
{
 ut16 VAR_6;
 int VAR_7 = 2;

 VAR_6 = FUNC_3 (VAR_4);

 switch (VAR_6 >> 9) {
 case 128:
  if (((VAR_6 >> 5) & 0xf) == 0xE) {
   FUNC_4(VAR_5->instr, VAR_0 - 1, "jump");
  } else {
   FUNC_4(VAR_5->instr, VAR_0 - 1, "j%s",
    VAR_2[FUNC_0(VAR_6)]);
  }
  FUNC_4(VAR_5->operands, VAR_0 - 1, "%s",
   VAR_3[FUNC_1(VAR_6)]);
  break;
 case 129:
  if (!(VAR_6 & 1)) {
   VAR_7 = -1;
   break;
  }
  FUNC_4(VAR_5->instr, VAR_0 - 1, "jal");
  FUNC_2(VAR_5, FUNC_0(VAR_6), FUNC_1(VAR_6));
  VAR_5->type = VAR_1;
  break;
 case 0x0B:
  if (!(VAR_6 & 1)) {
   FUNC_5(VAR_5->instr, "jal", VAR_0 - 1);
   FUNC_4(VAR_5->operands, VAR_0 - 1, "(%s,%s),(%s,%s)",
     VAR_3[FUNC_0(VAR_6) + 1],
     VAR_3[FUNC_0(VAR_6)],
     VAR_3[FUNC_1(VAR_6) + 1],
     VAR_3[FUNC_1(VAR_6)]);
  } else if (FUNC_0(VAR_6) != 0xE) {
   FUNC_4(VAR_5->instr, VAR_0 - 1, "j%s",
     VAR_2[FUNC_0(VAR_6)]);
   FUNC_4(VAR_5->operands, VAR_0 - 1, "(%s,%s)",
     VAR_3[FUNC_1(VAR_6) + 1],
     VAR_3[FUNC_1(VAR_6)]);
  } else {
   FUNC_5(VAR_5->instr, "jump", VAR_0 - 1);
   FUNC_4(VAR_5->operands, VAR_0 - 1, "(%s,%s)",
     VAR_3[FUNC_1(VAR_6) + 1],
     VAR_3[FUNC_1(VAR_6)]);
  }
  break;
 default:
  return -1;
 }

 VAR_5->type = VAR_1;
 return VAR_7;
}
