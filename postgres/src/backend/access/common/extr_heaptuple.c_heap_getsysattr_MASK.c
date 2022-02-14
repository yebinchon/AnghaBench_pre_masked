
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_4__ {int t_tableOid; int t_data; int t_self; } ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;




 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;


 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;

Datum
FUNC_9(HeapTuple VAR_1, int VAR_2, TupleDesc VAR_3, bool *VAR_4)
{
 Datum VAR_5;

 FUNC_0(VAR_1);


 *VAR_4 = 0;

 switch (VAR_2)
 {
  case 129:

   VAR_5 = FUNC_6(&(VAR_1->t_self));
   break;
  case 130:
   VAR_5 = FUNC_7(FUNC_4(VAR_1->t_data));
   break;
  case 132:
   VAR_5 = FUNC_7(FUNC_3(VAR_1->t_data));
   break;
  case 131:
  case 133:







   VAR_5 = FUNC_1(FUNC_2(VAR_1->t_data));
   break;
  case 128:
   VAR_5 = FUNC_5(VAR_1->t_tableOid);
   break;
  default:
   FUNC_8(VAR_0, "invalid attnum: %d", VAR_2);
   VAR_5 = 0;
   break;
 }
 return VAR_5;
}
