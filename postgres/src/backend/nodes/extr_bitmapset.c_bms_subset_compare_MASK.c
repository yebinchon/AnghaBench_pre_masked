
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_5__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;
typedef scalar_t__ BMS_Comparison ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

BMS_Comparison
FUNC_2(const Bitmapset *VAR_4, const Bitmapset *VAR_5)
{
 BMS_Comparison VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 if (VAR_4 == ((void*)0))
 {
  if (VAR_5 == ((void*)0))
   return VAR_1;
  return FUNC_1(VAR_5) ? VAR_1 : VAR_2;
 }
 if (VAR_5 == ((void*)0))
  return FUNC_1(VAR_4) ? VAR_1 : VAR_3;

 VAR_6 = VAR_1;
 VAR_7 = FUNC_0(VAR_4->nwords, VAR_5->nwords);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  bitmapword VAR_10 = VAR_4->words[VAR_9];
  bitmapword VAR_11 = VAR_5->words[VAR_9];

  if ((VAR_10 & ~VAR_11) != 0)
  {

   if (VAR_6 == VAR_2)
    return VAR_0;
   VAR_6 = VAR_3;
  }
  if ((VAR_11 & ~VAR_10) != 0)
  {

   if (VAR_6 == VAR_3)
    return VAR_0;
   VAR_6 = VAR_2;
  }
 }

 if (VAR_4->nwords > VAR_5->nwords)
 {
  VAR_8 = VAR_4->nwords;
  for (; VAR_9 < VAR_8; VAR_9++)
  {
   if (VAR_4->words[VAR_9] != 0)
   {

    if (VAR_6 == VAR_2)
     return VAR_0;
    VAR_6 = VAR_3;
   }
  }
 }
 else if (VAR_4->nwords < VAR_5->nwords)
 {
  VAR_8 = VAR_5->nwords;
  for (; VAR_9 < VAR_8; VAR_9++)
  {
   if (VAR_5->words[VAR_9] != 0)
   {

    if (VAR_6 == VAR_3)
     return VAR_0;
    VAR_6 = VAR_2;
   }
  }
 }
 return VAR_6;
}
