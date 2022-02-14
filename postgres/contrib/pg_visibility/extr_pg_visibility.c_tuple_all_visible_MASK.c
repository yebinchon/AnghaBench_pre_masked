
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {int t_data; } ;
typedef TYPE_1__* HeapTuple ;
typedef scalar_t__ HTSV_Result ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(HeapTuple VAR_1, TransactionId VAR_2, Buffer VAR_3)
{
 HTSV_Result VAR_4;
 TransactionId VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0)
  return 0;
 VAR_5 = FUNC_0(VAR_1->t_data);
 if (!FUNC_2(VAR_5, VAR_2))
  return 0;

 return 1;
}
