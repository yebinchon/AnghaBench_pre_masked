
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int (* plugin_shutdown ) (struct st_mysqlnd_plugin_header*) ;} ;
struct st_mysqlnd_plugin_header {TYPE_1__ m; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct st_mysqlnd_plugin_header*) ;

int
FUNC_2(zval *VAR_1)
{
 struct st_mysqlnd_plugin_header * VAR_2 = (struct st_mysqlnd_plugin_header *)FUNC_0(VAR_1);
 if (VAR_2->m.plugin_shutdown) {
  VAR_2->m.plugin_shutdown(VAR_2);
 }
 return VAR_0;
}
