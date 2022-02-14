
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;



__attribute__((used)) static void
FUNC_0(Oid *VAR_0, int *VAR_1, Oid *VAR_2, int *VAR_3)
{
 int VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;

 VAR_4 = VAR_5 = VAR_6 = VAR_7 = 0;
 while (VAR_4 < *VAR_1 && VAR_5 < *VAR_3)
 {
  if (VAR_0[VAR_4] == VAR_2[VAR_5])
  {

   VAR_4++;
   VAR_5++;
  }
  else if (VAR_0[VAR_4] < VAR_2[VAR_5])
  {

   VAR_0[VAR_6++] = VAR_0[VAR_4++];
  }
  else
  {

   VAR_2[VAR_7++] = VAR_2[VAR_5++];
  }
 }


 while (VAR_4 < *VAR_1)
 {
  VAR_0[VAR_6++] = VAR_0[VAR_4++];
 }


 while (VAR_5 < *VAR_3)
 {
  VAR_2[VAR_7++] = VAR_2[VAR_5++];
 }

 *VAR_1 = VAR_6;
 *VAR_3 = VAR_7;
}
