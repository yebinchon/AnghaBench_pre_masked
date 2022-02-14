
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ curBlkno; scalar_t__ curPageLSN; int numKilled; int * killedItems; } ;
struct TYPE_4__ {int indexRelation; int opaque; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* GISTScanOpaque ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(IndexScanDesc VAR_2)
{
 GISTScanOpaque VAR_3 = (GISTScanOpaque) VAR_2->opaque;
 Buffer VAR_4;
 Page VAR_5;
 OffsetNumber VAR_6;
 ItemId VAR_7;
 int VAR_8;
 bool VAR_9 = 0;

 FUNC_0(VAR_3->curBlkno != VAR_1);
 FUNC_0(!FUNC_12(VAR_3->curPageLSN));
 FUNC_0(VAR_3->killedItems != ((void*)0));

 VAR_4 = FUNC_10(VAR_2->indexRelation, VAR_3->curBlkno);
 if (!FUNC_3(VAR_4))
  return;

 FUNC_7(VAR_4, VAR_0);
 FUNC_13(VAR_2->indexRelation, VAR_4);
 VAR_5 = FUNC_2(VAR_4);






 if (FUNC_1(VAR_4) != VAR_3->curPageLSN)
 {
  FUNC_11(VAR_4);
  VAR_3->numKilled = 0;
  return;
 }

 FUNC_0(FUNC_5(VAR_5));





 for (VAR_8 = 0; VAR_8 < VAR_3->numKilled; VAR_8++)
 {
  VAR_6 = VAR_3->killedItems[VAR_8];
  VAR_7 = FUNC_9(VAR_5, VAR_6);
  FUNC_6(VAR_7);
  VAR_9 = 1;
 }

 if (VAR_9)
 {
  FUNC_4(VAR_5);
  FUNC_8(VAR_4, 1);
 }

 FUNC_11(VAR_4);





 VAR_3->numKilled = 0;
}
