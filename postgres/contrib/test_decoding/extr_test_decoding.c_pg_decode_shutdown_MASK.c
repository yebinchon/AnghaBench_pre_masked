
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context; } ;
typedef TYPE_1__ TestDecodingData ;
struct TYPE_5__ {TYPE_1__* output_plugin_private; } ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(LogicalDecodingContext *VAR_0)
{
 TestDecodingData *VAR_1 = VAR_0->output_plugin_private;


 FUNC_0(VAR_1->context);
}
