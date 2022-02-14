
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ last_xlog_end; int mutex; } ;
typedef TYPE_1__ FixedParallelState ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(XLogRecPtr VAR_1)
{
 FixedParallelState *VAR_2 = VAR_0;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1(&VAR_2->mutex);
 if (VAR_2->last_xlog_end < VAR_1)
  VAR_2->last_xlog_end = VAR_1;
 FUNC_2(&VAR_2->mutex);
}
