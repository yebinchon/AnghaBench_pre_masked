
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int pred; int link; TYPE_4__* blocker; TYPE_4__* waiter; } ;
struct TYPE_11__ {scalar_t__ next; } ;
struct TYPE_13__ {int size; TYPE_1__ links; } ;
struct TYPE_15__ {TYPE_3__ waitProcs; } ;
struct TYPE_12__ {scalar_t__ next; } ;
struct TYPE_14__ {struct TYPE_14__* lockGroupLeader; TYPE_5__* waitLock; TYPE_2__ links; } ;
typedef TYPE_3__ PROC_QUEUE ;
typedef TYPE_4__ PGPROC ;
typedef TYPE_5__ LOCK ;
typedef TYPE_6__ EDGE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 TYPE_4__** VAR_2 ;

__attribute__((used)) static bool
FUNC_2(LOCK *VAR_3,
   EDGE *VAR_4,
   int VAR_5,
   PGPROC **VAR_6)
{
 PROC_QUEUE *VAR_7 = &(VAR_3->waitProcs);
 int VAR_8 = VAR_7->size;
 PGPROC *VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12,
    VAR_13,
    VAR_14,
    VAR_15;


 VAR_9 = (PGPROC *) VAR_7->links.next;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
 {
  VAR_2[VAR_10] = VAR_9;
  VAR_9 = (PGPROC *) VAR_9->links.next;
 }
 FUNC_1(VAR_1, 0, VAR_8 * sizeof(int));
 FUNC_1(VAR_0, 0, VAR_8 * sizeof(int));
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  VAR_9 = VAR_4[VAR_10].waiter;
  FUNC_0(VAR_9 != ((void*)0));
  VAR_12 = -1;
  for (VAR_11 = VAR_8; --VAR_11 >= 0;)
  {
   PGPROC *VAR_16 = VAR_2[VAR_11];

   if (VAR_16 == VAR_9 || VAR_16->lockGroupLeader == VAR_9)
   {
    FUNC_0(VAR_16->waitLock == VAR_3);
    if (VAR_12 == -1)
     VAR_12 = VAR_11;
    else
    {
     FUNC_0(VAR_1[VAR_11] <= 0);
     VAR_1[VAR_11] = -1;
    }
   }
  }


  if (VAR_12 < 0)
   continue;






  VAR_9 = VAR_4[VAR_10].blocker;
  FUNC_0(VAR_9 != ((void*)0));
  VAR_14 = -1;
  for (VAR_13 = VAR_8; --VAR_13 >= 0;)
  {
   PGPROC *VAR_17 = VAR_2[VAR_13];

   if (VAR_17 == VAR_9 || VAR_17->lockGroupLeader == VAR_9)
   {
    FUNC_0(VAR_17->waitLock == VAR_3);
    if (VAR_14 == -1)
     VAR_14 = VAR_13;
    else
    {
     FUNC_0(VAR_1[VAR_13] <= 0);
     VAR_1[VAR_13] = -1;
    }
   }
  }


  if (VAR_14 < 0)
   continue;

  FUNC_0(VAR_1[VAR_12] >= 0);
  VAR_1[VAR_12]++;

  VAR_4[VAR_10].pred = VAR_12;
  VAR_4[VAR_10].link = VAR_0[VAR_14];
  VAR_0[VAR_14] = VAR_10 + 1;
 }
 VAR_15 = VAR_8 - 1;
 for (VAR_10 = VAR_8 - 1; VAR_10 >= 0;)
 {
  int VAR_18;
  int VAR_19 = 0;


  while (VAR_2[VAR_15] == ((void*)0))
   VAR_15--;
  for (VAR_11 = VAR_15; VAR_11 >= 0; VAR_11--)
  {
   if (VAR_2[VAR_11] != ((void*)0) && VAR_1[VAR_11] == 0)
    break;
  }


  if (VAR_11 < 0)
   return 0;
  VAR_9 = VAR_2[VAR_11];
  if (VAR_9->lockGroupLeader != ((void*)0))
   VAR_9 = VAR_9->lockGroupLeader;
  FUNC_0(VAR_9 != ((void*)0));
  for (VAR_18 = 0; VAR_18 <= VAR_15; ++VAR_18)
  {
   if (VAR_2[VAR_18] == VAR_9 || (VAR_2[VAR_18] != ((void*)0) &&
           VAR_2[VAR_18]->lockGroupLeader == VAR_9))
   {
    VAR_6[VAR_10 - VAR_19] = VAR_2[VAR_18];
    VAR_2[VAR_18] = ((void*)0);
    ++VAR_19;
   }
  }
  FUNC_0(VAR_19 > 0);
  VAR_10 -= VAR_19;


  for (VAR_13 = VAR_0[VAR_11]; VAR_13 > 0; VAR_13 = VAR_4[VAR_13 - 1].link)
   VAR_1[VAR_4[VAR_13 - 1].pred]--;
 }


 return 1;
}
