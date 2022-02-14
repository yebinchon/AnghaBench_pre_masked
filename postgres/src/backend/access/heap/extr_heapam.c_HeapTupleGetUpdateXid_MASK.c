
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

TransactionId
FUNC_2(HeapTupleHeader VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0),
           VAR_0->t_infomask);
}
