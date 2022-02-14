
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct cr16_cmd {int type; int operands; int instr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,scalar_t__,char*,...) ;

int FUNC_6(const ut8 *VAR_4, struct cr16_cmd *VAR_5)
{
 int VAR_6 = 2;
 ut32 VAR_7;
 ut16 VAR_8, VAR_9;
 ut8 VAR_10, VAR_11;

 VAR_8 = FUNC_4 (VAR_4);

 if (((VAR_8 >> 6) & 0x3) == 0x3) {
  return -1;
 }

 VAR_10 = FUNC_0(VAR_8);
 VAR_11 = FUNC_2(VAR_8);

 if (!(VAR_10 & 0x6)) {
  return -1;
 }

 FUNC_5(VAR_5->instr, VAR_0 - 1, "%s%c",
   VAR_3[(VAR_8 >> 6) & 0x3],
   FUNC_1(VAR_8) ? 'w' : 'b');

 switch (((VAR_8 >> 13) & 0x2) | (VAR_8 & 0x1)) {
 case 0x0:
  VAR_6 = 4;
  VAR_9 = FUNC_3 (VAR_4, 2);

  VAR_7 = VAR_9 | ((VAR_10 & 0x1) << 16) | ((VAR_10 >> 3) << 17);

  FUNC_5(VAR_5->operands, VAR_0 - 1,
    "$0x%02x,0x%08x", VAR_11, VAR_7);

  break;
 case 0x1:
  VAR_6 = 4;

  VAR_9 = FUNC_3 (VAR_4, 2);

  FUNC_5(VAR_5->operands, VAR_0 - 1,
    "$0x%02x,0x%04x(%s)", VAR_11,
    VAR_9, VAR_2[VAR_10 & 0x9]);

  break;
 case 0x3:
  FUNC_5(VAR_5->operands, VAR_0 - 1,
    "$0x%02x,0(%s)", VAR_11,
    VAR_2[VAR_10 & 0x9]);
  break;
 default:
  VAR_6 = -1;
 }

 VAR_5->type = VAR_1;
 return VAR_6;
}
