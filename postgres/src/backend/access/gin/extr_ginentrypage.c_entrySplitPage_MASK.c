
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {int index; } ;
struct TYPE_14__ {scalar_t__ entry; } ;
struct TYPE_13__ {scalar_t__ off; } ;
struct TYPE_12__ {char* data; } ;
struct TYPE_11__ {int flags; } ;
typedef int Size ;
typedef int Page ;
typedef TYPE_1__ PGAlignedBlock ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemIdData ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ GinBtreeStack ;
typedef TYPE_3__ GinBtreeEntryInsertData ;
typedef TYPE_4__* GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_10__* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (TYPE_4__*,int ,scalar_t__,TYPE_3__*,int ) ;
 int FUNC_14 (char*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_15(GinBtree VAR_3, Buffer VAR_4,
      GinBtreeStack *VAR_5,
      GinBtreeEntryInsertData *VAR_6,
      BlockNumber VAR_7,
      Page *VAR_8, Page *VAR_9)
{
 OffsetNumber VAR_10 = VAR_5->off;
 OffsetNumber VAR_11,
    VAR_12,
    VAR_13 = VAR_2;
 Size VAR_14 = 0;
 Size VAR_15 = 0,
    VAR_16;
 char *VAR_17;
 IndexTuple VAR_18;
 Page VAR_19;
 Page VAR_20 = FUNC_10(FUNC_0(VAR_4));
 Page VAR_21 = FUNC_10(FUNC_0(VAR_4));
 Size VAR_22 = FUNC_9(VAR_20);
 PGAlignedBlock VAR_23[2];

 FUNC_13(VAR_3, VAR_20, VAR_10, VAR_6, VAR_7);





 VAR_12 = FUNC_8(VAR_20);
 VAR_17 = VAR_23[0].data;
 for (VAR_11 = VAR_1; VAR_11 <= VAR_12; VAR_11++)
 {
  if (VAR_11 == VAR_10)
  {
   VAR_16 = FUNC_4(FUNC_3(VAR_6->entry));
   FUNC_14(VAR_17, VAR_6->entry, VAR_16);
   VAR_17 += VAR_16;
   VAR_14 += VAR_16 + sizeof(ItemIdData);
  }

  VAR_18 = (IndexTuple) FUNC_6(VAR_20, FUNC_7(VAR_20, VAR_11));
  VAR_16 = FUNC_4(FUNC_3(VAR_18));
  FUNC_14(VAR_17, VAR_18, VAR_16);
  VAR_17 += VAR_16;
  VAR_14 += VAR_16 + sizeof(ItemIdData);
 }

 if (VAR_10 == VAR_12 + 1)
 {
  VAR_16 = FUNC_4(FUNC_3(VAR_6->entry));
  FUNC_14(VAR_17, VAR_6->entry, VAR_16);
  VAR_17 += VAR_16;
  VAR_14 += VAR_16 + sizeof(ItemIdData);
 }





 FUNC_1(VAR_21, FUNC_2(VAR_20)->flags, VAR_22);
 FUNC_1(VAR_20, FUNC_2(VAR_21)->flags, VAR_22);

 VAR_17 = VAR_23[0].data;
 VAR_12++;
 VAR_15 = 0;

 VAR_19 = VAR_20;
 for (VAR_11 = VAR_1; VAR_11 <= VAR_12; VAR_11++)
 {
  VAR_18 = (IndexTuple) VAR_17;





  if (VAR_15 > VAR_14 / 2)
  {
   if (VAR_13 == VAR_2)
    VAR_13 = VAR_11 - 1;
   VAR_19 = VAR_21;
  }
  else
  {
   VAR_15 += FUNC_4(FUNC_3(VAR_18)) + sizeof(ItemIdData);
  }

  if (FUNC_5(VAR_19, (Item) VAR_18, FUNC_3(VAR_18), VAR_2, 0, 0) == VAR_2)
   FUNC_12(VAR_0, "failed to add item to index page in \"%s\"",
     FUNC_11(VAR_3->index));
  VAR_17 += FUNC_4(FUNC_3(VAR_18));
 }


 *VAR_8 = VAR_20;
 *VAR_9 = VAR_21;
}
