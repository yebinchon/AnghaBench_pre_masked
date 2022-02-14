
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (void const*) ;
 char* FUNC_1 (char*,char*,char const*,struct printf_spec) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, char *VAR_2, const void *VAR_3,
    struct printf_spec VAR_4)
{
 const char *VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  *VAR_1 = FUNC_1(*VAR_1, VAR_2, VAR_5, VAR_4);
  return -VAR_0;
 }

 return 0;
}
