
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (TYPE_1__ const*) ;

bool
FUNC_1(const Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 const Bitmapset *VAR_2;
 const Bitmapset *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;


 if (VAR_0 == ((void*)0))
 {
  if (VAR_1 == ((void*)0))
   return 1;
  return FUNC_0(VAR_1);
 }
 else if (VAR_1 == ((void*)0))
  return FUNC_0(VAR_0);

 if (VAR_0->nwords <= VAR_1->nwords)
 {
  VAR_2 = VAR_0;
  VAR_3 = VAR_1;
 }
 else
 {
  VAR_2 = VAR_1;
  VAR_3 = VAR_0;
 }

 VAR_4 = VAR_2->nwords;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  if (VAR_2->words[VAR_6] != VAR_3->words[VAR_6])
   return 0;
 }
 VAR_5 = VAR_3->nwords;
 for (; VAR_6 < VAR_5; VAR_6++)
 {
  if (VAR_3->words[VAR_6] != 0)
   return 0;
 }
 return 1;
}
