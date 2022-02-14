
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int nbytes; unsigned char* bytes; int first; } ;
typedef int ItemPointerData ;
typedef int * ItemPointer ;
typedef TYPE_1__ GinPostingList ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned char**) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int *) ;

ItemPointer
FUNC_10(GinPostingList *VAR_0, int VAR_1, int *VAR_2)
{
 ItemPointer VAR_3;
 int VAR_4;
 uint64 VAR_5;
 char *VAR_6 = ((char *) VAR_0) + VAR_1;
 int VAR_7;
 unsigned char *VAR_8;
 unsigned char *VAR_9;




 VAR_4 = VAR_0->nbytes * 2 + 1;
 VAR_3 = FUNC_7(VAR_4 * sizeof(ItemPointerData));

 VAR_7 = 0;
 while ((char *) VAR_0 < VAR_6)
 {

  if (VAR_7 >= VAR_4)
  {
   VAR_4 *= 2;
   VAR_3 = FUNC_8(VAR_3, VAR_4 * sizeof(ItemPointerData));
  }


  FUNC_0(FUNC_3(FUNC_2(&VAR_0->first)));
  FUNC_0(VAR_7 == 0 || FUNC_5(&VAR_0->first, &VAR_3[VAR_7 - 1]) > 0);
  VAR_3[VAR_7] = VAR_0->first;
  VAR_7++;

  VAR_5 = FUNC_6(&VAR_0->first);
  VAR_8 = VAR_0->bytes;
  VAR_9 = VAR_0->bytes + VAR_0->nbytes;
  while (VAR_8 < VAR_9)
  {

   if (VAR_7 >= VAR_4)
   {
    VAR_4 *= 2;
    VAR_3 = FUNC_8(VAR_3, VAR_4 * sizeof(ItemPointerData));
   }

   VAR_5 += FUNC_4(&VAR_8);

   FUNC_9(VAR_5, &VAR_3[VAR_7]);
   VAR_7++;
  }
  VAR_0 = FUNC_1(VAR_0);
 }

 if (VAR_2)
  *VAR_2 = VAR_7;
 return VAR_3;
}
