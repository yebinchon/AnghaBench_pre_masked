
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int virtual_dirs; } ;
typedef TYPE_1__ phar_archive_data ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (char*,char,size_t) ;
 int * FUNC_3 (char*,size_t,int ) ;
 int * FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(phar_archive_data *VAR_1, char *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 zend_string *VAR_5;
 zval *VAR_6;

 while ((VAR_4 = FUNC_2(VAR_2, '/', VAR_3))) {
  VAR_3 = VAR_4 - VAR_2;
  if (!VAR_3) {
   break;
  }
  if (FUNC_0(&VAR_1->virtual_dirs) & VAR_0) {
   VAR_5 = FUNC_4(VAR_2, VAR_3, 1);
  } else {
   VAR_5 = FUNC_3(VAR_2, VAR_3, 0);
  }
  VAR_6 = FUNC_1(&VAR_1->virtual_dirs, VAR_5);
  FUNC_5(VAR_5);
  if (VAR_6 == ((void*)0)) {
   break;
  }
 }
}
