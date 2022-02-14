
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current_buf; } ;
typedef TYPE_1__* BulkInsertState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void
FUNC_1(BulkInsertState VAR_1)
{
 if (VAR_1->current_buf != VAR_0)
  FUNC_0(VAR_1->current_buf);
 VAR_1->current_buf = VAR_0;
}
