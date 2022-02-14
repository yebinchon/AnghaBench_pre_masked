
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static const char *FUNC_1(void)
{
 char *VAR_0 = FUNC_0("KCONFIG_AUTOCONFIG");

 return VAR_0 ? VAR_0 : "include/config/auto.conf";
}
