
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int level; } ;
struct TYPE_9__ {TYPE_1__ btpo; } ;
struct TYPE_8__ {struct TYPE_8__* bts_parent; int bts_offset; int bts_blkno; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef int BTStackData ;
typedef TYPE_2__* BTStack ;
typedef int BTScanInsert ;
typedef TYPE_3__* BTPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,int ,int,TYPE_2__*,int,int ) ;
 int FUNC_12 (int ,int ,int ,int) ;
 scalar_t__ FUNC_13 (int) ;

BTStack
FUNC_14(Relation VAR_3, BTScanInsert VAR_4, Buffer *VAR_5, int VAR_6,
     Snapshot VAR_7)
{
 BTStack VAR_8 = ((void*)0);
 int VAR_9 = VAR_0;


 *VAR_5 = FUNC_10(VAR_3, VAR_6);


 if (!FUNC_3(*VAR_5))
  return (BTStack) ((void*)0);


 for (;;)
 {
  Page VAR_10;
  BTPageOpaque VAR_11;
  OffsetNumber VAR_12;
  ItemId VAR_13;
  IndexTuple VAR_14;
  BlockNumber VAR_15;
  BlockNumber VAR_16;
  BTStack VAR_17;
  *VAR_5 = FUNC_11(VAR_3, VAR_4, *VAR_5, (VAR_6 == VAR_1), VAR_8,
         VAR_9, VAR_7);


  VAR_10 = FUNC_2(*VAR_5);
  VAR_11 = (BTPageOpaque) FUNC_8(VAR_10);
  if (FUNC_5(VAR_11))
   break;





  VAR_12 = FUNC_9(VAR_3, VAR_4, *VAR_5);
  VAR_13 = FUNC_7(VAR_10, VAR_12);
  VAR_14 = (IndexTuple) FUNC_6(VAR_10, VAR_13);
  VAR_15 = FUNC_0(VAR_14);
  VAR_16 = FUNC_1(*VAR_5);
  VAR_17 = (BTStack) FUNC_13(sizeof(BTStackData));
  VAR_17->bts_blkno = VAR_16;
  VAR_17->bts_offset = VAR_12;
  VAR_17->bts_parent = VAR_8;






  if (VAR_11->btpo.level == 1 && VAR_6 == VAR_1)
   VAR_9 = VAR_1;


  *VAR_5 = FUNC_12(VAR_3, *VAR_5, VAR_15, VAR_9);


  VAR_8 = VAR_17;
 }






 if (VAR_6 == VAR_1 && VAR_9 == VAR_0)
 {

  FUNC_4(*VAR_5, VAR_2);
  FUNC_4(*VAR_5, VAR_1);
  *VAR_5 = FUNC_11(VAR_3, VAR_4, *VAR_5, 1, VAR_8, VAR_1,
         VAR_7);
 }

 return VAR_8;
}
