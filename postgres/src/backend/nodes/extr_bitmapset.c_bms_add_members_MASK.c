
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nwords; int * words; } ;
typedef TYPE_1__ Bitmapset ;


 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*) ;

Bitmapset *
FUNC_2(Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 Bitmapset *VAR_2;
 const Bitmapset *VAR_3;
 int VAR_4;
 int VAR_5;


 if (VAR_0 == ((void*)0))
  return FUNC_0(VAR_1);
 if (VAR_1 == ((void*)0))
  return VAR_0;

 if (VAR_0->nwords < VAR_1->nwords)
 {
  VAR_2 = FUNC_0(VAR_1);
  VAR_3 = VAR_0;
 }
 else
 {
  VAR_2 = VAR_0;
  VAR_3 = VAR_1;
 }

 VAR_4 = VAR_3->nwords;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2->words[VAR_5] |= VAR_3->words[VAR_5];
 if (VAR_2 != VAR_0)
  FUNC_1(VAR_0);
 return VAR_2;
}
