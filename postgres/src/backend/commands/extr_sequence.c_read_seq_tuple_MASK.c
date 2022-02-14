
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ magic; } ;
typedef TYPE_1__ sequence_magic ;
struct TYPE_10__ {TYPE_2__* t_data; int t_len; } ;
struct TYPE_9__ {int t_infomask; } ;
typedef int Relation ;
typedef int Page ;
typedef int ItemId ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef scalar_t__ Form_pg_sequence_data ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static Form_pg_sequence_data
FUNC_15(Relation VAR_8, Buffer *VAR_9, HeapTuple VAR_10)
{
 Page VAR_11;
 ItemId VAR_12;
 sequence_magic *VAR_13;
 Form_pg_sequence_data VAR_14;

 *VAR_9 = FUNC_12(VAR_8, 0);
 FUNC_7(*VAR_9, VAR_0);

 VAR_11 = FUNC_1(*VAR_9);
 VAR_13 = (sequence_magic *) FUNC_11(VAR_11);

 if (VAR_13->magic != VAR_7)
  FUNC_14(VAR_1, "bad magic number in sequence \"%s\": %08X",
    FUNC_13(VAR_8), VAR_13->magic);

 VAR_12 = FUNC_10(VAR_11, VAR_2);
 FUNC_0(FUNC_6(VAR_12));


 VAR_10->t_data = (HeapTupleHeader) FUNC_9(VAR_11, VAR_12);
 VAR_10->t_len = FUNC_5(VAR_12);
 FUNC_0(!(VAR_10->t_data->t_infomask & VAR_5));
 if (FUNC_3(VAR_10->t_data) != VAR_6)
 {
  FUNC_4(VAR_10->t_data, VAR_6);
  VAR_10->t_data->t_infomask &= ~VAR_3;
  VAR_10->t_data->t_infomask |= VAR_4;
  FUNC_8(*VAR_9, 1);
 }

 VAR_14 = (Form_pg_sequence_data) FUNC_2(VAR_10);

 return VAR_14;
}
