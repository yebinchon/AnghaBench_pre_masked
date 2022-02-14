
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int t_len; scalar_t__ t_data; } ;
struct TYPE_7__ {int tdtypmod; int tdtypeid; } ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int Datum ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ,TYPE_1__*) ;

Datum
FUNC_8(HeapTuple VAR_0, TupleDesc VAR_1)
{
 HeapTupleHeader VAR_2;





 if (FUNC_0(VAR_0))
  return FUNC_7(VAR_0->t_data,
           VAR_0->t_len,
           VAR_1);






 VAR_2 = (HeapTupleHeader) FUNC_6(VAR_0->t_len);
 FUNC_5((char *) VAR_2, (char *) VAR_0->t_data, VAR_0->t_len);

 FUNC_1(VAR_2, VAR_0->t_len);
 FUNC_3(VAR_2, VAR_1->tdtypeid);
 FUNC_2(VAR_2, VAR_1->tdtypmod);

 return FUNC_4(VAR_2);
}
