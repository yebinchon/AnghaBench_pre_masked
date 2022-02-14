
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * words; int nwords; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int ,int ) ;

Bitmapset *
FUNC_1(Bitmapset *VAR_0, const Bitmapset *VAR_1)
{
 int VAR_2;
 int VAR_3;


 if (VAR_0 == ((void*)0))
  return ((void*)0);
 if (VAR_1 == ((void*)0))
  return VAR_0;

 VAR_2 = FUNC_0(VAR_0->nwords, VAR_1->nwords);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0->words[VAR_3] &= ~VAR_1->words[VAR_3];
 return VAR_0;
}
