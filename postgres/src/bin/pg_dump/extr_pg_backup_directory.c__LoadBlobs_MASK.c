
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {char* directory; int * blobsTocFH; } ;
typedef TYPE_3__ lclContext ;
struct TYPE_13__ {TYPE_1__* ropt; } ;
struct TYPE_15__ {TYPE_2__ public; scalar_t__ formatData; } ;
struct TYPE_12__ {int dropSchema; } ;
typedef int Oid ;
typedef TYPE_4__ ArchiveHandle ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*,int) ;
 int * FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (TYPE_4__*,char*,char*) ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int FUNC_12 (char*,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_13(ArchiveHandle *VAR_2)
{
 Oid VAR_3;
 lclContext *VAR_4 = (lclContext *) VAR_2->formatData;
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];

 FUNC_3(VAR_2);

 FUNC_10(VAR_2, VAR_5, "blobs.toc");

 VAR_4->blobsTocFH = FUNC_8(VAR_5, VAR_1);

 if (VAR_4->blobsTocFH == ((void*)0))
  FUNC_9("could not open large object TOC file \"%s\" for input: %m",
     VAR_5);


 while ((FUNC_7(VAR_4->blobsTocFH, VAR_6, VAR_0)) != ((void*)0))
 {
  char VAR_7[VAR_0];
  char VAR_8[VAR_0];


  if (FUNC_12(VAR_6, "%u %s\n", &VAR_3, VAR_7) != 2)
   FUNC_9("invalid line in large object TOC file \"%s\": \"%s\"",
      VAR_7, VAR_6);

  FUNC_2(VAR_2, VAR_3, VAR_2->public.ropt->dropSchema);
  FUNC_11(VAR_8, VAR_0, "%s/%s", VAR_4->directory, VAR_7);
  FUNC_4(VAR_2, VAR_8);
  FUNC_0(VAR_2, VAR_3);
 }
 if (!FUNC_6(VAR_4->blobsTocFH))
  FUNC_9("error reading large object TOC file \"%s\"",
     VAR_5);

 if (FUNC_5(VAR_4->blobsTocFH) != 0)
  FUNC_9("could not close large object TOC file \"%s\": %m",
     VAR_5);

 VAR_4->blobsTocFH = ((void*)0);

 FUNC_1(VAR_2);
}
