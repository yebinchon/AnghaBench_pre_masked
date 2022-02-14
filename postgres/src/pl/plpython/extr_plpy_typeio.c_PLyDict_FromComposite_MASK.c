
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_5__ {int curr_proc; } ;
struct TYPE_4__ {int t_data; int t_len; } ;
typedef int PyObject ;
typedef int PLyDatumToOb ;
typedef int Oid ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static PyObject *
FUNC_9(PLyDatumToOb *VAR_0, Datum VAR_1)
{
 PyObject *VAR_2;
 HeapTupleHeader VAR_3;
 Oid VAR_4;
 int32 VAR_5;
 TupleDesc VAR_6;
 HeapTupleData VAR_7;

 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_8(VAR_4, VAR_5);


 FUNC_6(VAR_0, VAR_6,
        FUNC_5()->curr_proc);


 VAR_7.t_len = FUNC_1(VAR_3);
 VAR_7.t_data = VAR_3;

 VAR_2 = FUNC_4(VAR_0, &VAR_7, VAR_6, 1);

 FUNC_7(VAR_6);

 return VAR_2;
}
