
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ only_local; } ;
typedef TYPE_1__ TestDecodingData ;
struct TYPE_5__ {TYPE_1__* output_plugin_private; } ;
typedef scalar_t__ RepOriginId ;
typedef TYPE_2__ LogicalDecodingContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(LogicalDecodingContext *VAR_1,
     RepOriginId VAR_2)
{
 TestDecodingData *VAR_3 = VAR_1->output_plugin_private;

 if (VAR_3->only_local && VAR_2 != VAR_0)
  return 1;
 return 0;
}
