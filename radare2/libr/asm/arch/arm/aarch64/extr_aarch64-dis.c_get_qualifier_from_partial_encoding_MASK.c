
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
typedef int aarch64_insn ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static enum aarch64_opnd_qualifier
FUNC_2 (aarch64_insn VAR_2,
         const enum aarch64_opnd_qualifier* VAR_3,

         aarch64_insn VAR_4)
{
  int VAR_5;
  FUNC_0 ("enter with value: %d, mask: %d", (int)VAR_2, (int)VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    {
      aarch64_insn VAR_6;
      if (VAR_3[VAR_5] == VAR_1)
 break;
      VAR_6 = FUNC_1 (VAR_3[VAR_5]);
      if ((VAR_6 & VAR_4) == (VAR_2 & VAR_4))
 return VAR_3[VAR_5];
    }
  return VAR_1;
}
