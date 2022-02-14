
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OffsetNumber ;



__attribute__((used)) static void
FUNC_0(OffsetNumber *VAR_0, int *VAR_1, const bool *VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5;
 OffsetNumber *VAR_6;

 VAR_3 = VAR_4 = *VAR_1;
 VAR_6 = VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  OffsetNumber VAR_7 = VAR_0[VAR_5];

  if (VAR_2[VAR_7] == 0)
  {

   *VAR_6 = VAR_7;
   VAR_6++;
  }
  else
   VAR_4--;
 }

 *VAR_1 = VAR_4;
}
