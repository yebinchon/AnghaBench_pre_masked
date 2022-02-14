
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current_buf; int strategy; } ;
typedef TYPE_1__* BulkInsertState ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(BulkInsertState VAR_1)
{
 if (VAR_1->current_buf != VAR_0)
  FUNC_1(VAR_1->current_buf);
 FUNC_0(VAR_1->strategy);
 FUNC_2(VAR_1);
}
