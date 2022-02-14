
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int tag; int desc; int dumpId; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_12__ {int n_errors; } ;
struct TYPE_14__ {TYPE_1__ public; } ;
typedef int ParallelReadyList ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_5(ArchiveHandle *VAR_3,
       TocEntry *VAR_4,
       int VAR_5,
       void *VAR_6)
{
 ParallelReadyList *VAR_7 = (ParallelReadyList *) VAR_6;

 FUNC_3("finished item %d %s %s",
    VAR_4->dumpId, VAR_4->desc, VAR_4->tag);

 if (VAR_5 == VAR_0)
  FUNC_2(VAR_3, VAR_4);
 else if (VAR_5 == VAR_2)
 {
  FUNC_1(VAR_3, VAR_4);
  VAR_3->public.n_errors++;
 }
 else if (VAR_5 == VAR_1)
  VAR_3->public.n_errors++;
 else if (VAR_5 != 0)
  FUNC_0("worker process failed: exit code %d",
     VAR_5);

 FUNC_4(VAR_3, VAR_4, VAR_7);
}
