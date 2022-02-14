
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_10__ {int t_infomask; } ;
struct TYPE_9__ {void* xid; } ;
typedef TYPE_1__ MultiXactMember ;
typedef void* MultiXactId ;
typedef TYPE_2__* HeapTupleHeader ;
typedef int Buffer ;


 int FUNC_0 (void*,TYPE_1__**,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 void* FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*,void*) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*,void*) ;
 int FUNC_10 (TYPE_1__*) ;

bool
FUNC_11(HeapTupleHeader VAR_2, TransactionId VAR_3,
      MultiXactId VAR_4, Buffer VAR_5)
{
 TransactionId VAR_6;

 VAR_6 = FUNC_4(VAR_2);
 if (FUNC_8(VAR_6) &&
  FUNC_9(VAR_6, VAR_3))
  return 1;






 if (VAR_2->t_infomask & VAR_1)
 {
  MultiXactId VAR_7;

  VAR_7 = FUNC_3(VAR_2);
  if (!FUNC_6(VAR_7))
  {

   ;
  }
  else if (FUNC_1(VAR_2->t_infomask))
   return 1;
  else if (FUNC_7(VAR_7, VAR_4))
   return 1;
  else
  {
   MultiXactMember *VAR_8;
   int VAR_9;
   int VAR_10;



   VAR_9 = FUNC_0(VAR_7, &VAR_8, 0,
            FUNC_2(VAR_2->t_infomask));

   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   {
    if (FUNC_9(VAR_8[VAR_10].xid, VAR_3))
    {
     FUNC_10(VAR_8);
     return 1;
    }
   }
   if (VAR_9 > 0)
    FUNC_10(VAR_8);
  }
 }
 else
 {
  VAR_6 = FUNC_3(VAR_2);
  if (FUNC_8(VAR_6) &&
   FUNC_9(VAR_6, VAR_3))
   return 1;
 }

 if (VAR_2->t_infomask & VAR_0)
 {
  VAR_6 = FUNC_5(VAR_2);
  if (FUNC_8(VAR_6) &&
   FUNC_9(VAR_6, VAR_3))
   return 1;
 }

 return 0;
}
