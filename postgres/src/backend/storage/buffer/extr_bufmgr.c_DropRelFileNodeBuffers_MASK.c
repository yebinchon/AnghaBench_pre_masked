
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {scalar_t__ forkNum; scalar_t__ blockNum; int rnode; } ;
struct TYPE_12__ {TYPE_1__ tag; } ;
struct TYPE_11__ {scalar_t__ backend; int node; } ;
typedef TYPE_2__ RelFileNodeBackend ;
typedef scalar_t__ ForkNumber ;
typedef TYPE_3__ BufferDesc ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

void
FUNC_7(RelFileNodeBackend VAR_2, ForkNumber *VAR_3,
        int VAR_4, BlockNumber *VAR_5)
{
 int VAR_6;
 int VAR_7;


 if (FUNC_4(VAR_2))
 {
  if (VAR_2.backend == VAR_0)
  {
   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    FUNC_0(VAR_2.node, VAR_3[VAR_7],
           VAR_5[VAR_7]);
  }
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
 {
  BufferDesc *VAR_8 = FUNC_1(VAR_6);
  uint32 VAR_9;
  if (!FUNC_5(VAR_8->tag.rnode, VAR_2.node))
   continue;

  VAR_9 = FUNC_3(VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  {
   if (FUNC_5(VAR_8->tag.rnode, VAR_2.node) &&
    VAR_8->tag.forkNum == VAR_3[VAR_7] &&
    VAR_8->tag.blockNum >= VAR_5[VAR_7])
   {
    FUNC_2(VAR_8);
    break;
   }
  }
  if (VAR_7 >= VAR_4)
   FUNC_6(VAR_8, VAR_9);
 }
}
