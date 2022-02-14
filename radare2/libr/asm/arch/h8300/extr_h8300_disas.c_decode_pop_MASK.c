
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct h8300_cmd {char* instr; int operands; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int const) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_1, struct h8300_cmd *VAR_2)
{
 int VAR_3 = 2;
 ut8 VAR_4 = VAR_1[1] >> 4;

 FUNC_1(VAR_2->instr, VAR_4 == 0x7 ? "pop" : "push",
   VAR_0 - 1);
 VAR_2->instr[VAR_0 - 1] = '\0';


 FUNC_0(VAR_2->operands, VAR_0,
   "r%u", VAR_1[1] & 0x7);

 return VAR_3;
}
