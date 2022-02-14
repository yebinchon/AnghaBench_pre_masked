
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* link; } ;
struct TYPE_11__ {TYPE_1__* freeList; int nelem_alloc; } ;
struct TYPE_10__ {TYPE_3__* hctl; } ;
struct TYPE_9__ {int mutex; int nentries; TYPE_4__* freeList; } ;
typedef TYPE_2__ HTAB ;
typedef TYPE_3__ HASHHDR ;
typedef TYPE_4__* HASHBUCKET ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HASHBUCKET
FUNC_4(HTAB *VAR_1, int VAR_2)
{
 HASHHDR *VAR_3 = VAR_1->hctl;
 HASHBUCKET VAR_4;

 for (;;)
 {

  if (FUNC_0(VAR_3))
   FUNC_1(&VAR_3->freeList[VAR_2].mutex);


  VAR_4 = VAR_3->freeList[VAR_2].freeList;

  if (VAR_4 != ((void*)0))
   break;

  if (FUNC_0(VAR_3))
   FUNC_2(&VAR_3->freeList[VAR_2].mutex);
  if (!FUNC_3(VAR_1, VAR_3->nelem_alloc, VAR_2))
  {
   int VAR_5;

   if (!FUNC_0(VAR_3))
    return ((void*)0);


   VAR_5 = VAR_2;
   for (;;)
   {
    VAR_5 = (VAR_5 + 1) % VAR_0;
    if (VAR_5 == VAR_2)
     break;

    FUNC_1(&(VAR_3->freeList[VAR_5].mutex));
    VAR_4 = VAR_3->freeList[VAR_5].freeList;

    if (VAR_4 != ((void*)0))
    {
     VAR_3->freeList[VAR_5].freeList = VAR_4->link;
     FUNC_2(&(VAR_3->freeList[VAR_5].mutex));


     FUNC_1(&VAR_3->freeList[VAR_2].mutex);
     VAR_3->freeList[VAR_2].nentries++;
     FUNC_2(&VAR_3->freeList[VAR_2].mutex);

     return VAR_4;
    }

    FUNC_2(&(VAR_3->freeList[VAR_5].mutex));
   }


   return ((void*)0);
  }
 }


 VAR_3->freeList[VAR_2].freeList = VAR_4->link;
 VAR_3->freeList[VAR_2].nentries++;

 if (FUNC_0(VAR_3))
  FUNC_2(&VAR_3->freeList[VAR_2].mutex);

 return VAR_4;
}
