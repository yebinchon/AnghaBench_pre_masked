
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_6__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

Bitmapset *
FUNC_6(Bitmapset *VAR_1, int VAR_2)
{
 int VAR_3,
    VAR_4;

 if (VAR_2 < 0)
  FUNC_4(VAR_0, "negative bitmapset member not allowed");
 if (VAR_1 == ((void*)0))
  return FUNC_3(VAR_2);
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_2);


 if (VAR_3 >= VAR_1->nwords)
 {
  int VAR_5 = VAR_1->nwords;
  int VAR_6;

  VAR_1 = (Bitmapset *) FUNC_5(VAR_1, FUNC_0(VAR_3 + 1));
  VAR_1->nwords = VAR_3 + 1;

  for (VAR_6 = VAR_5; VAR_6 < VAR_1->nwords; VAR_6++)
   VAR_1->words[VAR_6] = 0;
 }

 VAR_1->words[VAR_3] |= ((bitmapword) 1 << VAR_4);
 return VAR_1;
}
