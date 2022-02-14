
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_socket ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int*) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int const*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const HashTable *VAR_1, const char *VAR_2,
 php_socket *VAR_3, unsigned int *VAR_4)
{
 zval *VAR_5;

 if ((VAR_5 = FUNC_2(VAR_1, VAR_2, FUNC_1(VAR_2))) == ((void*)0)) {
  *VAR_4 = 0;
  return VAR_0;
 }

 return FUNC_0(VAR_5, VAR_4);
}
