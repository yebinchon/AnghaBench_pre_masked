
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_4__ {scalar_t__ assume_national_character_set_strings; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef enum pdo_param_type { ____Placeholder_pdo_param_type } pdo_param_type ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t) ;

__attribute__((used)) static int FUNC_1(pdo_dbh_t *VAR_2, const char *VAR_3, size_t VAR_4, char **VAR_5, size_t *VAR_6, enum pdo_param_type VAR_7)
{
 pdo_dblib_db_handle *VAR_8 = (pdo_dblib_db_handle *)VAR_2->driver_data;
 zend_bool VAR_9 = 0;

 size_t VAR_10;
 char * VAR_11;
 *VAR_6 = 0;

 if (VAR_8->assume_national_character_set_strings) {
  VAR_9 = 1;
 }
 if ((VAR_7 & VAR_1) == VAR_1) {
  VAR_9 = 1;
 }
 if ((VAR_7 & VAR_0) == VAR_0) {
  VAR_9 = 0;
 }


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_3[VAR_10] == '\'') ++*VAR_6;
  ++*VAR_6;
 }

 *VAR_6 += 2;
 if (VAR_9) {
  ++*VAR_6;
 }
 VAR_11 = *VAR_5 = FUNC_0(*VAR_6 + 1);
 if (VAR_9) {
  *VAR_11++ = 'N';
 }
 *VAR_11++ = '\'';

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_3[VAR_10] == '\'') {
   *VAR_11++ = '\'';
   *VAR_11++ = '\'';
  } else {
   *VAR_11++ = VAR_3[VAR_10];
  }
 }
 *VAR_11++ = '\'';

 *VAR_11 = 0;

 return 1;
}
