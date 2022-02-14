
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int socklen_t ;
typedef int php_socket ;
typedef int php_sockaddr_storage ;
typedef int HashTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int const*,char const*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int **) ;

__attribute__((used)) static int FUNC_7(const HashTable *VAR_3, const char *VAR_4,
 php_socket *VAR_5, php_sockaddr_storage *VAR_6, socklen_t *VAR_7)
{
 zval *VAR_8;
 zend_string *VAR_9, *VAR_10;

 if ((VAR_8 = FUNC_4(VAR_3, VAR_4, FUNC_3(VAR_4))) == ((void*)0)) {
  FUNC_1(((void*)0), VAR_0, "no key \"%s\" passed in optval", VAR_4);
  return VAR_1;
 }
 VAR_9 = FUNC_6(VAR_8, &VAR_10);
 if (!FUNC_2(VAR_6, VAR_7, FUNC_0(VAR_9), VAR_5)) {
  FUNC_5(VAR_10);
  return VAR_1;
 }
 FUNC_5(VAR_10);
 return VAR_2;
}
