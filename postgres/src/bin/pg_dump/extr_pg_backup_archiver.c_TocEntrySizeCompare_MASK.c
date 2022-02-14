
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dataLength; scalar_t__ dumpId; } ;
typedef TYPE_1__ TocEntry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const TocEntry *VAR_2 = *(const TocEntry *const *) VAR_0;
 const TocEntry *VAR_3 = *(const TocEntry *const *) VAR_1;


 if (VAR_2->dataLength > VAR_3->dataLength)
  return -1;
 if (VAR_2->dataLength < VAR_3->dataLength)
  return 1;


 if (VAR_2->dumpId < VAR_3->dumpId)
  return -1;
 if (VAR_2->dumpId > VAR_3->dumpId)
  return 1;

 return 0;
}
