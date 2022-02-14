
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_8__ {int first_te; int last_te; int ** tes; } ;
struct TYPE_7__ {int numWorkers; int ** te; } ;
typedef TYPE_1__ ParallelState ;
typedef TYPE_2__ ParallelReadyList ;
typedef int ArchiveHandle ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static TocEntry *
FUNC_4(ArchiveHandle *VAR_0, ParallelReadyList *VAR_1,
       ParallelState *VAR_2)
{



 FUNC_3(VAR_1);




 for (int VAR_3 = VAR_1->first_te; VAR_3 <= VAR_1->last_te; VAR_3++)
 {
  TocEntry *VAR_4 = VAR_1->tes[VAR_3];
  bool VAR_5 = 0;






  for (int VAR_6 = 0; VAR_6 < VAR_2->numWorkers; VAR_6++)
  {
   TocEntry *VAR_7 = VAR_2->te[VAR_6];

   if (VAR_7 == ((void*)0))
    continue;
   if (FUNC_0(VAR_4, VAR_7) ||
    FUNC_0(VAR_7, VAR_4))
   {
    VAR_5 = 1;
    break;
   }
  }

  if (VAR_5)
   continue;


  FUNC_2(VAR_1, VAR_3);
  return VAR_4;
 }

 FUNC_1("no item ready");
 return ((void*)0);
}
