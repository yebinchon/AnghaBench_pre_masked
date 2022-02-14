
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ auth_digest; scalar_t__ auth_password; scalar_t__ auth_user; } ;
struct TYPE_3__ {int (* register_server_variables ) (int *) ;} ;
typedef int HashTable ;


 int * FUNC_0 (int ) ;
 TYPE_2__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (char*,int,int *,int *) ;
 int VAR_2 ;
 int FUNC_9 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static inline void FUNC_13(void)
{
 zval VAR_4;
 zval *VAR_5 = &FUNC_0(VAR_1)[VAR_0];
 HashTable *VAR_6;

 FUNC_12(VAR_5);
 FUNC_7(VAR_5);


 if (VAR_3.register_server_variables) {
  VAR_3.register_server_variables(VAR_5);
 }
 VAR_6 = FUNC_5(VAR_5);


 if (FUNC_1(VAR_2).auth_user) {
  FUNC_4(&VAR_4, FUNC_1(VAR_2).auth_user);
  FUNC_8("PHP_AUTH_USER", sizeof("PHP_AUTH_USER")-1, &VAR_4, VAR_6);
 }
 if (FUNC_1(VAR_2).auth_password) {
  FUNC_4(&VAR_4, FUNC_1(VAR_2).auth_password);
  FUNC_8("PHP_AUTH_PW", sizeof("PHP_AUTH_PW")-1, &VAR_4, VAR_6);
 }
 if (FUNC_1(VAR_2).auth_digest) {
  FUNC_4(&VAR_4, FUNC_1(VAR_2).auth_digest);
  FUNC_8("PHP_AUTH_DIGEST", sizeof("PHP_AUTH_DIGEST")-1, &VAR_4, VAR_6);
 }


 FUNC_2(&VAR_4, FUNC_9());
 FUNC_8("REQUEST_TIME_FLOAT", sizeof("REQUEST_TIME_FLOAT")-1, &VAR_4, VAR_6);
 FUNC_3(&VAR_4, FUNC_11(FUNC_6(VAR_4)));
 FUNC_8("REQUEST_TIME", sizeof("REQUEST_TIME")-1, &VAR_4, VAR_6);
}
