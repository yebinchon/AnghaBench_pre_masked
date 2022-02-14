
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_3__ {int first_te; int last_te; int ** tes; } ;
typedef TYPE_1__ ParallelReadyList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int **,int) ;

__attribute__((used)) static void
FUNC_2(ParallelReadyList *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->first_te;

 FUNC_0(VAR_1 >= VAR_2 && VAR_1 <= VAR_0->last_te);
 if (VAR_1 > VAR_2)
 {
  TocEntry **VAR_3 = &VAR_0->tes[VAR_2];

  FUNC_1(VAR_3 + 1, VAR_3, (VAR_1 - VAR_2) * sizeof(TocEntry *));
 }
 VAR_0->first_te++;
}
