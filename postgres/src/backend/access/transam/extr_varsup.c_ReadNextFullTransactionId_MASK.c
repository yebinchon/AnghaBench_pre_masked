
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nextFullXid; } ;
typedef int FullTransactionId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

FullTransactionId
FUNC_2(void)
{
 FullTransactionId VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = VAR_1->nextFullXid;
 FUNC_1(VAR_2);

 return VAR_3;
}
