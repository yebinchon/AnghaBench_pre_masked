
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int t_infomask2; int t_infomask; int frzflags; void* xmax; } ;
typedef TYPE_1__ xl_heap_freeze_tuple ;
typedef int uint16 ;
typedef void* TransactionId ;
struct TYPE_9__ {int t_infomask2; int t_infomask; } ;
typedef TYPE_2__* HeapTupleHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (void*,int,void*,void*,void*,void*,int*) ;
 int FUNC_2 (void*,int*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*) ;
 void* VAR_17 ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,void*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,void*,...) ;

bool
FUNC_14(HeapTupleHeader VAR_20,
        TransactionId VAR_21, TransactionId VAR_22,
        TransactionId VAR_23, TransactionId VAR_24,
        xl_heap_freeze_tuple *VAR_25, bool *VAR_26)
{
 bool VAR_27 = 0;
 bool VAR_28 = 0;
 bool VAR_29;
 bool VAR_30;
 TransactionId VAR_31;

 VAR_25->frzflags = 0;
 VAR_25->t_infomask2 = VAR_20->t_infomask2;
 VAR_25->t_infomask = VAR_20->t_infomask;
 VAR_25->xmax = FUNC_4(VAR_20);
 VAR_31 = FUNC_5(VAR_20);
 if (!FUNC_8(VAR_31))
  VAR_29 = 1;
 else
 {
  if (FUNC_10(VAR_31, VAR_21))
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_13("found xmin %u from before relfrozenxid %u",
          VAR_31, VAR_21)));

  VAR_29 = FUNC_10(VAR_31, VAR_23);
  if (VAR_29)
  {
   if (!FUNC_7(VAR_31))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_13("uncommitted xmin %u from before xid cutoff %u needs to be frozen",
           VAR_31, VAR_23)));

   VAR_25->t_infomask |= VAR_15;
   VAR_27 = 1;
  }
 }
 VAR_31 = FUNC_4(VAR_20);

 if (VAR_20->t_infomask & VAR_13)
 {
  TransactionId VAR_32;
  uint16 VAR_33;

  VAR_32 = FUNC_1(VAR_31, VAR_20->t_infomask,
         VAR_21, VAR_22,
         VAR_23, VAR_24, &VAR_33);

  VAR_30 = (VAR_33 & VAR_2);

  if (VAR_33 & VAR_5)
  {







   VAR_25->t_infomask &= ~VAR_10;
   VAR_25->xmax = VAR_32;
   if (VAR_33 & VAR_3)
    VAR_25->t_infomask |= VAR_11;
   VAR_27 = 1;
  }
  else if (VAR_33 & VAR_4)
  {
   uint16 VAR_34;
   uint16 VAR_35;







   VAR_25->t_infomask &= ~VAR_10;
   VAR_25->t_infomask2 &= ~VAR_7;
   FUNC_2(VAR_32, &VAR_34, &VAR_35);
   VAR_25->t_infomask |= VAR_34;
   VAR_25->t_infomask2 |= VAR_35;

   VAR_25->xmax = VAR_32;

   VAR_27 = 1;
  }
 }
 else if (FUNC_8(VAR_31))
 {
  if (FUNC_10(VAR_31, VAR_21))
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_13("found xmax %u from before relfrozenxid %u",
          VAR_31, VAR_21)));

  if (FUNC_10(VAR_31, VAR_23))
  {






   if (!FUNC_3(VAR_20->t_infomask) &&
    FUNC_7(VAR_31))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_13("cannot freeze committed xmax %u",
           VAR_31)));
   VAR_30 = 1;
  }
  else
   VAR_30 = 0;
 }
 else if ((VAR_20->t_infomask & VAR_12) ||
    !FUNC_9(FUNC_4(VAR_20)))
 {
  VAR_30 = 0;
  VAR_28 = 1;
 }
 else
  FUNC_11(VAR_1,
    (FUNC_12(VAR_0),
     FUNC_13("found xmax %u (infomask 0x%04x) not frozen, not multi, not normal",
         VAR_31, VAR_20->t_infomask)));

 if (VAR_30)
 {
  FUNC_0(!VAR_28);

  VAR_25->xmax = VAR_17;






  VAR_25->t_infomask &= ~VAR_10;
  VAR_25->t_infomask |= VAR_12;
  VAR_25->t_infomask2 &= ~VAR_6;
  VAR_25->t_infomask2 &= ~VAR_7;
  VAR_27 = 1;
 }





 if (VAR_20->t_infomask & VAR_8)
 {
  VAR_31 = FUNC_6(VAR_20);
  if (FUNC_8(VAR_31))
  {





   if (VAR_20->t_infomask & VAR_9)
    VAR_25->frzflags |= VAR_19;
   else
    VAR_25->frzflags |= VAR_18;





   FUNC_0(!(VAR_20->t_infomask & VAR_16));
   VAR_25->t_infomask |= VAR_14;
   VAR_27 = 1;
  }
 }

 *VAR_26 = (VAR_29 &&
       (VAR_30 || VAR_28));
 return VAR_27;
}
