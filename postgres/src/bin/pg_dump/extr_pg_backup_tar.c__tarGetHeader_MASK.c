
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int posbuf ;
typedef int pgoff_t ;
typedef int lenbuf ;
struct TYPE_7__ {int tarFHpos; int tarFH; } ;
typedef TYPE_1__ lclContext ;
struct TYPE_9__ {scalar_t__ formatData; } ;
struct TYPE_8__ {int fileLen; int targetFile; } ;
typedef TYPE_2__ TAR_MEMBER ;
typedef TYPE_3__ ArchiveHandle ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int,int *,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,char*,int ) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(ArchiveHandle *VAR_1, TAR_MEMBER *VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_1->formatData;
 char VAR_4[512];
 char VAR_5[100 + 1];
 int VAR_6,
    VAR_7;
 pgoff_t VAR_8;
 pgoff_t VAR_9;
 bool VAR_10 = 0;

 while (!VAR_10)
 {

  VAR_9 = VAR_3->tarFHpos;


  VAR_8 = FUNC_0(VAR_1, VAR_4, 512, ((void*)0), VAR_3->tarFH);
  if (VAR_8 == 0)
   return 0;

  if (VAR_8 != 512)
   FUNC_1(FUNC_3("incomplete tar header found (%lu byte)",
         "incomplete tar header found (%lu bytes)",
         VAR_8),
      (unsigned long) VAR_8);


  VAR_7 = FUNC_9(VAR_4);
  VAR_6 = FUNC_6(&VAR_4[148], 8);





  if (VAR_7 == VAR_6)
   VAR_10 = 1;
  else
  {
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < 512; VAR_11++)
   {
    if (VAR_4[VAR_11] != 0)
    {
     VAR_10 = 1;
     break;
    }
   }
  }
 }


 FUNC_8(VAR_5, &VAR_4[0], 100 + 1);

 VAR_8 = FUNC_6(&VAR_4[124], 12);

 {
  char VAR_12[32];
  char VAR_13[32];

  FUNC_7(VAR_12, sizeof(VAR_12), VAR_0, (uint64) VAR_9);
  FUNC_7(VAR_13, sizeof(VAR_13), VAR_0, (uint64) VAR_8);
  FUNC_4("TOC Entry %s at %s (length %s, checksum %d)",
      VAR_5, VAR_12, VAR_13, VAR_6);
 }

 if (VAR_7 != VAR_6)
 {
  char VAR_14[32];

  FUNC_7(VAR_14, sizeof(VAR_14), VAR_0,
     (uint64) FUNC_2(VAR_3->tarFH));
  FUNC_1("corrupt tar header found in %s (expected %d, computed %d) file position %s",
     VAR_5, VAR_6, VAR_7, VAR_14);
 }

 VAR_2->targetFile = FUNC_5(VAR_5);
 VAR_2->fileLen = VAR_8;

 return 1;
}
