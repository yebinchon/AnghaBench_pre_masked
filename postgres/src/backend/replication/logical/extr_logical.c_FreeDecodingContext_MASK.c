
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * shutdown_cb; } ;
struct TYPE_6__ {int context; int reader; int snapshot_builder; int reorder; TYPE_1__ callbacks; } ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(LogicalDecodingContext *VAR_0)
{
 if (VAR_0->callbacks.shutdown_cb != ((void*)0))
  FUNC_4(VAR_0);

 FUNC_2(VAR_0->reorder);
 FUNC_0(VAR_0->snapshot_builder);
 FUNC_3(VAR_0->reader);
 FUNC_1(VAR_0->context);
}
