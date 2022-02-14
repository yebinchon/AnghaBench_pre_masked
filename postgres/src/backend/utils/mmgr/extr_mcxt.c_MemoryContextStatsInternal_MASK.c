
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int local_totals ;
struct TYPE_12__ {struct TYPE_12__* nextchild; struct TYPE_12__* firstchild; TYPE_1__* methods; } ;
struct TYPE_11__ {scalar_t__ freespace; scalar_t__ totalspace; scalar_t__ freechunks; scalar_t__ nblocks; } ;
struct TYPE_10__ {int (* stats ) (TYPE_3__*,int *,void*,TYPE_2__*) ;} ;
typedef TYPE_2__ MemoryContextCounters ;
typedef TYPE_3__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int *,void*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(MemoryContext VAR_2, int VAR_3,
         bool VAR_4, int VAR_5,
         MemoryContextCounters *VAR_6)
{
 MemoryContextCounters VAR_7;
 MemoryContext VAR_8;
 int VAR_9;

 FUNC_0(FUNC_1(VAR_2));


 VAR_2->methods->stats(VAR_2,
       VAR_4 ? VAR_0 : ((void*)0),
       (void *) &VAR_3,
       VAR_6);





 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 for (VAR_8 = VAR_2->firstchild, VAR_9 = 0;
   VAR_8 != ((void*)0);
   VAR_8 = VAR_8->nextchild, VAR_9++)
 {
  if (VAR_9 < VAR_5)
   FUNC_5(VAR_8, VAR_3 + 1,
            VAR_4, VAR_5,
            VAR_6);
  else
   FUNC_5(VAR_8, VAR_3 + 1,
            0, VAR_5,
            &VAR_7);
 }


 if (VAR_9 > VAR_5)
 {
  if (VAR_4)
  {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++)
    FUNC_2(VAR_1, "  ");
   FUNC_2(VAR_1,
     "%d more child contexts containing %zu total in %zd blocks; %zu free (%zd chunks); %zu used\n",
     VAR_9 - VAR_5,
     VAR_7.totalspace,
     VAR_7.nblocks,
     VAR_7.freespace,
     VAR_7.freechunks,
     VAR_7.totalspace - VAR_7.freespace);
  }

  if (VAR_6)
  {
   VAR_6->nblocks += VAR_7.nblocks;
   VAR_6->freechunks += VAR_7.freechunks;
   VAR_6->totalspace += VAR_7.totalspace;
   VAR_6->freespace += VAR_7.freespace;
  }
 }
}
