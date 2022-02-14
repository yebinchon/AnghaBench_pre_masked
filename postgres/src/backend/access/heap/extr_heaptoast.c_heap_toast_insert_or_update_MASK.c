
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_23__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_30__ {int* ttc_isnull; int* ttc_oldisnull; int ttc_flags; TYPE_4__* ttc_attr; int * ttc_oldvalues; int * ttc_values; TYPE_5__* ttc_rel; } ;
typedef TYPE_3__ ToastTupleContext ;
struct TYPE_31__ {scalar_t__ tai_size; int tai_colflags; } ;
typedef TYPE_4__ ToastAttrInfo ;
struct TYPE_34__ {int t_len; TYPE_6__* t_data; int t_tableOid; int t_self; } ;
struct TYPE_33__ {int t_hoff; int * t_bits; int t_infomask; } ;
struct TYPE_32__ {TYPE_1__* rd_rel; TYPE_2__* rd_att; } ;
struct TYPE_29__ {int natts; } ;
struct TYPE_28__ {char attstorage; } ;
struct TYPE_27__ {scalar_t__ relkind; scalar_t__ reltoastrelid; } ;
typedef scalar_t__ Size ;
typedef TYPE_5__* Relation ;
typedef TYPE_6__* HeapTupleHeader ;
typedef TYPE_7__* HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_6__*,int) ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_23__* FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int*) ;
 int FUNC_7 (TYPE_7__*,TYPE_2__*,int *,int*) ;
 int FUNC_8 (TYPE_2__*,int *,int*,char*,int,int *,int *) ;
 int FUNC_9 (TYPE_6__*,TYPE_6__*,void*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int,int) ;
 int FUNC_13 (TYPE_3__*,int,int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,int) ;

HeapTuple
FUNC_16(Relation VAR_12, HeapTuple VAR_13, HeapTuple VAR_14,
       int VAR_15)
{
 HeapTuple VAR_16;
 TupleDesc VAR_17;
 int VAR_18;

 Size VAR_19;
 Size VAR_20;

 bool VAR_21[VAR_3];
 bool VAR_22[VAR_3];
 Datum VAR_23[VAR_3];
 Datum VAR_24[VAR_3];
 ToastAttrInfo VAR_25[VAR_3];
 ToastTupleContext VAR_26;







 VAR_15 &= ~VAR_1;





 FUNC_0(VAR_12->rd_rel->relkind == VAR_5 ||
     VAR_12->rd_rel->relkind == VAR_4);




 VAR_17 = VAR_12->rd_att;
 VAR_18 = VAR_17->natts;

 FUNC_0(VAR_18 <= VAR_3);
 FUNC_7(VAR_13, VAR_17, VAR_23, VAR_21);
 if (VAR_14 != ((void*)0))
  FUNC_7(VAR_14, VAR_17, VAR_24, VAR_22);





 VAR_26.ttc_rel = VAR_12;
 VAR_26.ttc_values = VAR_23;
 VAR_26.ttc_isnull = VAR_21;
 if (VAR_14 == ((void*)0))
 {
  VAR_26.ttc_oldvalues = ((void*)0);
  VAR_26.ttc_oldisnull = ((void*)0);
 }
 else
 {
  VAR_26.ttc_oldvalues = VAR_24;
  VAR_26.ttc_oldisnull = VAR_22;
 }
 VAR_26.ttc_attr = VAR_25;
 FUNC_14(&VAR_26);
 VAR_20 = VAR_6;
 if ((VAR_26.ttc_flags & VAR_8) != 0)
  VAR_20 += FUNC_1(VAR_18);
 VAR_20 = FUNC_3(VAR_20);

 VAR_19 = FUNC_4(VAR_12, VAR_10) - VAR_20;





 while (FUNC_6(VAR_17,
          VAR_23, VAR_21) > VAR_19)
 {
  int VAR_27;

  VAR_27 = FUNC_13(&VAR_26, 1, 0);
  if (VAR_27 < 0)
   break;




  if (FUNC_5(VAR_17, VAR_27)->attstorage == 'x')
   FUNC_15(&VAR_26, VAR_27);
  else
  {

   VAR_25[VAR_27].tai_colflags |= VAR_7;
  }
  if (VAR_25[VAR_27].tai_size > VAR_19 &&
   VAR_12->rd_rel->reltoastrelid != VAR_2)
   FUNC_12(&VAR_26, VAR_27, VAR_15);
 }






 while (FUNC_6(VAR_17,
          VAR_23, VAR_21) > VAR_19 &&
     VAR_12->rd_rel->reltoastrelid != VAR_2)
 {
  int VAR_28;

  VAR_28 = FUNC_13(&VAR_26, 0, 0);
  if (VAR_28 < 0)
   break;
  FUNC_12(&VAR_26, VAR_28, VAR_15);
 }





 while (FUNC_6(VAR_17,
          VAR_23, VAR_21) > VAR_19)
 {
  int VAR_29;

  VAR_29 = FUNC_13(&VAR_26, 1, 1);
  if (VAR_29 < 0)
   break;

  FUNC_15(&VAR_26, VAR_29);
 }






 VAR_19 = VAR_11 - VAR_20;

 while (FUNC_6(VAR_17,
          VAR_23, VAR_21) > VAR_19 &&
     VAR_12->rd_rel->reltoastrelid != VAR_2)
 {
  int VAR_30;

  VAR_30 = FUNC_13(&VAR_26, 0, 1);
  if (VAR_30 < 0)
   break;

  FUNC_12(&VAR_26, VAR_30, VAR_15);
 }





 if ((VAR_26.ttc_flags & VAR_9) != 0)
 {
  HeapTupleHeader VAR_31 = VAR_13->t_data;
  HeapTupleHeader VAR_32;
  int32 VAR_33;
  int32 VAR_34;
  int32 VAR_35;
  VAR_33 = VAR_6;
  if ((VAR_26.ttc_flags & VAR_8) != 0)
   VAR_33 += FUNC_1(VAR_18);
  VAR_33 = FUNC_3(VAR_33);
  VAR_34 = FUNC_6(VAR_17,
             VAR_23, VAR_21);
  VAR_35 = VAR_33 + VAR_34;




  VAR_16 = (HeapTuple) FUNC_10(VAR_0 + VAR_35);
  VAR_16->t_len = VAR_35;
  VAR_16->t_self = VAR_13->t_self;
  VAR_16->t_tableOid = VAR_13->t_tableOid;
  VAR_32 = (HeapTupleHeader) ((char *) VAR_16 + VAR_0);
  VAR_16->t_data = VAR_32;




  FUNC_9(VAR_32, VAR_31, VAR_6);
  FUNC_2(VAR_32, VAR_18);
  VAR_32->t_hoff = VAR_33;


  FUNC_8(VAR_17,
      VAR_23,
      VAR_21,
      (char *) VAR_32 + VAR_33,
      VAR_34,
      &(VAR_32->t_infomask),
      ((VAR_26.ttc_flags & VAR_8) != 0) ?
      VAR_32->t_bits : ((void*)0));
 }
 else
  VAR_16 = VAR_13;

 FUNC_11(&VAR_26);

 return VAR_16;
}
