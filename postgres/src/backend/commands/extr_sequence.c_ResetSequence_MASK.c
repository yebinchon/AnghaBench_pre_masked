
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_16__ {int seqstart; } ;
struct TYPE_15__ {int is_called; scalar_t__ log_cnt; int last_value; } ;
struct TYPE_14__ {TYPE_1__* rd_rel; } ;
struct TYPE_13__ {int last; int cached; } ;
struct TYPE_12__ {scalar_t__ relfrozenxid; scalar_t__ relminmxid; int relpersistence; } ;
typedef TYPE_2__* SeqTable ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef int HeapTupleData ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_sequence_data ;
typedef TYPE_5__* Form_pg_sequence ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_2__**,TYPE_3__**) ;
 int FUNC_12 (TYPE_3__*,int *,int *) ;
 int FUNC_13 (TYPE_3__*,int ) ;

void
FUNC_14(Oid VAR_5)
{
 Relation VAR_6;
 SeqTable VAR_7;
 Form_pg_sequence_data VAR_8;
 Buffer VAR_9;
 HeapTupleData VAR_10;
 HeapTuple VAR_11;
 HeapTuple VAR_12;
 Form_pg_sequence VAR_13;
 int64 VAR_14;






 FUNC_11(VAR_5, &VAR_7, &VAR_6);
 (void) FUNC_12(VAR_6, &VAR_9, &VAR_10);

 VAR_12 = FUNC_6(VAR_4, FUNC_3(VAR_5));
 if (!FUNC_2(VAR_12))
  FUNC_8(VAR_0, "cache lookup failed for sequence %u", VAR_5);
 VAR_13 = (Form_pg_sequence) FUNC_1(VAR_12);
 VAR_14 = VAR_13->seqstart;
 FUNC_5(VAR_12);




 VAR_11 = FUNC_10(&VAR_10);


 FUNC_7(VAR_9);





 VAR_8 = (Form_pg_sequence_data) FUNC_1(VAR_11);
 VAR_8->last_value = VAR_14;
 VAR_8->is_called = 0;
 VAR_8->log_cnt = 0;




 FUNC_4(VAR_6, VAR_6->rd_rel->relpersistence);






 FUNC_0(VAR_6->rd_rel->relfrozenxid == VAR_2);
 FUNC_0(VAR_6->rd_rel->relminmxid == VAR_1);




 FUNC_9(VAR_6, VAR_11);



 VAR_7->cached = VAR_7->last;

 FUNC_13(VAR_6, VAR_3);
}
