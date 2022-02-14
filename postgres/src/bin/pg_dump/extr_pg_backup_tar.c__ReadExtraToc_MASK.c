
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * TH; int * filename; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_5__ {void* formatData; } ;
typedef TYPE_2__ TocEntry ;
typedef int ArchiveHandle ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(ArchiveHandle *VAR_0, TocEntry *VAR_1)
{
 lclTocEntry *VAR_2 = (lclTocEntry *) VAR_1->formatData;

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = (lclTocEntry *) FUNC_2(sizeof(lclTocEntry));
  VAR_1->formatData = (void *) VAR_2;
 }

 VAR_2->filename = FUNC_0(VAR_0);
 if (FUNC_3(VAR_2->filename) == 0)
 {
  FUNC_1(VAR_2->filename);
  VAR_2->filename = ((void*)0);
 }
 VAR_2->TH = ((void*)0);
}
