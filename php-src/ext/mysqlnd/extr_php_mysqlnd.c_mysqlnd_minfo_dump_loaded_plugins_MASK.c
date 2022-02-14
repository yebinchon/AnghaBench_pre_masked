
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct st_mysqlnd_plugin_header {scalar_t__ plugin_name; } ;
struct TYPE_4__ {scalar_t__ s; } ;
typedef TYPE_1__ smart_str ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(zval *VAR_1, void * VAR_2)
{
 smart_str * VAR_3 = (smart_str *) VAR_2;
 struct st_mysqlnd_plugin_header * VAR_4 = (struct st_mysqlnd_plugin_header *)FUNC_0(VAR_1);
 if (VAR_4->plugin_name) {
  if (VAR_3->s) {
   FUNC_1(VAR_3, ',');
  }
  FUNC_2(VAR_3, VAR_4->plugin_name);
 }
 return VAR_0;
}
