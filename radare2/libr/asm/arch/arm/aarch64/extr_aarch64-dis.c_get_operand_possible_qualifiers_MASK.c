
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
typedef int* aarch64_opnd_qualifier_seq_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0 (int VAR_2,
     const aarch64_opnd_qualifier_seq_t *VAR_3,
     enum aarch64_opnd_qualifier *VAR_4)
{
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    if ((VAR_4[VAR_5] = VAR_3[VAR_5][VAR_2]) == VAR_1)
      break;
}
