
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int node; } ;
typedef TYPE_1__ xl_seq_rec ;
struct TYPE_14__ {int magic; } ;
typedef TYPE_2__ sequence_magic ;
typedef int XLogRecPtr ;
struct TYPE_17__ {int t_ctid; int t_infomask; } ;
struct TYPE_16__ {int t_len; TYPE_9__* t_data; } ;
struct TYPE_15__ {int rd_node; } ;
typedef TYPE_3__* Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef TYPE_4__* HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (TYPE_9__*,int ) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 int FUNC_8 (TYPE_9__*,int ) ;
 int FUNC_9 (TYPE_9__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (int ,int ,int,int ,int,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_18 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 int VAR_12 ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (int ,char*) ;

__attribute__((used)) static void
FUNC_26(Relation VAR_13, HeapTuple VAR_14)
{
 Buffer VAR_15;
 Page VAR_16;
 sequence_magic *VAR_17;
 OffsetNumber VAR_18;



 VAR_15 = FUNC_17(VAR_13, VAR_8);
 FUNC_0(FUNC_1(VAR_15) == 0);

 VAR_16 = FUNC_2(VAR_15);

 FUNC_15(VAR_16, FUNC_3(VAR_15), sizeof(sequence_magic));
 VAR_17 = (sequence_magic *) FUNC_14(VAR_16);
 VAR_17->magic = VAR_11;



 FUNC_11(VAR_15, VAR_0);
 FUNC_8(VAR_14->t_data, VAR_4);
 FUNC_9(VAR_14->t_data);
 FUNC_6(VAR_14->t_data, VAR_2);
 FUNC_7(VAR_14->t_data, VAR_7);
 VAR_14->t_data->t_infomask |= VAR_5;
 FUNC_10(&VAR_14->t_data->t_ctid, 0, VAR_3);


 if (FUNC_18(VAR_13))
  FUNC_5();

 FUNC_19();

 FUNC_12(VAR_15);

 VAR_18 = FUNC_13(VAR_16, (Item) VAR_14->t_data, VAR_14->t_len,
       VAR_6, 0, 0);
 if (VAR_18 != VAR_3)
  FUNC_25(VAR_1, "failed to add sequence tuple to page");


 if (FUNC_18(VAR_13))
 {
  xl_seq_rec VAR_19;
  XLogRecPtr VAR_20;

  FUNC_21();
  FUNC_23(0, VAR_15, VAR_9);

  VAR_19.node = VAR_13->rd_node;

  FUNC_24((char *) &VAR_19, sizeof(xl_seq_rec));
  FUNC_24((char *) VAR_14->t_data, VAR_14->t_len);

  VAR_20 = FUNC_22(VAR_10, VAR_12);

  FUNC_16(VAR_16, VAR_20);
 }

 FUNC_4();

 FUNC_20(VAR_15);
}
