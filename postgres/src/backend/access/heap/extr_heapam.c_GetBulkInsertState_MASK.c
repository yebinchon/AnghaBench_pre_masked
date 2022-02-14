
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_buf; int strategy; } ;
typedef int BulkInsertStateData ;
typedef TYPE_1__* BulkInsertState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

BulkInsertState
FUNC_2(void)
{
 BulkInsertState VAR_2;

 VAR_2 = (BulkInsertState) FUNC_1(sizeof(BulkInsertStateData));
 VAR_2->strategy = FUNC_0(VAR_0);
 VAR_2->current_buf = VAR_1;
 return VAR_2;
}
