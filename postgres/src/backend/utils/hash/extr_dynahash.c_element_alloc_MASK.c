
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* link; } ;
struct TYPE_9__ {int entrysize; TYPE_1__* freeList; } ;
struct TYPE_8__ {scalar_t__ (* alloc ) (int) ;int hcxt; scalar_t__ isfixed; TYPE_3__* hctl; } ;
struct TYPE_7__ {int mutex; TYPE_4__* freeList; } ;
typedef int Size ;
typedef TYPE_2__ HTAB ;
typedef TYPE_3__ HASHHDR ;
typedef TYPE_4__ HASHELEMENT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5(HTAB *VAR_1, int VAR_2, int VAR_3)
{
 HASHHDR *VAR_4 = VAR_1->hctl;
 Size VAR_5;
 HASHELEMENT *VAR_6;
 HASHELEMENT *VAR_7;
 HASHELEMENT *VAR_8;
 int VAR_9;

 if (VAR_1->isfixed)
  return 0;


 VAR_5 = FUNC_1(sizeof(HASHELEMENT)) + FUNC_1(VAR_4->entrysize);

 VAR_0 = VAR_1->hcxt;
 VAR_6 = (HASHELEMENT *) VAR_1->alloc(VAR_2 * VAR_5);

 if (!VAR_6)
  return 0;


 VAR_8 = ((void*)0);
 VAR_7 = VAR_6;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  VAR_7->link = VAR_8;
  VAR_8 = VAR_7;
  VAR_7 = (HASHELEMENT *) (((char *) VAR_7) + VAR_5);
 }


 if (FUNC_0(VAR_4))
  FUNC_2(&VAR_4->freeList[VAR_3].mutex);


 VAR_6->link = VAR_4->freeList[VAR_3].freeList;
 VAR_4->freeList[VAR_3].freeList = VAR_8;

 if (FUNC_0(VAR_4))
  FUNC_3(&VAR_4->freeList[VAR_3].mutex);

 return 1;
}
