
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nestLevel; int atCommit; scalar_t__ backend; int relnode; struct TYPE_3__* next; } ;
typedef int RelFileNode ;
typedef TYPE_1__ PendingRelDelete ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;

int
FUNC_2(bool VAR_2, RelFileNode **VAR_3)
{
 int VAR_4 = FUNC_0();
 int VAR_5;
 RelFileNode *VAR_6;
 PendingRelDelete *VAR_7;

 VAR_5 = 0;
 for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
  if (VAR_7->nestLevel >= VAR_4 && VAR_7->atCommit == VAR_2
   && VAR_7->backend == VAR_0)
   VAR_5++;
 }
 if (VAR_5 == 0)
 {
  *VAR_3 = ((void*)0);
  return 0;
 }
 VAR_6 = (RelFileNode *) FUNC_1(VAR_5 * sizeof(RelFileNode));
 *VAR_3 = VAR_6;
 for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
  if (VAR_7->nestLevel >= VAR_4 && VAR_7->atCommit == VAR_2
   && VAR_7->backend == VAR_0)
  {
   *VAR_6 = VAR_7->relnode;
   VAR_6++;
  }
 }
 return VAR_5;
}
