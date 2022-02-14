
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_4__ {int server; scalar_t__ assume_national_character_set_strings; } ;
typedef TYPE_1__ pdo_mysql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_3 (int ,char*,char const*,size_t) ;
 char* FUNC_4 (int,size_t,int) ;

__attribute__((used)) static int FUNC_5(pdo_dbh_t *VAR_2, const char *VAR_3, size_t VAR_4, char **VAR_5, size_t *VAR_6, enum pdo_param_type VAR_7 )
{
 pdo_mysql_db_handle *VAR_8 = (pdo_mysql_db_handle *)VAR_2->driver_data;
 zend_bool VAR_9 = 0;

 if (VAR_8->assume_national_character_set_strings) {
  VAR_9 = 1;
 }
 if ((VAR_7 & VAR_1) == VAR_1) {
  VAR_9 = 1;
 }
 if ((VAR_7 & VAR_0) == VAR_0) {
  VAR_9 = 0;
 }

 FUNC_0("mysql_handle_quoter");
 FUNC_1("dbh=%p", VAR_2);
 FUNC_1("unquoted=%.*s", (int)VAR_4, VAR_3);
 *VAR_5 = FUNC_4(2, VAR_4, 3 + (VAR_9 ? 1 : 0));

 if (VAR_9) {
  *VAR_6 = FUNC_3(VAR_8->server, *VAR_5 + 2, VAR_3, VAR_4);
  (*VAR_5)[0] = 'N';
  (*VAR_5)[1] = '\'';

  ++*VAR_6;
 } else {
  *VAR_6 = FUNC_3(VAR_8->server, *VAR_5 + 1, VAR_3, VAR_4);
  (*VAR_5)[0] = '\'';
 }

 (*VAR_5)[++*VAR_6] = '\'';
 (*VAR_5)[++*VAR_6] = '\0';
 FUNC_1("quoted=%.*s", (int)*VAR_6, *VAR_5);
 FUNC_2(1);
}
