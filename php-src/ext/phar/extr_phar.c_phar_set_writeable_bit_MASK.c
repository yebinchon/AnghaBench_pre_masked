
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_2__ {int is_writeable; int is_data; } ;
typedef TYPE_1__ phar_archive_data ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zval *VAR_1, void *VAR_2)
{
 zend_bool VAR_3 = *(zend_bool *)VAR_2;
 phar_archive_data *VAR_4 = (phar_archive_data *)FUNC_0(VAR_1);

 if (!VAR_4->is_data) {
  VAR_4->is_writeable = !VAR_3;
 }

 return VAR_0;
}
