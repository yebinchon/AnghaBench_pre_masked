
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rightLink; int deleteXid; int parentOffset; } ;
typedef TYPE_2__ ginxlogDeletePage ;
typedef int XLogRecPtr ;
struct TYPE_9__ {scalar_t__ rightlink; int flags; } ;
struct TYPE_8__ {TYPE_1__* result; int index; int strategy; } ;
struct TYPE_6__ {int pages_deleted; } ;
typedef int PostingItem ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_3__ GinVacuumState ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int VAR_6 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int,int ,int ) ;
 int FUNC_22 (char*,int) ;

__attribute__((used)) static void
FUNC_23(GinVacuumState *VAR_7, BlockNumber VAR_8, BlockNumber VAR_9,
     BlockNumber VAR_10, OffsetNumber VAR_11, bool VAR_12)
{
 Buffer VAR_13;
 Buffer VAR_14;
 Buffer VAR_15;
 Page VAR_16,
    VAR_17;
 BlockNumber VAR_18;
 VAR_14 = FUNC_13(VAR_7->index, VAR_2, VAR_9,
         VAR_3, VAR_7->strategy);
 VAR_13 = FUNC_13(VAR_7->index, VAR_2, VAR_8,
         VAR_3, VAR_7->strategy);
 VAR_15 = FUNC_13(VAR_7->index, VAR_2, VAR_10,
         VAR_3, VAR_7->strategy);

 FUNC_8(VAR_14, VAR_1);

 VAR_16 = FUNC_1(VAR_13);
 VAR_18 = FUNC_6(VAR_16)->rightlink;


 FUNC_7(VAR_16, FUNC_14());





 FUNC_12(VAR_7->index, VAR_8, VAR_18);

 FUNC_17();


 VAR_16 = FUNC_1(VAR_14);
 FUNC_6(VAR_16)->rightlink = VAR_18;


 VAR_17 = FUNC_1(VAR_15);
 FUNC_4(VAR_17, VAR_11);

 VAR_16 = FUNC_1(VAR_13);





 FUNC_6(VAR_16)->flags = VAR_0;

 FUNC_9(VAR_15);
 FUNC_9(VAR_14);
 FUNC_9(VAR_13);

 if (FUNC_15(VAR_7->index))
 {
  XLogRecPtr VAR_19;
  ginxlogDeletePage VAR_20;
  FUNC_19();
  FUNC_21(0, VAR_13, 0);
  FUNC_21(1, VAR_15, VAR_4);
  FUNC_21(2, VAR_14, 0);

  VAR_20.parentOffset = VAR_11;
  VAR_20.rightLink = FUNC_6(VAR_16)->rightlink;
  VAR_20.deleteXid = FUNC_5(VAR_16);

  FUNC_22((char *) &VAR_20, sizeof(ginxlogDeletePage));

  VAR_19 = FUNC_20(VAR_5, VAR_6);
  FUNC_10(VAR_16, VAR_19);
  FUNC_10(VAR_17, VAR_19);
  FUNC_10(FUNC_1(VAR_14), VAR_19);
 }

 FUNC_16(VAR_15);
 FUNC_18(VAR_14);
 FUNC_16(VAR_13);

 FUNC_2();

 VAR_7->result->pages_deleted++;
}
