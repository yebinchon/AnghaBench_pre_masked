
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * TH; int * filename; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_7__ {int dumpId; void* formatData; int * dataDumper; } ;
typedef TYPE_2__ TocEntry ;
struct TYPE_8__ {scalar_t__ compression; } ;
typedef TYPE_3__ ArchiveHandle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_1, TocEntry *VAR_2)
{
 lclTocEntry *VAR_3;
 char VAR_4[VAR_0];

 VAR_3 = (lclTocEntry *) FUNC_0(sizeof(lclTocEntry));
 if (VAR_2->dataDumper != ((void*)0))
 {






  FUNC_2(VAR_4, "%d.dat", VAR_2->dumpId);

  VAR_3->filename = FUNC_1(VAR_4);
 }
 else
 {
  VAR_3->filename = ((void*)0);
  VAR_3->TH = ((void*)0);
 }
 VAR_2->formatData = (void *) VAR_3;
}
