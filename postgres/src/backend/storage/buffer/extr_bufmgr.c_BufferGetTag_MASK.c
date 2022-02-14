
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blockNum; int forkNum; int rnode; } ;
struct TYPE_6__ {TYPE_1__ tag; } ;
typedef int RelFileNode ;
typedef int ForkNumber ;
typedef TYPE_2__ BufferDesc ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int) ;

void
FUNC_5(Buffer VAR_0, RelFileNode *VAR_1, ForkNumber *VAR_2,
    BlockNumber *VAR_3)
{
 BufferDesc *VAR_4;


 FUNC_0(FUNC_2(VAR_0));

 if (FUNC_1(VAR_0))
  VAR_4 = FUNC_4(-VAR_0 - 1);
 else
  VAR_4 = FUNC_3(VAR_0 - 1);


 *VAR_1 = VAR_4->tag.rnode;
 *VAR_2 = VAR_4->tag.forkNum;
 *VAR_3 = VAR_4->tag.blockNum;
}
