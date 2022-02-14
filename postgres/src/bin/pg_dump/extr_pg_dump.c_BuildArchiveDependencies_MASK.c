
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ reqs; int nDeps; int * dependencies; int dumpId; struct TYPE_7__* next; } ;
typedef TYPE_1__ TocEntry ;
struct TYPE_9__ {TYPE_1__* toc; } ;
struct TYPE_8__ {scalar_t__ nDeps; } ;
typedef TYPE_2__ DumpableObject ;
typedef int DumpId ;
typedef TYPE_3__ ArchiveHandle ;
typedef int Archive ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int **,int*,int*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(Archive *VAR_0)
{
 ArchiveHandle *VAR_1 = (ArchiveHandle *) VAR_0;
 TocEntry *VAR_2;


 for (VAR_2 = VAR_1->toc->next; VAR_2 != VAR_1->toc; VAR_2 = VAR_2->next)
 {
  DumpableObject *VAR_3;
  DumpId *VAR_4;
  int VAR_5;
  int VAR_6;


  if (VAR_2->reqs == 0)
   continue;

  if (VAR_2->nDeps > 0)
   continue;

  VAR_3 = FUNC_1(VAR_2->dumpId);
  if (VAR_3 == ((void*)0))
   continue;

  if (VAR_3->nDeps <= 0)
   continue;

  VAR_6 = 64;
  VAR_4 = (DumpId *) FUNC_3(VAR_6 * sizeof(DumpId));
  VAR_5 = 0;

  FUNC_0(VAR_1, VAR_3,
         &VAR_4, &VAR_5, &VAR_6);

  if (VAR_5 > 0)
  {
   VAR_4 = (DumpId *) FUNC_4(VAR_4,
             VAR_5 * sizeof(DumpId));
   VAR_2->dependencies = VAR_4;
   VAR_2->nDeps = VAR_5;
  }
  else
   FUNC_2(VAR_4);
 }
}
