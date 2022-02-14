
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int reqs; int dataDumper; struct TYPE_14__* next; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_16__ {int tocCount; TYPE_1__* toc; } ;
struct TYPE_15__ {int numWorkers; } ;
typedef TYPE_2__ ParallelState ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_1__*,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int,int,int ) ;

void
FUNC_6(ArchiveHandle *VAR_5, ParallelState *VAR_6)
{
 TocEntry *VAR_7;

 if (VAR_6 && VAR_6->numWorkers > 1)
 {







  TocEntry **VAR_8;
  int VAR_9;

  VAR_8 = (TocEntry **) FUNC_4(VAR_5->tocCount * sizeof(TocEntry *));
  VAR_9 = 0;
  for (VAR_7 = VAR_5->toc->next; VAR_7 != VAR_5->toc; VAR_7 = VAR_7->next)
  {

   if (!VAR_7->dataDumper)
    continue;

   if ((VAR_7->reqs & VAR_1) == 0)
    continue;

   VAR_8[VAR_9++] = VAR_7;
  }

  if (VAR_9 > 1)
   FUNC_5((void *) VAR_8, VAR_9, sizeof(TocEntry *),
      VAR_2);

  for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   FUNC_0(VAR_5, VAR_6, VAR_8[VAR_10], VAR_0,
           VAR_4, ((void*)0));

  FUNC_3(VAR_8);


  FUNC_1(VAR_5, VAR_6, VAR_3);
 }
 else
 {

  for (VAR_7 = VAR_5->toc->next; VAR_7 != VAR_5->toc; VAR_7 = VAR_7->next)
  {

   if (!VAR_7->dataDumper)
    continue;
   if ((VAR_7->reqs & VAR_1) == 0)
    continue;

   FUNC_2(VAR_5, VAR_7);
  }
 }
}
