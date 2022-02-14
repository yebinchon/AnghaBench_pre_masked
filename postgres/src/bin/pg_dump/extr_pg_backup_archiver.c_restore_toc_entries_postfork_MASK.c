
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int tag; int desc; int dumpId; struct TYPE_11__* pending_next; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_10__ {TYPE_3__* ropt; } ;
struct TYPE_13__ {TYPE_1__ public; } ;
struct TYPE_12__ {int promptPassword; int username; int pgport; int pghost; int dbname; } ;
typedef TYPE_3__ RestoreOptions ;
typedef TYPE_4__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 RestoreOptions *VAR_2 = VAR_0->public.ropt;
 TocEntry *VAR_3;

 FUNC_2("entering restore_toc_entries_postfork");




 FUNC_0((Archive *) VAR_0, VAR_2->dbname,
     VAR_2->pghost, VAR_2->pgport, VAR_2->username,
     VAR_2->promptPassword);


 FUNC_1(VAR_0);







 for (VAR_3 = VAR_1->pending_next; VAR_3 != VAR_1; VAR_3 = VAR_3->pending_next)
 {
  FUNC_3("processing missed item %d %s %s",
     VAR_3->dumpId, VAR_3->desc, VAR_3->tag);
  (void) FUNC_4(VAR_0, VAR_3, 0);
 }
}
