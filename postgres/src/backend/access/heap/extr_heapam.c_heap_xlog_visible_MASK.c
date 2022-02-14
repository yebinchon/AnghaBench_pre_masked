
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int cutoff_xid; } ;
typedef TYPE_1__ xl_heap_visible ;
typedef scalar_t__ XLogRedoAction ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_9__ {scalar_t__ EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef int Relation ;
typedef int RelFileNode ;
typedef int Page ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ,int ,int,int *) ;
 int FUNC_16 (TYPE_2__*,int,int *,int *,int *) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int *) ;
 int FUNC_20 (int ,int ,int ,scalar_t__,int ,int ,int) ;

__attribute__((used)) static void
FUNC_21(XLogReaderState *VAR_8)
{
 XLogRecPtr VAR_9 = VAR_8->EndRecPtr;
 xl_heap_visible *VAR_10 = (xl_heap_visible *) FUNC_17(VAR_8);
 Buffer VAR_11 = VAR_5;
 Buffer VAR_12;
 Page VAR_13;
 RelFileNode VAR_14;
 BlockNumber VAR_15;
 XLogRedoAction VAR_16;

 FUNC_16(VAR_8, 1, &VAR_14, ((void*)0), &VAR_15);
 if (VAR_4)
  FUNC_12(VAR_10->cutoff_xid, VAR_14);






 VAR_16 = FUNC_14(VAR_8, 1, &VAR_12);
 if (VAR_16 == VAR_1)
 {
  VAR_13 = FUNC_0(VAR_12);

  FUNC_10(VAR_13);

  FUNC_5(VAR_12);
 }
 else if (VAR_16 == VAR_2)
 {





 }

 if (FUNC_1(VAR_12))
 {
  Size VAR_17 = FUNC_6(FUNC_0(VAR_12));

  FUNC_13(VAR_12);
  if (VAR_10->flags & VAR_7)
   FUNC_18(VAR_14, VAR_15, VAR_17);
 }







 if (FUNC_15(VAR_8, 0, VAR_6, 0,
           &VAR_11) == VAR_1)
 {
  Page VAR_18 = FUNC_0(VAR_11);
  Relation VAR_19;


  if (FUNC_9(VAR_18))
   FUNC_8(VAR_18, VAR_0, 0);





  FUNC_4(VAR_11, VAR_3);

  VAR_19 = FUNC_2(VAR_14);
  FUNC_19(VAR_19, VAR_15, &VAR_11);
  if (VAR_9 > FUNC_7(VAR_18))
   FUNC_20(VAR_19, VAR_15, VAR_5, VAR_9, VAR_11,
         VAR_10->cutoff_xid, VAR_10->flags);

  FUNC_11(VAR_11);
  FUNC_3(VAR_19);
 }
 else if (FUNC_1(VAR_11))
  FUNC_13(VAR_11);
}
