
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int HashTable ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int,int *) ;

__attribute__((used)) static void FUNC_5(HashTable *VAR_0)
{
 if (FUNC_3(VAR_0, "HTTP_PROXY", sizeof("HTTP_PROXY")-1)) {
  char *VAR_1 = FUNC_1("HTTP_PROXY");

  if (!VAR_1) {
   FUNC_2(VAR_0, "HTTP_PROXY", sizeof("HTTP_PROXY")-1);
  } else {
   zval VAR_2;
   FUNC_0(&VAR_2, VAR_1);
   FUNC_4(VAR_0, "HTTP_PROXY", sizeof("HTTP_PROXY")-1, &VAR_2);
  }
 }
}
