
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
typedef int aarch64_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline enum aarch64_opnd_qualifier
FUNC_2 (aarch64_insn VAR_2)
{
  enum aarch64_opnd_qualifier VAR_3 = VAR_1 + VAR_2;



  if (VAR_3 >= VAR_0)
    VAR_3 += 1;

  FUNC_1 (VAR_2 <= 0x8
   && FUNC_0 (VAR_3) == VAR_2);
  return VAR_3;
}
