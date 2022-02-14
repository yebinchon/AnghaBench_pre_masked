
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int precision; } ;


 char* FUNC_0 (char*,char*,char const*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1, const char *VAR_2,
     struct printf_spec VAR_3)
{





 if (VAR_3.precision == -1)
  VAR_3.precision = 2 * sizeof(void *);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
