
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {int hasSeek; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_5__ {scalar_t__ mode; int FH; int * fSpec; scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_3->formatData;
 pgoff_t VAR_5;

 if (VAR_3->mode == VAR_2)
  FUNC_0("can only reopen input archives");





 if (VAR_3->fSpec == ((void*)0) || FUNC_5(VAR_3->fSpec, "") == 0)
  FUNC_0("parallel restore from standard input is not supported");
 if (!VAR_4->hasSeek)
  FUNC_0("parallel restore from non-seekable file is not supported");

 VAR_5 = FUNC_4(VAR_3->FH);
 if (VAR_5 < 0)
  FUNC_0("could not determine seek position in archive file: %m");


 if (FUNC_1(VAR_3->FH) != 0)
  FUNC_0("could not close archive file: %m");


 VAR_3->FH = FUNC_2(VAR_3->fSpec, VAR_0);
 if (!VAR_3->FH)
  FUNC_0("could not open input file \"%s\": %m", VAR_3->fSpec);

 if (FUNC_3(VAR_3->FH, VAR_5, VAR_1) != 0)
  FUNC_0("could not set seek position in archive file: %m");
}
