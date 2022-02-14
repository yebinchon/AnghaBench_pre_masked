
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;
typedef int SSL_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (int *,int ) ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_5 ;
 int * FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(php_stream *VAR_6, SSL_CTX *VAR_7)
{
 zval *VAR_8;
 long VAR_9 = FUNC_1(VAR_7);
 FUNC_3(VAR_7, VAR_5);


 if (FUNC_7(FUNC_0(VAR_6), "ssl", "rsa_key_size") != ((void*)0)) {
  FUNC_4(((void*)0), VAR_0, "rsa_key_size context option has been removed");
 }

 FUNC_5(VAR_6, VAR_7);
 VAR_8 = FUNC_7(FUNC_0(VAR_6), "ssl", "single_dh_use");
 if (VAR_8 == ((void*)0) || FUNC_8(VAR_8)) {
  VAR_9 |= VAR_3;
 }

 VAR_8 = FUNC_7(FUNC_0(VAR_6), "ssl", "honor_cipher_order");
 if (VAR_8 == ((void*)0) || FUNC_8(VAR_8)) {
  VAR_9 |= VAR_2;
 }

 FUNC_2(VAR_7, VAR_9);

 return VAR_4;
}
