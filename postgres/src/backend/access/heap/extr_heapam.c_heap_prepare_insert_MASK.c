
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int TransactionId ;
struct TYPE_19__ {scalar_t__ t_len; int t_tableOid; TYPE_11__* t_data; } ;
struct TYPE_18__ {TYPE_1__* rd_rel; } ;
struct TYPE_17__ {scalar_t__ relkind; } ;
struct TYPE_16__ {int t_infomask; int t_infomask2; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* HeapTuple ;
typedef int CommandId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_11__*,int ) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_11__*,int ) ;
 int FUNC_5 (TYPE_11__*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 TYPE_3__* FUNC_11 (TYPE_2__*,TYPE_3__*,int *,int) ;

__attribute__((used)) static HeapTuple
FUNC_12(Relation VAR_9, HeapTuple VAR_10, TransactionId VAR_11,
     CommandId VAR_12, int VAR_13)
{
 if (FUNC_6())
  FUNC_8(VAR_1,
    (FUNC_9(VAR_0),
     FUNC_10("cannot insert tuples in a parallel worker")));

 VAR_10->t_data->t_infomask &= ~(VAR_4);
 VAR_10->t_data->t_infomask2 &= ~(VAR_2);
 VAR_10->t_data->t_infomask |= VAR_5;
 FUNC_4(VAR_10->t_data, VAR_11);
 if (VAR_13 & VAR_3)
  FUNC_5(VAR_10->t_data);

 FUNC_2(VAR_10->t_data, VAR_12);
 FUNC_3(VAR_10->t_data, 0);
 VAR_10->t_tableOid = FUNC_7(VAR_9);





 if (VAR_9->rd_rel->relkind != VAR_7 &&
  VAR_9->rd_rel->relkind != VAR_6)
 {

  FUNC_0(!FUNC_1(VAR_10));
  return VAR_10;
 }
 else if (FUNC_1(VAR_10) || VAR_10->t_len > VAR_8)
  return FUNC_11(VAR_9, VAR_10, ((void*)0), VAR_13);
 else
  return VAR_10;
}
