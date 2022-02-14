
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;
struct cr16_cmd {int type; int operands; scalar_t__* instr; } ;


 int VAR_0 ;


 int VAR_1 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 char** VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (scalar_t__*,char const*,int) ;
 int FUNC_4 (int ,int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(const ut8 *VAR_5, struct cr16_cmd *VAR_6) {
 int VAR_7 = 2;

 ut16 VAR_8 = FUNC_2 (VAR_5);

 const char *VAR_9 = VAR_4[VAR_8 >> 9];
 if (VAR_9) {
  FUNC_3 (VAR_6->instr, VAR_9, sizeof (VAR_6->instr) - 1);
 } else {
  *VAR_6->instr = 0;
 }

 switch (VAR_8 >> 9) {
 case 129:
  FUNC_4 (VAR_6->operands, VAR_0 - 1,
    "%s,%s",VAR_2[FUNC_1(VAR_8)],
    VAR_3[FUNC_0(VAR_8)]);
  break;
 case 128:
  FUNC_4 (VAR_6->operands, VAR_0 - 1,
    "%s,%s", VAR_3[FUNC_0(VAR_8)],
    VAR_2[FUNC_1(VAR_8)]);
  break;
 }

 VAR_6->type = VAR_1;

 return VAR_7;
}
