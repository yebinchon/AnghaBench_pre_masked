
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * commit_cb; int * change_cb; int * begin_cb; } ;
typedef TYPE_1__ OutputPluginCallbacks ;
typedef int (* LogicalOutputPluginInit ) (TYPE_1__*) ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int,int *) ;

__attribute__((used)) static void
FUNC_2(OutputPluginCallbacks *VAR_1, char *VAR_2)
{
 LogicalOutputPluginInit VAR_3;

 VAR_3 = (LogicalOutputPluginInit)
  FUNC_1(VAR_2, "_PG_output_plugin_init", 0, ((void*)0));

 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "output plugins have to declare the _PG_output_plugin_init symbol");


 VAR_3(VAR_1);

 if (VAR_1->begin_cb == ((void*)0))
  FUNC_0(VAR_0, "output plugins have to register a begin callback");
 if (VAR_1->change_cb == ((void*)0))
  FUNC_0(VAR_0, "output plugins have to register a change callback");
 if (VAR_1->commit_cb == ((void*)0))
  FUNC_0(VAR_0, "output plugins have to register a commit callback");
}
