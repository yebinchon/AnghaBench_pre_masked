
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dataState; } ;
typedef TYPE_1__ lclTocEntry ;
struct TYPE_5__ {void* formatData; scalar_t__ dataDumper; } ;
typedef TYPE_2__ TocEntry ;
typedef int ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(ArchiveHandle *VAR_2, TocEntry *VAR_3)
{
 lclTocEntry *VAR_4;

 VAR_4 = (lclTocEntry *) FUNC_0(sizeof(lclTocEntry));
 if (VAR_3->dataDumper)
  VAR_4->dataState = VAR_1;
 else
  VAR_4->dataState = VAR_0;

 VAR_3->formatData = (void *) VAR_4;
}
