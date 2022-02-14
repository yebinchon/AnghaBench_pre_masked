
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ blockNum; scalar_t__ forkNum; int rnode; } ;
struct TYPE_11__ {TYPE_1__ tag; } ;
struct TYPE_10__ {int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ ForkNumber ;
typedef TYPE_3__ BufferDesc ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*,int) ;

Buffer
FUNC_10(Buffer VAR_3,
      Relation VAR_4,
      BlockNumber VAR_5)
{
 ForkNumber VAR_6 = VAR_2;
 BufferDesc *VAR_7;

 if (FUNC_3(VAR_3))
 {
  FUNC_0(FUNC_2(VAR_3));
  if (FUNC_1(VAR_3))
  {
   VAR_7 = FUNC_5(-VAR_3 - 1);
   if (VAR_7->tag.blockNum == VAR_5 &&
    FUNC_7(VAR_7->tag.rnode, VAR_4->rd_node) &&
    VAR_7->tag.forkNum == VAR_6)
    return VAR_3;
   FUNC_8(VAR_0, VAR_3);
   VAR_1[-VAR_3 - 1]--;
  }
  else
  {
   VAR_7 = FUNC_4(VAR_3 - 1);

   if (VAR_7->tag.blockNum == VAR_5 &&
    FUNC_7(VAR_7->tag.rnode, VAR_4->rd_node) &&
    VAR_7->tag.forkNum == VAR_6)
    return VAR_3;
   FUNC_9(VAR_7, 1);
  }
 }

 return FUNC_6(VAR_4, VAR_5);
}
