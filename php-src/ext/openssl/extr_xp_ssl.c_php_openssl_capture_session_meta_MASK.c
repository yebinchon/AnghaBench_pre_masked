
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_array ;
typedef int SSL_CIPHER ;
typedef int SSL ;



 int FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int const*) ;
 char* FUNC_2 (int const*) ;
 int * FUNC_3 (int *) ;
 long FUNC_4 (int *) ;




 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static zend_array *FUNC_9(SSL *VAR_0)
{
 zval VAR_1;
 char *VAR_2;
 long VAR_3 = FUNC_4(VAR_0);
 const SSL_CIPHER *VAR_4 = FUNC_3(VAR_0);

 switch (VAR_3) {
  case 128:
   VAR_2 = "TLSv1";
   break;





  default: VAR_2 = "UNKNOWN";
 }

 FUNC_8(&VAR_1);
 FUNC_7(&VAR_1, "protocol", VAR_2);
 FUNC_7(&VAR_1, "cipher_name", (char *) FUNC_1(VAR_4));
 FUNC_6(&VAR_1, "cipher_bits", FUNC_0(VAR_4, ((void*)0)));
 FUNC_7(&VAR_1, "cipher_version", FUNC_2(VAR_4));

 return FUNC_5(VAR_1);
}
