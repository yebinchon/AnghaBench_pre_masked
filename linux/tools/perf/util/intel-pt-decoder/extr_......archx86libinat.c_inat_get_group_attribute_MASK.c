
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int insn_byte_t ;
typedef int const insn_attr_t ;


 size_t FUNC_0 (int ) ;
 int const FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int*** VAR_0 ;
 scalar_t__ FUNC_3 (int const) ;

insn_attr_t FUNC_4(insn_byte_t VAR_1, int VAR_2,
         insn_attr_t VAR_3)
{
 const insn_attr_t *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);

 VAR_4 = VAR_0[VAR_5][0];
 if (!VAR_4)
  return FUNC_1(VAR_3);
 if (FUNC_3(VAR_4[FUNC_0(VAR_1)]) && VAR_2) {
  VAR_4 = VAR_0[VAR_5][VAR_2];
  if (!VAR_4)
   return FUNC_1(VAR_3);
 }
 return VAR_4[FUNC_0(VAR_1)] |
        FUNC_1(VAR_3);
}
