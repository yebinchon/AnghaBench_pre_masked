
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;
typedef int SSL_CTX ;
typedef int DH ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int * FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(php_stream * VAR_4, SSL_CTX *VAR_5)
{
 DH *VAR_6;
 BIO* VAR_7;
 zval *VAR_8;

 VAR_8 = FUNC_10(FUNC_5(VAR_4), "ssl", "dh_param");
 if (VAR_8 == ((void*)0)) {






  return VAR_3;
 }

 if (!FUNC_11(VAR_8)) {
  return VAR_1;
 }

 VAR_7 = FUNC_1(FUNC_8(VAR_8), FUNC_4(VAR_2));

 if (VAR_7 == ((void*)0)) {
  FUNC_9(((void*)0), VAR_0, "invalid dh_param");
  return VAR_1;
 }

 VAR_6 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0));
 FUNC_0(VAR_7);

 if (VAR_6 == ((void*)0)) {
  FUNC_9(((void*)0), VAR_0, "failed reading DH params");
  return VAR_1;
 }

 if (FUNC_7(VAR_5, VAR_6) < 0) {
  FUNC_9(((void*)0), VAR_0, "failed assigning DH params");
  FUNC_2(VAR_6);
  return VAR_1;
 }

 FUNC_2(VAR_6);

 return VAR_3;
}
