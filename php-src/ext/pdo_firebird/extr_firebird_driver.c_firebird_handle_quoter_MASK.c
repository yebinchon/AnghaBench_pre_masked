
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdo_dbh_t ;
typedef enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;


 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_0, const char *VAR_1, size_t VAR_2,
 char **VAR_3, size_t *VAR_4, enum pdo_param_type VAR_5)
{
 int VAR_6 = 0;
 char const *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10;

 if (!VAR_2) {
  *VAR_4 = 2;
  *VAR_3 = FUNC_0(*VAR_4+1);
  FUNC_2(*VAR_3, "''");
  return 1;
 }



 for (VAR_7 = VAR_1; (VAR_7 = FUNC_1(VAR_7,'\'')); VAR_6++, VAR_7++);

 *VAR_4 = VAR_2 + VAR_6 + 2;
 *VAR_3 = VAR_10 = FUNC_0(*VAR_4+1);
 *VAR_10++ = '\'';


 for (VAR_8 = VAR_1; (VAR_9 = FUNC_1(VAR_8,'\'')); VAR_8 = VAR_9+1) {
  FUNC_3(VAR_10, VAR_8, VAR_9-VAR_8+1);
  VAR_10 += (VAR_9-VAR_8+1);

  *VAR_10++ = '\'';
 }


 FUNC_3(VAR_10, VAR_8, *VAR_4-(VAR_10-*VAR_3)-1);
 (*VAR_3)[*VAR_4-1] = '\'';
 (*VAR_3)[*VAR_4] = '\0';

 return 1;
}
