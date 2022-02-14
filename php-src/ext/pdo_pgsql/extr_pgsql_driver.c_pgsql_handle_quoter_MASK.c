
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;



 unsigned char* FUNC_0 (int ,unsigned char*,size_t,size_t*) ;
 size_t FUNC_1 (int ,char*,char const*,size_t,int *) ;
 int FUNC_2 (unsigned char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,unsigned char*,size_t) ;
 char* FUNC_5 (int,size_t,int) ;

__attribute__((used)) static int FUNC_6(pdo_dbh_t *VAR_0, const char *VAR_1, size_t VAR_2, char **VAR_3, size_t *VAR_4, enum pdo_param_type VAR_5)
{
 unsigned char *VAR_6;
 pdo_pgsql_db_handle *VAR_7 = (pdo_pgsql_db_handle *)VAR_0->driver_data;
 size_t VAR_8;

 switch (VAR_5) {
  case 128:

   VAR_6 = FUNC_0(VAR_7->server, (unsigned char *)VAR_1, VAR_2, &VAR_8);
   *VAR_4 = VAR_8 + 1;
   *VAR_3 = FUNC_3(*VAR_4 + 1);
   FUNC_4((*VAR_3)+1, VAR_6, *VAR_4-2);
   (*VAR_3)[0] = '\'';
   (*VAR_3)[*VAR_4-1] = '\'';
   (*VAR_3)[*VAR_4] = '\0';
   FUNC_2(VAR_6);
   break;
  default:
   *VAR_3 = FUNC_5(2, VAR_2, 3);
   (*VAR_3)[0] = '\'';
   *VAR_4 = FUNC_1(VAR_7->server, *VAR_3 + 1, VAR_1, VAR_2, ((void*)0));
   (*VAR_3)[*VAR_4 + 1] = '\'';
   (*VAR_3)[*VAR_4 + 2] = '\0';
   *VAR_4 += 2;
 }
 return 1;
}
