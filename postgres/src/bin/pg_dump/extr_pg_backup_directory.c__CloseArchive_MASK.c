
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int directory; int pstate; int * dataFH; } ;
typedef TYPE_1__ lclContext ;
typedef int cfp ;
struct TYPE_11__ {scalar_t__ mode; int * FH; scalar_t__ dosync; int format; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,char*) ;

__attribute__((used)) static void
FUNC_10(ArchiveHandle *VAR_5)
{
 lclContext *VAR_6 = (lclContext *) VAR_5->formatData;

 if (VAR_5->mode == VAR_3)
 {
  cfp *VAR_7;
  char VAR_8[VAR_0];

  FUNC_9(VAR_5, VAR_8, "toc.dat");


  VAR_6->pstate = FUNC_1(VAR_5);


  VAR_7 = FUNC_6(VAR_8, VAR_1, 0);
  if (VAR_7 == ((void*)0))
   FUNC_7("could not open output file \"%s\": %m", VAR_8);
  VAR_6->dataFH = VAR_7;






  VAR_5->format = VAR_4;
  FUNC_3(VAR_5);
  VAR_5->format = VAR_2;
  FUNC_4(VAR_5);
  if (FUNC_5(VAR_7) != 0)
   FUNC_7("could not close TOC file: %m");
  FUNC_2(VAR_5, VAR_6->pstate);

  FUNC_0(VAR_5, VAR_6->pstate);





  if (VAR_5->dosync)
   FUNC_8(VAR_6->directory);
 }
 VAR_5->FH = ((void*)0);
}
