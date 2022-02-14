
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_ops {int ah_unwrap; int ah_wrap; int ah_destroy; int ah_refresh; int ah_validate; int ah_marshal; int * ah_nextverf; } ;
typedef int mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct auth_ops *
FUNC_2()
{
 static struct auth_ops VAR_7;
 extern mutex_t VAR_8;



 FUNC_0(&VAR_8);
 if (VAR_7.ah_nextverf == ((void*)0)) {
  VAR_7.ah_nextverf = VAR_5;
  VAR_7.ah_marshal = VAR_1;
  VAR_7.ah_validate = VAR_4;
  VAR_7.ah_refresh = VAR_2;
  VAR_7.ah_destroy = VAR_0;
        VAR_7.ah_wrap = VAR_6;
        VAR_7.ah_unwrap = VAR_3;
 }
 FUNC_1(&VAR_8);
 return (&VAR_7);
}
