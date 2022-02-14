
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tsId; scalar_t__ relNode; scalar_t__ forkNum; scalar_t__ blockNum; } ;
typedef TYPE_1__ CkptSortItem ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const CkptSortItem *VAR_2 = (const CkptSortItem *) VAR_0;
 const CkptSortItem *VAR_3 = (const CkptSortItem *) VAR_1;


 if (VAR_2->tsId < VAR_3->tsId)
  return -1;
 else if (VAR_2->tsId > VAR_3->tsId)
  return 1;

 if (VAR_2->relNode < VAR_3->relNode)
  return -1;
 else if (VAR_2->relNode > VAR_3->relNode)
  return 1;

 else if (VAR_2->forkNum < VAR_3->forkNum)
  return -1;
 else if (VAR_2->forkNum > VAR_3->forkNum)
  return 1;

 else if (VAR_2->blockNum < VAR_3->blockNum)
  return -1;
 else if (VAR_2->blockNum > VAR_3->blockNum)
  return 1;

 return 0;
}
