
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
typedef scalar_t__ XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_3__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_6(HeapTupleHeader VAR_0, Buffer VAR_1,
   uint16 VAR_2, TransactionId VAR_3)
{
 if (FUNC_4(VAR_3))
 {

  XLogRecPtr VAR_4 = FUNC_3(VAR_3);

  if (FUNC_1(VAR_1) && FUNC_5(VAR_4) &&
   FUNC_0(VAR_1) < VAR_4)
  {

   return;
  }
 }

 VAR_0->t_infomask |= VAR_2;
 FUNC_2(VAR_1, 1);
}
