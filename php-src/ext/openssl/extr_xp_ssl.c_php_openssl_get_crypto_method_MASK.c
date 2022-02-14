
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;
typedef int php_stream_context ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static zend_long FUNC_2(
  php_stream_context *VAR_1, zend_long VAR_2)
{
 zval *VAR_3;

 if (VAR_1 && (VAR_3 = FUNC_0(VAR_1, "ssl", "crypto_method")) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_3);
  VAR_2 |= VAR_0;
 }

 return VAR_2;
}
