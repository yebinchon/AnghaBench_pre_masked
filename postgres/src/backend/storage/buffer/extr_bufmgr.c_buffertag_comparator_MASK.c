
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ forkNum; scalar_t__ blockNum; int rnode; } ;
typedef TYPE_1__ BufferTag ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const BufferTag *VAR_2 = (const BufferTag *) VAR_0;
 const BufferTag *VAR_3 = (const BufferTag *) VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->rnode, &VAR_3->rnode);

 if (VAR_4 != 0)
  return VAR_4;

 if (VAR_2->forkNum < VAR_3->forkNum)
  return -1;
 if (VAR_2->forkNum > VAR_3->forkNum)
  return 1;

 if (VAR_2->blockNum < VAR_3->blockNum)
  return -1;
 if (VAR_2->blockNum > VAR_3->blockNum)
  return 1;

 return 0;
}
