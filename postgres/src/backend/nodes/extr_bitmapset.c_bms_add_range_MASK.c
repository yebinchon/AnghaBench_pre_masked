
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_5__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

Bitmapset *
FUNC_6(Bitmapset *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5,
    VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;


 if (VAR_4 < VAR_3)
  return VAR_2;

 if (VAR_3 < 0)
  FUNC_3(VAR_1, "negative bitmapset member not allowed");
 VAR_7 = FUNC_2(VAR_4);

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = (Bitmapset *) FUNC_4(FUNC_0(VAR_7 + 1));
  VAR_2->nwords = VAR_7 + 1;
 }
 else if (VAR_7 >= VAR_2->nwords)
 {
  int VAR_10 = VAR_2->nwords;
  int VAR_11;


  VAR_2 = (Bitmapset *) FUNC_5(VAR_2, FUNC_0(VAR_7 + 1));
  VAR_2->nwords = VAR_7 + 1;

  for (VAR_11 = VAR_10; VAR_11 < VAR_2->nwords; VAR_11++)
   VAR_2->words[VAR_11] = 0;
 }

 VAR_9 = VAR_5 = FUNC_2(VAR_3);

 VAR_6 = FUNC_1(VAR_3);
 VAR_8 = VAR_0 - (FUNC_1(VAR_4) + 1);





 if (VAR_5 == VAR_7)
 {
  VAR_2->words[VAR_5] |= ~(bitmapword) (((bitmapword) 1 << VAR_6) - 1)
   & (~(bitmapword) 0) >> VAR_8;
 }
 else
 {

  VAR_2->words[VAR_9++] |= ~(bitmapword) (((bitmapword) 1 << VAR_6) - 1);


  while (VAR_9 < VAR_7)
   VAR_2->words[VAR_9++] = ~(bitmapword) 0;


  VAR_2->words[VAR_7] |= (~(bitmapword) 0) >> VAR_8;
 }

 return VAR_2;
}
