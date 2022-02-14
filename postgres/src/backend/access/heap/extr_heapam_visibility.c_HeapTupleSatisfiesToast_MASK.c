
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_10__ {scalar_t__ t_tableOid; int t_self; TYPE_1__* t_data; } ;
struct TYPE_9__ {int t_infomask; } ;
typedef int Snapshot ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static bool
FUNC_11(HeapTuple VAR_6, Snapshot VAR_7,
      Buffer VAR_8)
{
 HeapTupleHeader VAR_9 = VAR_6->t_data;

 FUNC_0(FUNC_5(&VAR_6->t_self));
 FUNC_0(VAR_6->t_tableOid != VAR_4);

 if (!FUNC_3(VAR_9))
 {
  if (FUNC_4(VAR_9))
   return 0;


  if (VAR_9->t_infomask & VAR_1)
  {
   TransactionId VAR_10 = FUNC_2(VAR_9);

   if (FUNC_8(VAR_10))
    return 0;
   if (!FUNC_9(VAR_10))
   {
    if (FUNC_7(VAR_10))
    {
     FUNC_6(VAR_9, VAR_8, VAR_3,
        VAR_5);
     return 0;
    }
    FUNC_6(VAR_9, VAR_8, VAR_2,
       VAR_5);
   }
  }

  else if (VAR_9->t_infomask & VAR_0)
  {
   TransactionId VAR_11 = FUNC_2(VAR_9);

   if (!FUNC_8(VAR_11))
   {
    if (FUNC_9(VAR_11))
     return 0;
    if (FUNC_7(VAR_11))
     FUNC_6(VAR_9, VAR_8, VAR_2,
        VAR_5);
    else
    {
     FUNC_6(VAR_9, VAR_8, VAR_3,
        VAR_5);
     return 0;
    }
   }
  }






  else if (!FUNC_10(FUNC_1(VAR_9)))
   return 0;
 }


 return 1;
}
