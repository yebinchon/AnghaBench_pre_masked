
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xact_wrote_changes; scalar_t__ skip_empty_xacts; } ;
typedef TYPE_1__ TestDecodingData ;
struct TYPE_7__ {TYPE_1__* output_plugin_private; } ;
typedef int ReorderBufferTXN ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int *,int) ;

__attribute__((used)) static void
FUNC_1(LogicalDecodingContext *VAR_0, ReorderBufferTXN *VAR_1)
{
 TestDecodingData *VAR_2 = VAR_0->output_plugin_private;

 VAR_2->xact_wrote_changes = 0;
 if (VAR_2->skip_empty_xacts)
  return;

 FUNC_0(VAR_0, VAR_2, VAR_1, 1);
}
