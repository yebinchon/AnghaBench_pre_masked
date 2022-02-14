
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;

void
FUNC_7(mrb_state* VAR_0)
{
  mrb_value VAR_1;
  VAR_1 = FUNC_6(VAR_0, FUNC_2(VAR_0, "Addrinfo"), FUNC_5(VAR_0, "_lastai"));
  if (FUNC_4(VAR_1)) {
    FUNC_1((struct addrinfo*)FUNC_3(VAR_1));
  }



}
