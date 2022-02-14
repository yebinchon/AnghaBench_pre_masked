
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_4__ {size_t maxDumpId; int ** tocsByDumpId; } ;
typedef size_t DumpId ;
typedef TYPE_1__ ArchiveHandle ;


 int FUNC_0 (TYPE_1__*) ;

TocEntry *
FUNC_1(ArchiveHandle *VAR_0, DumpId VAR_1)
{

 if (VAR_0->tocsByDumpId == ((void*)0))
  FUNC_0(VAR_0);

 if (VAR_1 > 0 && VAR_1 <= VAR_0->maxDumpId)
  return VAR_0->tocsByDumpId[VAR_1];

 return ((void*)0);
}
