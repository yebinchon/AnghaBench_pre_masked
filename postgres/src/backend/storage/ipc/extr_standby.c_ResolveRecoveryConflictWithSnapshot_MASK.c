
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_3__ {int dbNode; } ;
typedef TYPE_1__ RelFileNode ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(TransactionId VAR_1, RelFileNode VAR_2)
{
 VirtualTransactionId *VAR_3;
 if (!FUNC_2(VAR_1))
  return;

 VAR_3 = FUNC_0(VAR_1,
           VAR_2.dbNode);

 FUNC_1(VAR_3,
             VAR_0);
}
