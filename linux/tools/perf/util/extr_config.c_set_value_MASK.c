
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_config_item {char* value; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static int FUNC_2(struct perf_config_item *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -1;

 FUNC_1(&VAR_0->value);
 VAR_0->value = VAR_2;
 return 0;
}
