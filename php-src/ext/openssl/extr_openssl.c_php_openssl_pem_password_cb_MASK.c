
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct php_openssl_pem_password {int len; int * key; } ;


 int FUNC_0 (char*,int *,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 struct php_openssl_pem_password *VAR_4 = VAR_3;

 if (VAR_4 == ((void*)0) || VAR_4->key == ((void*)0)) {
  return -1;
 }

 VAR_1 = (VAR_4->len > VAR_1) ? VAR_1 : VAR_4->len;
 FUNC_0(VAR_0, VAR_4->key, VAR_1);

 return VAR_1;
}
