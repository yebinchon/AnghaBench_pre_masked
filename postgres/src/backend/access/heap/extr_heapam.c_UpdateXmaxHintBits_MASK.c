
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(HeapTupleHeader VAR_4, Buffer VAR_5, TransactionId VAR_6)
{
 FUNC_0(FUNC_5(FUNC_2(VAR_4), VAR_6));
 FUNC_0(!(VAR_4->t_infomask & VAR_2));

 if (!(VAR_4->t_infomask & (VAR_0 | VAR_1)))
 {
  if (!FUNC_1(VAR_4->t_infomask) &&
   FUNC_4(VAR_6))
   FUNC_3(VAR_4, VAR_5, VAR_0,
         VAR_6);
  else
   FUNC_3(VAR_4, VAR_5, VAR_1,
         VAR_3);
 }
}
