
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tts_isnull; int tts_values; int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_12__ {TYPE_2__* t_data; int t_self; int t_len; int member_0; } ;
struct TYPE_11__ {int t_ctid; } ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef int Datum ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;

void
FUNC_5(Datum VAR_0, TupleTableSlot *VAR_1)
{
 HeapTupleData VAR_2 = {0};
 HeapTupleHeader VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 VAR_2.t_len = FUNC_3(VAR_3);
 VAR_2.t_self = VAR_3->t_ctid;
 VAR_2.t_data = VAR_3;

 FUNC_1(VAR_1);

 FUNC_4(&VAR_2, VAR_1->tts_tupleDescriptor,
       VAR_1->tts_values, VAR_1->tts_isnull);
 FUNC_2(VAR_1);
}
