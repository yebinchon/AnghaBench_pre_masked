
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_ops {int ah_destroy; int ah_refresh; int ah_validate; int ah_marshal; int * ah_nextverf; } ;
typedef int mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct auth_ops *
FUNC_2(void)
{
 static struct auth_ops VAR_5;
 extern mutex_t VAR_6;



 FUNC_0(&VAR_6);
 if (VAR_5.ah_nextverf == ((void*)0)) {
  VAR_5.ah_nextverf = VAR_2;
  VAR_5.ah_marshal = VAR_1;
  VAR_5.ah_validate = VAR_4;
  VAR_5.ah_refresh = VAR_3;
  VAR_5.ah_destroy = VAR_0;
        }
 FUNC_1(&VAR_6);
 return (&VAR_5);
}
