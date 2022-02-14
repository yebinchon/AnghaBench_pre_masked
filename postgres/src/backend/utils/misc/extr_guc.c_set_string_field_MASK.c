
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct config_string*,char*) ;

__attribute__((used)) static void
FUNC_2(struct config_string *VAR_0, char **VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_1;


 *VAR_1 = VAR_2;


 if (VAR_3 && !FUNC_1(VAR_0, VAR_3))
  FUNC_0(VAR_3);
}
