
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {int dummyBackendId; } ;
typedef TYPE_1__* GlobalTransaction ;
typedef int BackendId ;


 TYPE_1__* FUNC_0 (int ,int) ;

BackendId
FUNC_1(TransactionId VAR_0, bool VAR_1)
{
 GlobalTransaction VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->dummyBackendId;
}
