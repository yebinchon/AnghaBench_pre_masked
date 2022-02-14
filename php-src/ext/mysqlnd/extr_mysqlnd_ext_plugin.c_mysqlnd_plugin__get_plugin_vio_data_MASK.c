
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MYSQLND_VIO ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int const) ;
 int FUNC_2 (void*) ;
 unsigned int const FUNC_3 () ;

__attribute__((used)) static void **
FUNC_4(const MYSQLND_VIO * VAR_0, const unsigned int VAR_1)
{
 FUNC_0("_mysqlnd_plugin__get_plugin_vio_data");
 FUNC_1("plugin_id=%u", VAR_1);
 if (!VAR_0 || VAR_1 >= FUNC_3()) {
  return ((void*)0);
 }
 FUNC_2((void *)((char *)VAR_0 + sizeof(MYSQLND_VIO) + VAR_1 * sizeof(void *)));
}
