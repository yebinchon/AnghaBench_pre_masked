
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_8__ {int * s; int member_0; } ;
typedef TYPE_1__ smart_str ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(zval* VAR_1, smart_str* VAR_2)
{
 zval *VAR_3, *VAR_4;

 if ((VAR_3 = FUNC_12(FUNC_2(VAR_1), "_proxy_login", sizeof("_proxy_login")-1)) != ((void*)0) &&
     FUNC_5(VAR_3) == VAR_0) {
  zend_string *VAR_5;
  smart_str VAR_6 = {0};

  FUNC_10(&VAR_6, FUNC_4(VAR_3), FUNC_3(VAR_3));
  FUNC_9(&VAR_6, ':');
  if ((VAR_4 = FUNC_12(FUNC_2(VAR_1), "_proxy_password", sizeof("_proxy_password")-1)) != ((void*)0) &&
      FUNC_5(VAR_4) == VAR_0) {
   FUNC_10(&VAR_6, FUNC_4(VAR_4), FUNC_3(VAR_4));
  }
  FUNC_7(&VAR_6);
  VAR_5 = FUNC_6((unsigned char*)FUNC_1(VAR_6.s), FUNC_0(VAR_6.s));
  FUNC_8(VAR_2, "Proxy-Authorization: Basic ");
  FUNC_10(VAR_2, (char*)FUNC_1(VAR_5), FUNC_0(VAR_5));
  FUNC_8(VAR_2, "\r\n");
  FUNC_13(VAR_5, 0);
  FUNC_11(&VAR_6);
  return 1;
 }
 return 0;
}
