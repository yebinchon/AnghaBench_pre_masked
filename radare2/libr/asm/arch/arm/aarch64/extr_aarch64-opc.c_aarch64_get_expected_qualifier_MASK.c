
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ aarch64_opnd_qualifier_t ;
typedef scalar_t__ const* aarch64_opnd_qualifier_seq_t ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int) ;

aarch64_opnd_qualifier_t
FUNC_1 (const aarch64_opnd_qualifier_seq_t *VAR_2,
    int VAR_3,
    const aarch64_opnd_qualifier_t VAR_4,
    int VAR_5)
{
  int VAR_6, VAR_7;
  if (VAR_4 == VAR_1)
    {
      FUNC_0 (VAR_2[0][VAR_5] == VAR_1);
      return VAR_2[0][VAR_3];
    }

  for (VAR_6 = 0, VAR_7 = -1; VAR_6 < VAR_0; ++VAR_6)
    {
      if (VAR_2[VAR_6][VAR_5] == VAR_4)
 {
   if (VAR_7 != -1)


     return VAR_1;
   VAR_7 = VAR_6;
 }
    }

  return VAR_2[VAR_7][VAR_3];
}
