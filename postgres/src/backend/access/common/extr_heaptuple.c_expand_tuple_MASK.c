
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint16 ;
typedef char bits8 ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_26__ {int am_value; scalar_t__ am_present; } ;
struct TYPE_25__ {int attlen; int attalign; } ;
struct TYPE_24__ {int t_len; TYPE_3__* t_data; int t_self; int t_tableOid; } ;
struct TYPE_23__ {int t_hoff; int t_len; int t_infomask; int t_ctid; } ;
struct TYPE_22__ {int natts; int tdtypmod; int tdtypeid; TYPE_1__* constr; } ;
struct TYPE_21__ {TYPE_7__* missing; } ;
typedef int Size ;
typedef TYPE_3__* MinimalTuple ;
typedef TYPE_3__* HeapTupleHeader ;
typedef TYPE_5__* HeapTuple ;
typedef TYPE_6__* Form_pg_attribute ;
typedef int Datum ;
typedef TYPE_7__ AttrMissing ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (int,int ,int ,int ) ;
 int FUNC_13 (TYPE_6__*,char**,int*,char**,int *,int ,int) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,int,int) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_18(HeapTuple *VAR_6,
    MinimalTuple *VAR_7,
    HeapTuple VAR_8,
    TupleDesc VAR_9)
{
 AttrMissing *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12 = 0;
 bool VAR_13 = FUNC_2(VAR_8);
 HeapTupleHeader VAR_14;
 HeapTupleHeader VAR_15 = VAR_8->t_data;
 int VAR_16 = FUNC_3(VAR_15);
 int VAR_17 = VAR_9->natts;
 int VAR_18;
 int VAR_19;
 Size VAR_20 = VAR_8->t_len - VAR_15->t_hoff;
 Size VAR_21;
 Size VAR_22;
 int VAR_23;
 bits8 *VAR_24 = ((void*)0);
 int VAR_25 = 0;
 char *VAR_26;
 uint16 *VAR_27;

 FUNC_0((VAR_6 && !VAR_7)
     || (!VAR_6 && VAR_7));

 FUNC_0(VAR_16 < VAR_17);

 VAR_18 = (VAR_13 ? FUNC_1(VAR_16) : 0);

 VAR_21 = VAR_20;

 if (VAR_9->constr &&
  VAR_9->constr->missing)
 {





  VAR_10 = VAR_9->constr->missing;





  for (VAR_12 = VAR_16;
    VAR_12 < VAR_17;
    VAR_12++)
  {
   if (VAR_10[VAR_12].am_present)
    break;
   else
    VAR_13 = 1;
  }





  for (VAR_11 = VAR_12;
    VAR_11 < VAR_17;
    VAR_11++)
  {
   if (VAR_10[VAR_11].am_present)
   {
    Form_pg_attribute VAR_28 = FUNC_10(VAR_9, VAR_11);

    VAR_21 = FUNC_12(VAR_21,
            VAR_28->attalign,
            VAR_28->attlen,
            VAR_10[VAR_11].am_value);

    VAR_21 = FUNC_11(VAR_21,
               VAR_28->attlen,
               VAR_10[VAR_11].am_value);
   }
   else
   {

    VAR_13 = 1;
   }
  }
 }
 else
 {




  VAR_13 = 1;
 }

 VAR_22 = 0;

 if (VAR_13)
 {
  VAR_19 = FUNC_1(VAR_17);
  VAR_22 += VAR_19;
 }
 else
  VAR_19 = 0;





 if (VAR_6)
 {
  VAR_22 += FUNC_16(VAR_1, VAR_5);
  VAR_23 = VAR_22 = FUNC_9(VAR_22);
  VAR_22 += VAR_21;

  *VAR_6 = (HeapTuple) FUNC_17(VAR_0 + VAR_22);
  (*VAR_6)->t_data
   = VAR_14
   = (HeapTupleHeader) ((char *) *VAR_6 + VAR_0);
  (*VAR_6)->t_len = VAR_22;
  (*VAR_6)->t_tableOid = VAR_8->t_tableOid;
  (*VAR_6)->t_self = VAR_8->t_self;

  VAR_14->t_infomask = VAR_15->t_infomask;
  VAR_14->t_hoff = VAR_23;
  FUNC_5(VAR_14, VAR_17);
  FUNC_4(VAR_14, VAR_22);
  FUNC_7(VAR_14, VAR_9->tdtypeid);
  FUNC_6(VAR_14, VAR_9->tdtypmod);

  FUNC_8(&(VAR_14->t_ctid));
  if (VAR_19 > 0)
   VAR_24 = (bits8 *) ((char *) (*VAR_6)->t_data
          + FUNC_16(VAR_1, VAR_5));
  VAR_26 = (char *) (*VAR_6)->t_data + VAR_23;
  VAR_27 = &(VAR_14->t_infomask);
 }
 else
 {
  VAR_22 += VAR_4;
  VAR_23 = VAR_22 = FUNC_9(VAR_22);
  VAR_22 += VAR_21;

  *VAR_7 = (MinimalTuple) FUNC_17(VAR_22);
  (*VAR_7)->t_len = VAR_22;
  (*VAR_7)->t_hoff = VAR_23 + VAR_2;
  (*VAR_7)->t_infomask = VAR_15->t_infomask;

  FUNC_5(*VAR_7, VAR_17);
  if (VAR_19 > 0)
   VAR_24 = (bits8 *) ((char *) *VAR_7
          + FUNC_16(VAR_3, VAR_5));
  VAR_26 = (char *) *VAR_7 + VAR_23;
  VAR_27 = &((*VAR_7)->t_infomask);
 }

 if (VAR_19 > 0)
 {
  if (VAR_18 > 0)
  {

   FUNC_14(VAR_24,
       ((char *) VAR_15)
       + FUNC_16(VAR_1, VAR_5),
       VAR_18);
   VAR_24 += VAR_18 - 1;
  }
  else
  {
   VAR_18 = FUNC_1(VAR_16);

   FUNC_15(VAR_24, 0xff, VAR_18);

   VAR_24 += VAR_18 - 1;

   if (VAR_16 & 0x07)
   {

    VAR_25 = 0xff << (VAR_16 & 0x07);

    *VAR_24 = ~VAR_25;
   }
  }

  VAR_25 = (1 << ((VAR_16 - 1) & 0x07));
 }

 FUNC_14(VAR_26,
     ((char *) VAR_8->t_data) + VAR_15->t_hoff,
     VAR_20);

 VAR_26 += VAR_20;


 for (VAR_11 = VAR_16; VAR_11 < VAR_17; VAR_11++)
 {

  Form_pg_attribute VAR_29 = FUNC_10(VAR_9, VAR_11);

  if (VAR_10 && VAR_10[VAR_11].am_present)
  {
   FUNC_13(VAR_29,
      VAR_24 ? &VAR_24 : ((void*)0),
      &VAR_25,
      &VAR_26,
      VAR_27,
      VAR_10[VAR_11].am_value,
      0);
  }
  else
  {
   FUNC_13(VAR_29,
      &VAR_24,
      &VAR_25,
      &VAR_26,
      VAR_27,
      (Datum) 0,
      1);
  }
 }
}
