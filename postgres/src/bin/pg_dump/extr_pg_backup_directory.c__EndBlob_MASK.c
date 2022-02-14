
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blobsTocFH; int * dataFH; } ;
typedef TYPE_1__ lclContext ;
typedef int buf ;
typedef int TocEntry ;
struct TYPE_5__ {scalar_t__ formatData; } ;
typedef int Oid ;
typedef TYPE_2__ ArchiveHandle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, TocEntry *VAR_1, Oid VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_0->formatData;
 char VAR_4[50];
 int VAR_5;


 FUNC_0(VAR_3->dataFH);
 VAR_3->dataFH = ((void*)0);


 VAR_5 = FUNC_3(VAR_4, sizeof(VAR_4), "%u blob_%u.dat\n", VAR_2, VAR_2);
 if (FUNC_1(VAR_4, VAR_5, VAR_3->blobsTocFH) != VAR_5)
  FUNC_2("could not write to blobs TOC file");
}
