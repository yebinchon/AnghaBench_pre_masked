
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ dataState; int dataPos; } ;
typedef TYPE_3__ lclTocEntry ;
struct TYPE_17__ {int hasSeek; } ;
typedef TYPE_4__ lclContext ;
struct TYPE_18__ {int dumpId; scalar_t__ formatData; } ;
typedef TYPE_5__ TocEntry ;
struct TYPE_15__ {TYPE_1__* ropt; } ;
struct TYPE_19__ {TYPE_2__ public; int FH; scalar_t__ formatData; } ;
struct TYPE_14__ {int dropSchema; } ;
typedef TYPE_6__ ArchiveHandle ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int*,int*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(ArchiveHandle *VAR_4, TocEntry *VAR_5)
{
 lclContext *VAR_6 = (lclContext *) VAR_4->formatData;
 lclTocEntry *VAR_7 = (lclTocEntry *) VAR_5->formatData;
 int VAR_8;
 int VAR_9;

 if (VAR_7->dataState == VAR_1)
  return;

 if (!VAR_6->hasSeek || VAR_7->dataState == VAR_2)
 {





  FUNC_2(VAR_4, &VAR_8, &VAR_9);

  while (VAR_8 != VAR_0 && VAR_9 != VAR_5->dumpId)
  {
   switch (VAR_8)
   {
    case 128:
     FUNC_4(VAR_4);
     break;

    case 129:
     FUNC_3(VAR_4);
     break;

    default:
     FUNC_5("unrecognized data block type (%d) while searching archive",
        VAR_8);
     break;
   }
   FUNC_2(VAR_4, &VAR_8, &VAR_9);
  }
 }
 else
 {

  if (FUNC_6(VAR_4->FH, VAR_7->dataPos, VAR_3) != 0)
   FUNC_5("error during file seek: %m");

  FUNC_2(VAR_4, &VAR_8, &VAR_9);
 }


 if (VAR_8 == VAR_0)
 {
  if (VAR_7->dataState == VAR_2)
   FUNC_5("could not find block ID %d in archive -- "
      "possibly due to out-of-order restore request, "
      "which cannot be handled due to lack of data offsets in archive",
      VAR_5->dumpId);
  else if (!VAR_6->hasSeek)
   FUNC_5("could not find block ID %d in archive -- "
      "possibly due to out-of-order restore request, "
      "which cannot be handled due to non-seekable input file",
      VAR_5->dumpId);
  else
   FUNC_5("could not find block ID %d in archive -- "
      "possibly corrupt archive",
      VAR_5->dumpId);
 }


 if (VAR_9 != VAR_5->dumpId)
  FUNC_5("found unexpected block ID (%d) when reading data -- expected %d",
     VAR_9, VAR_5->dumpId);

 switch (VAR_8)
 {
  case 128:
   FUNC_1(VAR_4);
   break;

  case 129:
   FUNC_0(VAR_4, VAR_4->public.ropt->dropSchema);
   break;

  default:
   FUNC_5("unrecognized data block type %d while restoring archive",
      VAR_8);
   break;
 }
}
