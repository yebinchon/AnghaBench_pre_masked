
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;


 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 php_stream *VAR_4 = (php_stream *)VAR_3;
 zval *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);


 FUNC_0("passphrase", VAR_6);

 if (VAR_6) {
  if (FUNC_1(VAR_5) < (size_t)VAR_1 - 1) {
   FUNC_3(VAR_0, FUNC_2(VAR_5), FUNC_1(VAR_5)+1);
   return (int)FUNC_1(VAR_5);
  }
 }
 return 0;
}
