
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offsetindex; int itemoff; scalar_t__ alignedlen; } ;
typedef TYPE_1__ itemIdSortData ;
typedef TYPE_1__* itemIdSort ;
struct TYPE_6__ {scalar_t__ pd_lower; scalar_t__ pd_upper; scalar_t__ pd_special; } ;
typedef scalar_t__ Size ;
typedef TYPE_3__* PageHeader ;
typedef scalar_t__ Page ;
typedef scalar_t__ Offset ;
typedef int ItemId ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,unsigned int,...) ;
 scalar_t__ FUNC_14 (int) ;

void
FUNC_15(Page VAR_6)
{
 Offset VAR_7 = ((PageHeader) VAR_6)->pd_lower;
 Offset VAR_8 = ((PageHeader) VAR_6)->pd_upper;
 Offset VAR_9 = ((PageHeader) VAR_6)->pd_special;
 itemIdSortData VAR_10[VAR_4];
 itemIdSort VAR_11;
 ItemId VAR_12;
 int VAR_13,
    VAR_14,
    VAR_15;
 int VAR_16;
 Size VAR_17;
 if (VAR_7 < VAR_5 ||
  VAR_7 > VAR_8 ||
  VAR_8 > VAR_9 ||
  VAR_9 > VAR_0 ||
  VAR_9 != FUNC_5(VAR_9))
  FUNC_11(VAR_2,
    (FUNC_12(VAR_1),
     FUNC_13("corrupted page pointers: lower = %u, upper = %u, special = %u",
      VAR_7, VAR_8, VAR_9)));




 VAR_13 = FUNC_8(VAR_6);
 VAR_11 = VAR_10;
 VAR_15 = VAR_17 = 0;
 for (VAR_16 = VAR_3; VAR_16 <= VAR_13; VAR_16++)
 {
  VAR_12 = FUNC_7(VAR_6, VAR_16);
  if (FUNC_3(VAR_12))
  {
   if (FUNC_2(VAR_12))
   {
    VAR_11->offsetindex = VAR_16 - 1;
    VAR_11->itemoff = FUNC_1(VAR_12);
    if (FUNC_14(VAR_11->itemoff < (int) VAR_8 ||
        VAR_11->itemoff >= (int) VAR_9))
     FUNC_11(VAR_2,
       (FUNC_12(VAR_1),
        FUNC_13("corrupted line pointer: %u",
         VAR_11->itemoff)));
    VAR_11->alignedlen = FUNC_5(FUNC_0(VAR_12));
    VAR_17 += VAR_11->alignedlen;
    VAR_11++;
   }
  }
  else
  {

   FUNC_4(VAR_12);
   VAR_15++;
  }
 }

 VAR_14 = VAR_11 - VAR_10;
 if (VAR_14 == 0)
 {

  ((PageHeader) VAR_6)->pd_upper = VAR_9;
 }
 else
 {

  if (VAR_17 > (Size) (VAR_9 - VAR_7))
   FUNC_11(VAR_2,
     (FUNC_12(VAR_1),
      FUNC_13("corrupted item lengths: total %u, available space %u",
       (unsigned int) VAR_17, VAR_9 - VAR_7)));

  FUNC_10(VAR_10, VAR_14, VAR_6);
 }


 if (VAR_15 > 0)
  FUNC_9(VAR_6);
 else
  FUNC_6(VAR_6);
}
