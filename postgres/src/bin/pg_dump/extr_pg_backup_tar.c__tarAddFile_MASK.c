
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t pgoff_t ;
struct TYPE_7__ {size_t tarFHpos; } ;
typedef TYPE_1__ lclContext ;
typedef int int64 ;
typedef int buf2 ;
typedef int buf1 ;
typedef int buf ;
struct TYPE_9__ {scalar_t__ formatData; } ;
struct TYPE_8__ {scalar_t__ fileLen; int tarFH; int * tmpFH; } ;
typedef TYPE_2__ TAR_MEMBER ;
typedef int FILE ;
typedef TYPE_3__ ArchiveHandle ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char,int ) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 size_t FUNC_9 (char*,int,size_t,int ) ;
 int FUNC_10 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_11(ArchiveHandle *VAR_5, TAR_MEMBER *VAR_6)
{
 lclContext *VAR_7 = (lclContext *) VAR_5->formatData;
 FILE *VAR_8 = VAR_6->tmpFH;
 char VAR_9[32768];
 size_t VAR_10;
 pgoff_t VAR_11 = 0;
 size_t VAR_12;
 size_t VAR_13,
    VAR_14;




 FUNC_7(VAR_8, 0, VAR_2);
 VAR_6->fileLen = FUNC_8(VAR_8);
 if (VAR_6->fileLen < 0)
  FUNC_2("could not determine seek position in archive file: %m");
 FUNC_7(VAR_8, 0, VAR_3);

 FUNC_1(VAR_6);

 while ((VAR_10 = FUNC_6(VAR_9, 1, sizeof(VAR_9), VAR_8)) > 0)
 {
  if ((VAR_12 = FUNC_9(VAR_9, 1, VAR_10, VAR_6->tarFH)) != VAR_10)
   VAR_4;
  VAR_11 += VAR_12;
 }
 if (!FUNC_4(VAR_8))
  FUNC_0(VAR_8);

 if (FUNC_3(VAR_8) != 0)
  FUNC_2("could not close temporary file: %m");

 if (VAR_11 != VAR_6->fileLen)
 {
  char VAR_15[32],
     VAR_16[32];

  FUNC_10(VAR_15, sizeof(VAR_15), VAR_1, (int64) VAR_11);
  FUNC_10(VAR_16, sizeof(VAR_16), VAR_1, (int64) VAR_6->fileLen);
  FUNC_2("actual file length (%s) does not match expected (%s)",
     VAR_15, VAR_16);
 }

 VAR_14 = ((VAR_11 + 511) & ~511) - VAR_11;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
 {
  if (FUNC_5('\0', VAR_6->tarFH) == VAR_0)
   VAR_4;
 }

 VAR_7->tarFHpos += VAR_11 + VAR_14;
}
