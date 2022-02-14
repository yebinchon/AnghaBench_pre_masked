
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_3__ {int sorted; int last_te; int first_te; int tes; } ;
typedef TYPE_1__ ParallelReadyList ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(ParallelReadyList *VAR_1)
{
 if (!VAR_1->sorted)
 {
  int VAR_2 = VAR_1->last_te - VAR_1->first_te + 1;

  if (VAR_2 > 1)
   FUNC_0(VAR_1->tes + VAR_1->first_te, VAR_2,
      sizeof(TocEntry *),
      VAR_0);
  VAR_1->sorted = 1;
 }
}
