
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_5__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

int
FUNC_2(const Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 int VAR_2;
 int VAR_3;


 if (VAR_0 == ((void*)0))
  return FUNC_1(VAR_1) ? 0 : -1;
 else if (VAR_1 == ((void*)0))
  return FUNC_1(VAR_0) ? 0 : +1;

 VAR_2 = FUNC_0(VAR_0->nwords, VAR_1->nwords);
 for (VAR_3 = VAR_2; VAR_3 < VAR_0->nwords; VAR_3++)
 {
  if (VAR_0->words[VAR_3] != 0)
   return +1;
 }
 for (VAR_3 = VAR_2; VAR_3 < VAR_1->nwords; VAR_3++)
 {
  if (VAR_1->words[VAR_3] != 0)
   return -1;
 }

 VAR_3 = VAR_2;
 while (--VAR_3 >= 0)
 {
  bitmapword VAR_4 = VAR_0->words[VAR_3];
  bitmapword VAR_5 = VAR_1->words[VAR_3];

  if (VAR_4 != VAR_5)
   return (VAR_4 > VAR_5) ? +1 : -1;
 }
 return 0;
}
