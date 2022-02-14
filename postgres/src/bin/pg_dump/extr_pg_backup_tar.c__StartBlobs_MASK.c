
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blobToc; } ;
typedef TYPE_1__ lclContext ;
typedef int TocEntry ;
struct TYPE_6__ {scalar_t__ formatData; } ;
typedef TYPE_2__ ArchiveHandle ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,char) ;

__attribute__((used)) static void
FUNC_2(ArchiveHandle *VAR_1, TocEntry *VAR_2)
{
 lclContext *VAR_3 = (lclContext *) VAR_1->formatData;
 char VAR_4[VAR_0];

 FUNC_0(VAR_4, "blobs.toc");
 VAR_3->blobToc = FUNC_1(VAR_1, VAR_4, 'w');
}
