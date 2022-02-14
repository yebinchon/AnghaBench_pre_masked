
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;
typedef int SSL_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int * FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(php_stream *VAR_5, SSL_CTX *VAR_6)
{
 zval *VAR_7;
 int VAR_8;
 EC_KEY *VAR_9;

 VAR_7 = FUNC_8(FUNC_3(VAR_5), "ssl", "ecdh_curve");
 if (VAR_7 == ((void*)0)) {




  VAR_8 = VAR_2;

 } else {
  if (!FUNC_9(VAR_7)) {
   return VAR_1;
  }

  VAR_8 = FUNC_2(FUNC_6(VAR_7));
  if (VAR_8 == VAR_3) {
   FUNC_7(((void*)0), VAR_0, "invalid ecdh_curve specified");
   return VAR_1;
  }
 }

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_7(((void*)0), VAR_0, "failed generating ECDH curve");
  return VAR_1;
 }

 FUNC_5(VAR_6, VAR_9);
 FUNC_0(VAR_9);

 return VAR_4;
}
