
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int node; } ;
typedef TYPE_1__ xl_seq_rec ;
typedef scalar_t__ int64 ;
typedef int buf ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_21__ {scalar_t__ seqincrement; scalar_t__ seqmax; scalar_t__ seqmin; scalar_t__ seqcache; int seqcycle; } ;
struct TYPE_20__ {scalar_t__ last_value; scalar_t__ log_cnt; int is_called; } ;
struct TYPE_19__ {int t_len; scalar_t__ t_data; } ;
struct TYPE_18__ {int rd_node; int rd_islocaltemp; } ;
struct TYPE_17__ {scalar_t__ last; scalar_t__ cached; int last_valid; scalar_t__ increment; int relid; } ;
typedef TYPE_2__* SeqTable ;
typedef TYPE_3__* Relation ;
typedef int Page ;
typedef int Oid ;
typedef TYPE_4__ HeapTupleData ;
typedef int HeapTuple ;
typedef TYPE_5__* Form_pg_sequence_data ;
typedef TYPE_6__* Form_pg_sequence ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 char* VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int VAR_12 ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (char*,int) ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,int ,...) ;
 int FUNC_28 (int ,TYPE_2__**,TYPE_3__**) ;
 TYPE_2__* VAR_13 ;
 scalar_t__ FUNC_29 (int ,int ,int) ;
 TYPE_5__* FUNC_30 (TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_31 (TYPE_3__*,int ) ;
 int FUNC_32 (char*,int,char*,scalar_t__) ;

int64
FUNC_33(Oid VAR_14, bool VAR_15)
{
 SeqTable VAR_16;
 Relation VAR_17;
 Buffer VAR_18;
 Page VAR_19;
 HeapTuple VAR_20;
 Form_pg_sequence VAR_21;
 HeapTupleData VAR_22;
 Form_pg_sequence_data VAR_23;
 int64 VAR_24,
    VAR_25,
    VAR_26,
    VAR_27,
    VAR_28,
    VAR_29,
    VAR_30;
 int64 VAR_31,
    VAR_32,
    VAR_33 = 0;
 bool VAR_34;
 bool VAR_35 = 0;


 FUNC_28(VAR_14, &VAR_16, &VAR_17);

 if (VAR_15 &&
  FUNC_29(VAR_16->relid, FUNC_6(),
        VAR_2 | VAR_1) != VAR_0)
  FUNC_25(VAR_5,
    (FUNC_26(VAR_3),
     FUNC_27("permission denied for sequence %s",
      FUNC_14(VAR_17))));


 if (!VAR_17->rd_islocaltemp)
  FUNC_13("nextval()");






 FUNC_12("nextval()");

 if (VAR_16->last != VAR_16->cached)
 {
  FUNC_0(VAR_16->last_valid);
  FUNC_0(VAR_16->increment != 0);
  VAR_16->last += VAR_16->increment;
  FUNC_31(VAR_17, VAR_7);
  VAR_13 = VAR_16;
  return VAR_16->last;
 }

 VAR_20 = FUNC_18(VAR_10, FUNC_9(VAR_14));
 if (!FUNC_7(VAR_20))
  FUNC_24(VAR_5, "cache lookup failed for sequence %u", VAR_14);
 VAR_21 = (Form_pg_sequence) FUNC_3(VAR_20);
 VAR_24 = VAR_21->seqincrement;
 VAR_25 = VAR_21->seqmax;
 VAR_26 = VAR_21->seqmin;
 VAR_27 = VAR_21->seqcache;
 VAR_34 = VAR_21->seqcycle;
 FUNC_16(VAR_20);


 VAR_23 = FUNC_30(VAR_17, &VAR_18, &VAR_22);
 VAR_19 = FUNC_1(VAR_18);

 VAR_16->increment = VAR_24;
 VAR_30 = VAR_32 = VAR_31 = VAR_23->last_value;
 VAR_29 = VAR_27;
 VAR_28 = VAR_23->log_cnt;

 if (!VAR_23->is_called)
 {
  VAR_33++;
  VAR_29--;
 }
 if (VAR_28 < VAR_29 || !VAR_23->is_called)
 {

  VAR_29 = VAR_28 = VAR_29 + VAR_11;
  VAR_35 = 1;
 }
 else
 {
  XLogRecPtr VAR_36 = FUNC_4();

  if (FUNC_10(VAR_19) <= VAR_36)
  {

   VAR_29 = VAR_28 = VAR_29 + VAR_11;
   VAR_35 = 1;
  }
 }

 while (VAR_29)
 {




  if (VAR_24 > 0)
  {

   if ((VAR_25 >= 0 && VAR_32 > VAR_25 - VAR_24) ||
    (VAR_25 < 0 && VAR_32 + VAR_24 > VAR_25))
   {
    if (VAR_33 > 0)
     break;
    if (!VAR_34)
    {
     char VAR_37[100];

     FUNC_32(VAR_37, sizeof(VAR_37), VAR_6, VAR_25);
     FUNC_25(VAR_5,
       (FUNC_26(VAR_4),
        FUNC_27("nextval: reached maximum value of sequence \"%s\" (%s)",
         FUNC_14(VAR_17), VAR_37)));
    }
    VAR_32 = VAR_26;
   }
   else
    VAR_32 += VAR_24;
  }
  else
  {

   if ((VAR_26 < 0 && VAR_32 < VAR_26 - VAR_24) ||
    (VAR_26 >= 0 && VAR_32 + VAR_24 < VAR_26))
   {
    if (VAR_33 > 0)
     break;
    if (!VAR_34)
    {
     char VAR_38[100];

     FUNC_32(VAR_38, sizeof(VAR_38), VAR_6, VAR_26);
     FUNC_25(VAR_5,
       (FUNC_26(VAR_4),
        FUNC_27("nextval: reached minimum value of sequence \"%s\" (%s)",
         FUNC_14(VAR_17), VAR_38)));
    }
    VAR_32 = VAR_25;
   }
   else
    VAR_32 += VAR_24;
  }
  VAR_29--;
  if (VAR_33 < VAR_27)
  {
   VAR_28--;
   VAR_33++;
   VAR_30 = VAR_32;
   if (VAR_33 == 1)
    VAR_31 = VAR_32;
  }
 }

 VAR_28 -= VAR_29;
 FUNC_0(VAR_28 >= 0);


 VAR_16->last = VAR_31;
 VAR_16->cached = VAR_30;
 VAR_16->last_valid = 1;

 VAR_13 = VAR_16;
 if (VAR_35 && FUNC_15(VAR_17))
  FUNC_5();


 FUNC_17();
 FUNC_8(VAR_18);


 if (VAR_35 && FUNC_15(VAR_17))
 {
  xl_seq_rec VAR_39;
  XLogRecPtr VAR_40;







  FUNC_20();
  FUNC_22(0, VAR_18, VAR_8);


  VAR_23->last_value = VAR_32;
  VAR_23->is_called = 1;
  VAR_23->log_cnt = 0;

  VAR_39.node = VAR_17->rd_node;

  FUNC_23((char *) &VAR_39, sizeof(xl_seq_rec));
  FUNC_23((char *) VAR_22.t_data, VAR_22.t_len);

  VAR_40 = FUNC_21(VAR_9, VAR_12);

  FUNC_11(VAR_19, VAR_40);
 }


 VAR_23->last_value = VAR_30;
 VAR_23->is_called = 1;
 VAR_23->log_cnt = VAR_28;

 FUNC_2();

 FUNC_19(VAR_18);

 FUNC_31(VAR_17, VAR_7);

 return VAR_31;
}
