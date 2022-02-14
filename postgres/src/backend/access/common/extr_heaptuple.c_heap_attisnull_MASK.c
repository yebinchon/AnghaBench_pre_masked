
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_12__ {int t_bits; } ;
struct TYPE_11__ {scalar_t__ atthasmissing; } ;
struct TYPE_10__ {TYPE_8__* t_data; } ;
struct TYPE_9__ {int natts; } ;
typedef TYPE_2__* HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;






 TYPE_5__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;

bool
FUNC_6(HeapTuple VAR_1, int VAR_2, TupleDesc VAR_3)
{




 FUNC_0(!VAR_3 || VAR_2 <= VAR_3->natts);
 if (VAR_2 > (int) FUNC_1(VAR_1->t_data))
 {
  if (VAR_3 && FUNC_3(VAR_3, VAR_2 - 1)->atthasmissing)
   return 0;
  else
   return 1;
 }

 if (VAR_2 > 0)
 {
  if (FUNC_2(VAR_1))
   return 0;
  return FUNC_4(VAR_2 - 1, VAR_1->t_data->t_bits);
 }

 switch (VAR_2)
 {
  case 128:
  case 129:
  case 130:
  case 131:
  case 132:
  case 133:

   break;

  default:
   FUNC_5(VAR_0, "invalid attnum: %d", VAR_2);
 }

 return 0;
}
