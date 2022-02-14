
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nwords; int * words; } ;
typedef TYPE_1__ Bitmapset ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;

Bitmapset *
FUNC_1(const Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 Bitmapset *VAR_2;
 const Bitmapset *VAR_3;
 int VAR_4;
 int VAR_5;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return ((void*)0);

 if (VAR_0->nwords <= VAR_1->nwords)
 {
  VAR_2 = FUNC_0(VAR_0);
  VAR_3 = VAR_1;
 }
 else
 {
  VAR_2 = FUNC_0(VAR_1);
  VAR_3 = VAR_0;
 }

 VAR_4 = VAR_2->nwords;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2->words[VAR_5] &= VAR_3->words[VAR_5];
 return VAR_2;
}
