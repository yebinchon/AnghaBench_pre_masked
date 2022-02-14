
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tarFHpos; scalar_t__ tarNextMember; int tarFH; } ;
typedef TYPE_1__ lclContext ;
typedef int int64 ;
typedef int buf2 ;
typedef int buf1 ;
typedef int buf ;
struct TYPE_14__ {scalar_t__ formatData; } ;
struct TYPE_13__ {char* targetFile; int fileLen; scalar_t__ pos; TYPE_3__* AH; } ;
typedef TYPE_2__ TAR_MEMBER ;
typedef TYPE_3__ ArchiveHandle ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,char*,int,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,char*,...) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,int ) ;
 scalar_t__ FUNC_9 (char*,char const*) ;

__attribute__((used)) static TAR_MEMBER *
FUNC_10(ArchiveHandle *VAR_2, const char *VAR_3)
{
 lclContext *VAR_4 = (lclContext *) VAR_2->formatData;
 TAR_MEMBER *VAR_5 = FUNC_7(sizeof(TAR_MEMBER));
 char VAR_6;
 char VAR_7[512];
 size_t VAR_8,
    VAR_9,
    VAR_10;
 int VAR_11;

 VAR_5->AH = VAR_2;


 if (VAR_4->tarFHpos != 0)
 {
  char VAR_12[100],
     VAR_13[100];

  FUNC_8(VAR_12, sizeof(VAR_12), VAR_0, (int64) VAR_4->tarFHpos);
  FUNC_8(VAR_13, sizeof(VAR_13), VAR_0, (int64) VAR_4->tarNextMember);
  FUNC_6("moving from position %s to next member at file position %s",
      VAR_12, VAR_13);

  while (VAR_4->tarFHpos < VAR_4->tarNextMember)
   FUNC_2(VAR_2, &VAR_6, 1, ((void*)0), VAR_4->tarFH);
 }

 {
  char VAR_14[100];

  FUNC_8(VAR_14, sizeof(VAR_14), VAR_0, (int64) VAR_4->tarFHpos);
  FUNC_6("now at file position %s", VAR_14);
 }




 if (!FUNC_1(VAR_2, VAR_5))
 {
  if (VAR_3)
   FUNC_4("could not find header for file \"%s\" in tar archive", VAR_3);
  else
  {




   FUNC_5(VAR_5);
   return ((void*)0);
  }
 }

 while (VAR_3 != ((void*)0) && FUNC_9(VAR_5->targetFile, VAR_3) != 0)
 {
  FUNC_6("skipping tar member %s", VAR_5->targetFile);

  VAR_11 = FUNC_3(VAR_5->targetFile);
  if ((FUNC_0(VAR_2, VAR_11) & VAR_1) != 0)
   FUNC_4("restoring data out of order is not supported in this archive format: "
      "\"%s\" is required, but comes before \"%s\" in the archive file.",
      VAR_5->targetFile, VAR_3);


  VAR_9 = ((VAR_5->fileLen + 511) & ~511);
  VAR_10 = VAR_9 >> 9;

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
   FUNC_2(VAR_2, &VAR_7[0], 512, ((void*)0), VAR_4->tarFH);

  if (!FUNC_1(VAR_2, VAR_5))
   FUNC_4("could not find header for file \"%s\" in tar archive", VAR_3);
 }

 VAR_4->tarNextMember = VAR_4->tarFHpos + ((VAR_5->fileLen + 511) & ~511);
 VAR_5->pos = 0;

 return VAR_5;
}
