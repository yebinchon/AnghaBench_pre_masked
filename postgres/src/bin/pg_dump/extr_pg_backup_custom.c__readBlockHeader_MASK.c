
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int filePos; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_6__ {scalar_t__ version; int FH; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_3, int *VAR_4, int *VAR_5)
{
 lclContext *VAR_6 = (lclContext *) VAR_3->formatData;
 int VAR_7;
 if (VAR_3->version < VAR_2)
  *VAR_4 = VAR_0;
 else
 {
  VAR_7 = FUNC_1(VAR_3->FH);
  *VAR_4 = VAR_7;
  if (VAR_7 == VAR_1)
  {
   *VAR_5 = 0;
   return;
  }
  VAR_6->filePos += 1;
 }

 *VAR_5 = FUNC_0(VAR_3);
}
