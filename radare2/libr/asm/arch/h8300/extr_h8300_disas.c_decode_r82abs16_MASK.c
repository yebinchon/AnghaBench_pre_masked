
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct h8300_cmd {int operands; int instr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,struct h8300_cmd*) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int ,int ,char*,int const,int const,char) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_1, struct h8300_cmd *VAR_2)
{
 int VAR_3 = 4;
 ut16 VAR_4;

 if (VAR_1[0] == 0x6A && VAR_1[1] >> 4 == 4) {
  FUNC_3(VAR_2->instr, "movfpe", VAR_0);
 } else if (VAR_1[0] == 0x6A && VAR_1[1] >> 4 == 0xC) {
  FUNC_3(VAR_2->instr, "movtpe", VAR_0);
 } else if (FUNC_0(VAR_1, VAR_2)) {
  return -1;
 }

 VAR_4 = FUNC_1 (VAR_1, 2);

 if (VAR_1[1] & 0x80) {
  FUNC_2(VAR_2->operands, VAR_0, "r%u%c,@0x%x:16",
   VAR_1[1] & 0x7, VAR_1[1] & 0x8 ? 'l' : 'h', VAR_4);
 } else {
  FUNC_2(VAR_2->operands, VAR_0, "@0x%x:16,r%u%c",
   VAR_4, VAR_1[1] & 0x7,
   VAR_1[1] & 0x8 ? 'l' : 'h');
 }

 return VAR_3;
}
