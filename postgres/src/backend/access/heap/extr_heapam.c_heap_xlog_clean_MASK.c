
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nredirected; int ndead; int latestRemovedXid; } ;
typedef TYPE_1__ xl_heap_clean ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef int RelFileNode ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ,int ,int,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int*) ;
 int FUNC_11 (TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int *,int,int *,int,int *,int) ;

__attribute__((used)) static void
FUNC_15(XLogReaderState *VAR_3)
{
 XLogRecPtr VAR_4 = VAR_3->EndRecPtr;
 xl_heap_clean *VAR_5 = (xl_heap_clean *) FUNC_12(VAR_3);
 Buffer VAR_6;
 RelFileNode VAR_7;
 BlockNumber VAR_8;
 XLogRedoAction VAR_9;

 FUNC_11(VAR_3, 0, &VAR_7, ((void*)0), &VAR_8);
 if (VAR_1 && FUNC_7(VAR_5->latestRemovedXid))
  FUNC_6(VAR_5->latestRemovedXid, VAR_7);





 VAR_9 = FUNC_9(VAR_3, 0, VAR_2, 1,
             &VAR_6);
 if (VAR_9 == VAR_0)
 {
  Page VAR_10 = (Page) FUNC_1(VAR_6);
  OffsetNumber *VAR_11;
  OffsetNumber *VAR_12;
  OffsetNumber *VAR_13;
  OffsetNumber *VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;
  Size VAR_18;

  VAR_12 = (OffsetNumber *) FUNC_10(VAR_3, 0, &VAR_18);

  VAR_15 = VAR_5->nredirected;
  VAR_16 = VAR_5->ndead;
  VAR_11 = (OffsetNumber *) ((char *) VAR_12 + VAR_18);
  VAR_13 = VAR_12 + (VAR_15 * 2);
  VAR_14 = VAR_13 + VAR_16;
  VAR_17 = (VAR_11 - VAR_14);
  FUNC_0(VAR_17 >= 0);


  FUNC_14(VAR_6,
        VAR_12, VAR_15,
        VAR_13, VAR_16,
        VAR_14, VAR_17);






  FUNC_5(VAR_10, VAR_4);
  FUNC_3(VAR_6);
 }

 if (FUNC_2(VAR_6))
 {
  Size VAR_19 = FUNC_4(FUNC_1(VAR_6));

  FUNC_8(VAR_6);
  FUNC_13(VAR_7, VAR_8, VAR_19);
 }
}
