
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_ulong ;
typedef int php_conv_err_t ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int const*,scalar_t__*,char*,size_t) ;

__attribute__((used)) static int FUNC_1(const HashTable *VAR_1, unsigned int *VAR_2, char *VAR_3, size_t VAR_4)
{
 zend_ulong VAR_5;
 php_conv_err_t VAR_6;

 *VAR_2 = 0;

 if ((VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_3, VAR_4)) == VAR_0) {
  *VAR_2 = (unsigned int)VAR_5;
 }
 return VAR_6;
}
