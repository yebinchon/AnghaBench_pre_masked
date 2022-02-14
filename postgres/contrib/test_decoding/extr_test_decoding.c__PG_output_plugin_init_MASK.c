
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int message_cb; int shutdown_cb; int filter_by_origin_cb; int commit_cb; int truncate_cb; int change_cb; int begin_cb; int startup_cb; } ;
typedef TYPE_1__ OutputPluginCallbacks ;


 int FUNC_0 (void (*) (TYPE_1__*),int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_1(OutputPluginCallbacks *VAR_9)
{
 FUNC_0(&FUNC_1, VAR_0);

 VAR_9->startup_cb = VAR_7;
 VAR_9->begin_cb = VAR_1;
 VAR_9->change_cb = VAR_2;
 VAR_9->truncate_cb = VAR_8;
 VAR_9->commit_cb = VAR_3;
 VAR_9->filter_by_origin_cb = VAR_4;
 VAR_9->shutdown_cb = VAR_6;
 VAR_9->message_cb = VAR_5;
}
