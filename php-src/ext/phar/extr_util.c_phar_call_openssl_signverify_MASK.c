
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef scalar_t__ zend_off_t ;
typedef int zend_fcall_info_cache ;
struct TYPE_4__ {int param_count; int * retval; int * params; } ;
typedef TYPE_1__ zend_fcall_info ;
typedef int php_stream ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int ,size_t) ;
 int * FUNC_12 (int *,size_t,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;
 int FUNC_15 (int *,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(int VAR_2, php_stream *VAR_3, zend_off_t VAR_4, char *VAR_5, size_t VAR_6, char **VAR_7, size_t *VAR_8)
{
 zend_fcall_info VAR_9;
 zend_fcall_info_cache VAR_10;
 zval VAR_11, VAR_12[3], VAR_13;
 zend_string *VAR_14;

 FUNC_3(&VAR_13, VAR_2 ? "openssl_sign" : "openssl_verify", VAR_2 ? sizeof("openssl_sign")-1 : sizeof("openssl_verify")-1);
 FUNC_3(&VAR_12[1], *VAR_7, *VAR_8);
 FUNC_3(&VAR_12[2], VAR_5, VAR_6);
 FUNC_13(VAR_3);
 VAR_14 = FUNC_12(VAR_3, (size_t) VAR_4, 0);
 if (VAR_14) {
  FUNC_2(&VAR_12[0], VAR_14);
 } else {
  FUNC_0(&VAR_12[0]);
 }

 if ((size_t)VAR_4 != FUNC_8(VAR_12[0])) {
  FUNC_17(&VAR_12[0]);
  FUNC_17(&VAR_12[1]);
  FUNC_17(&VAR_12[2]);
  FUNC_17(&VAR_13);
  return VAR_0;
 }

 if (VAR_0 == FUNC_15(&VAR_13, 0, &VAR_9, &VAR_10, ((void*)0), ((void*)0))) {
  FUNC_17(&VAR_12[0]);
  FUNC_17(&VAR_12[1]);
  FUNC_17(&VAR_12[2]);
  FUNC_17(&VAR_13);
  return VAR_0;
 }

 VAR_9.param_count = 3;
 VAR_9.params = VAR_12;
 FUNC_5(VAR_12[0]);
 if (VAR_2) {
  FUNC_1(&VAR_12[1], &VAR_12[1]);
 } else {
  FUNC_5(VAR_12[1]);
 }
 FUNC_5(VAR_12[2]);

 VAR_9.retval = &VAR_11;

 if (VAR_0 == FUNC_14(&VAR_9, &VAR_10)) {
  FUNC_17(&VAR_12[0]);
  FUNC_16(&VAR_12[1]);
  FUNC_17(&VAR_12[2]);
  FUNC_17(&VAR_13);
  return VAR_0;
 }

 FUNC_17(&VAR_13);
 FUNC_6(VAR_12[0]);

 if (VAR_2) {
  FUNC_4(&VAR_12[1]);
 } else {
  FUNC_6(VAR_12[1]);
 }
 FUNC_6(VAR_12[2]);

 FUNC_17(&VAR_12[0]);
 FUNC_17(&VAR_12[2]);

 switch (FUNC_10(VAR_11)) {
  default:
  case 129:
   FUNC_16(&VAR_12[1]);
   if (1 == FUNC_7(VAR_11)) {
    return VAR_1;
   }
   return VAR_0;
  case 128:
   *VAR_7 = FUNC_11(FUNC_9(VAR_12[1]), FUNC_8(VAR_12[1]));
   *VAR_8 = FUNC_8(VAR_12[1]);
   FUNC_16(&VAR_12[1]);
   return VAR_1;
  case 130:
   FUNC_16(&VAR_12[1]);
   return VAR_0;
 }
}
