
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_off_t ;
typedef int zend_long ;
typedef int php_stream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(php_stream * VAR_1)
{
 zend_off_t VAR_2 = ((unsigned int)FUNC_0(VAR_1));

 if (VAR_2 < 2) {
  return 0;
 }
 VAR_2 = VAR_2 - 2;
 FUNC_1(VAR_1, (zend_long)VAR_2, VAR_0);
 return 1;
}
