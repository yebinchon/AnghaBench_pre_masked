
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__ const*) ;

bool
FUNC_2(const Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;


 if (VAR_0 == ((void*)0))
  return 1;
 if (VAR_1 == ((void*)0))
  return FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_0->nwords, VAR_1->nwords);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if ((VAR_0->words[VAR_4] & ~VAR_1->words[VAR_4]) != 0)
   return 0;
 }

 if (VAR_0->nwords > VAR_1->nwords)
 {
  VAR_3 = VAR_0->nwords;
  for (; VAR_4 < VAR_3; VAR_4++)
  {
   if (VAR_0->words[VAR_4] != 0)
    return 0;
  }
 }
 return 1;
}
