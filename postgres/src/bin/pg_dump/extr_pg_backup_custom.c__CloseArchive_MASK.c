
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pgoff_t ;
struct TYPE_9__ {scalar_t__ hasSeek; int dataStart; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_10__ {scalar_t__ mode; int * FH; scalar_t__ fSpec; scalar_t__ dosync; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(ArchiveHandle *VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_2->formatData;
 pgoff_t VAR_4;

 if (VAR_2->mode == VAR_1)
 {
  FUNC_1(VAR_2);

  VAR_4 = FUNC_8(VAR_2->FH);
  if (VAR_4 < 0 && VAR_3->hasSeek)
   FUNC_4("could not determine seek position in archive file: %m");
  FUNC_2(VAR_2);
  VAR_3->dataStart = FUNC_3(VAR_2, VAR_3);
  FUNC_0(VAR_2, ((void*)0));







  if (VAR_3->hasSeek &&
   FUNC_6(VAR_2->FH, VAR_4, VAR_0) == 0)
   FUNC_2(VAR_2);
 }

 if (FUNC_5(VAR_2->FH) != 0)
  FUNC_4("could not close archive file: %m");


 if (VAR_2->dosync && VAR_2->mode == VAR_1 && VAR_2->fSpec)
  (void) FUNC_7(VAR_2->fSpec, 0);

 VAR_2->FH = ((void*)0);
}
