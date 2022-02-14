
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int isSpecialScript; int tarFH; int * scriptTH; int * FH; } ;
typedef TYPE_2__ lclContext ;
struct TYPE_16__ {int verbose; TYPE_3__* ropt; int * dopt; } ;
struct TYPE_19__ {scalar_t__ mode; int * FH; scalar_t__ fSpec; scalar_t__ dosync; TYPE_1__ public; int CustomOutPtr; scalar_t__ formatData; } ;
struct TYPE_18__ {int dropSchema; int suppressDumpWarnings; int * superuser; scalar_t__ compression; int * filename; } ;
typedef int TAR_MEMBER ;
typedef TYPE_3__ RestoreOptions ;
typedef int DumpOptions ;
typedef TYPE_4__ ArchiveHandle ;
typedef int Archive ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int * FUNC_10 (TYPE_4__*,char*,char) ;
 int FUNC_11 (TYPE_4__*,int *,char*) ;

__attribute__((used)) static void
FUNC_12(ArchiveHandle *VAR_4)
{
 lclContext *VAR_5 = (lclContext *) VAR_4->formatData;
 TAR_MEMBER *VAR_6;
 RestoreOptions *VAR_7;
 RestoreOptions *VAR_8;
 DumpOptions *VAR_9;
 int VAR_10,
    VAR_11;

 if (VAR_4->mode == VAR_3)
 {



  VAR_6 = FUNC_10(VAR_4, "toc.dat", 'w');
  VAR_5->FH = VAR_6;
  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
  FUNC_9(VAR_4, VAR_6);




  FUNC_3(VAR_4, ((void*)0));





  VAR_6 = FUNC_10(VAR_4, "restore.sql", 'w');

  FUNC_11(VAR_4, VAR_6, "--\n"
      "-- NOTE:\n"
      "--\n"
      "-- File paths need to be edited. Search for $$PATH$$ and\n"
      "-- replace it with the path to the directory containing\n"
      "-- the extracted data files.\n"
      "--\n");

  VAR_4->CustomOutPtr = VAR_2;

  VAR_5->isSpecialScript = 1;
  VAR_5->scriptTH = VAR_6;

  VAR_7 = FUNC_0();
  FUNC_8(VAR_7, VAR_4->public.ropt, sizeof(RestoreOptions));
  VAR_7->filename = ((void*)0);
  VAR_7->dropSchema = 1;
  VAR_7->compression = 0;
  VAR_7->superuser = ((void*)0);
  VAR_7->suppressDumpWarnings = 1;

  VAR_9 = VAR_4->public.dopt;
  VAR_8 = VAR_4->public.ropt;

  FUNC_2((Archive *) VAR_4, ((void*)0), VAR_7);

  VAR_10 = VAR_4->public.verbose;
  VAR_4->public.verbose = 0;

  FUNC_1((Archive *) VAR_4);

  FUNC_2((Archive *) VAR_4, VAR_9, VAR_8);

  VAR_4->public.verbose = VAR_10;

  FUNC_9(VAR_4, VAR_6);

  VAR_5->isSpecialScript = 0;




  for (VAR_11 = 0; VAR_11 < 512 * 2; VAR_11++)
  {
   if (FUNC_6(0, VAR_5->tarFH) == VAR_0)
    VAR_1;
  }


  if (VAR_4->dosync && VAR_4->fSpec)
   (void) FUNC_7(VAR_4->fSpec, 0);
 }

 VAR_4->FH = ((void*)0);
}
