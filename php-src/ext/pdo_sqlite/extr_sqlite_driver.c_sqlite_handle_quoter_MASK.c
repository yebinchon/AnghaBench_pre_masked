
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdo_dbh_t ;
typedef enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;


 char* FUNC_0 (int,size_t,int) ;
 int FUNC_1 (int,char*,char*,char const*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_0, const char *VAR_1, size_t VAR_2, char **VAR_3, size_t *VAR_4, enum pdo_param_type VAR_5 )
{
 *VAR_3 = FUNC_0(2, VAR_2, 3);
 FUNC_1(2*VAR_2 + 3, *VAR_3, "'%q'", VAR_1);
 *VAR_4 = FUNC_2(*VAR_3);
 return 1;
}
