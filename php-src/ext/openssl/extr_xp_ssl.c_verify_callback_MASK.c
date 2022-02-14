
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int php_stream ;
typedef int X509_STORE_CTX ;
typedef int SSL ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(int VAR_3, X509_STORE_CTX *VAR_4)
{
 php_stream *VAR_5;
 SSL *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 zval *VAR_10;
 zend_ulong VAR_11 = VAR_0;


 VAR_9 = VAR_3;


 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = FUNC_5(VAR_4);


 VAR_6 = FUNC_6(VAR_4, FUNC_3());
 VAR_5 = (php_stream*)FUNC_2(VAR_6, FUNC_8());


 if (VAR_7 == VAR_2 &&
  FUNC_0("allow_self_signed") &&
  FUNC_9(VAR_10)
 ) {
  VAR_9 = 1;
 }


 FUNC_1("verify_depth", VAR_11);
 if ((zend_ulong)VAR_8 > VAR_11) {
  VAR_9 = 0;
  FUNC_7(VAR_4, VAR_1);
 }

 return VAR_9;
}
