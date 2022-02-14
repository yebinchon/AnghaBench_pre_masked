
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int reqs; int tag; int desc; int dumpId; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_22__ {int restorePass; int tocCount; } ;
struct TYPE_21__ {scalar_t__ first_te; scalar_t__ last_te; } ;
typedef int ParallelState ;
typedef TYPE_2__ ParallelReadyList ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_1__*,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* FUNC_7 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(ArchiveHandle *VAR_8, ParallelState *VAR_9,
        TocEntry *VAR_10)
{
 ParallelReadyList VAR_11;
 TocEntry *VAR_12;

 FUNC_5("entering restore_toc_entries_parallel");


 FUNC_9(&VAR_11, VAR_8->tocCount);
 VAR_8->restorePass = VAR_4;
 FUNC_4(VAR_10, &VAR_11, VAR_8->restorePass);
 FUNC_6("entering main parallel loop");

 for (;;)
 {

  VAR_12 = FUNC_7(VAR_8, &VAR_11, VAR_9);
  if (VAR_12 != ((void*)0))
  {

   if ((VAR_12->reqs & (VAR_2 | VAR_1)) == 0)
   {
    FUNC_6("skipping item %d %s %s",
       VAR_12->dumpId,
       VAR_12->desc, VAR_12->tag);

    FUNC_10(VAR_8, VAR_12, &VAR_11);

    continue;
   }

   FUNC_6("launching item %d %s %s",
      VAR_12->dumpId,
      VAR_12->desc, VAR_12->tag);


   FUNC_1(VAR_8, VAR_9, VAR_12, VAR_0,
           VAR_7, &VAR_11);
  }
  else if (FUNC_2(VAR_9))
  {




   if (VAR_8->restorePass == VAR_3)
    break;


   VAR_8->restorePass++;

   FUNC_4(VAR_10, &VAR_11, VAR_8->restorePass);

   continue;
  }
  else
  {




  }
  FUNC_3(VAR_8, VAR_9,
        VAR_12 ? VAR_6 : VAR_5);
 }


 FUNC_0(VAR_11.first_te > VAR_11.last_te);

 FUNC_8(&VAR_11);

 FUNC_6("finished main parallel loop");
}
