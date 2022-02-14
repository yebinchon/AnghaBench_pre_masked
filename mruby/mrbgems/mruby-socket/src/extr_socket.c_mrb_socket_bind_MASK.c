
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,struct sockaddr*,int ) ;
 int FUNC_3 (int *,char*,scalar_t__*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_int VAR_3;

  FUNC_3(VAR_0, "iS", &VAR_3, &VAR_2);
  if (FUNC_2((int)VAR_3, (struct sockaddr *)FUNC_1(VAR_2), (socklen_t)FUNC_0(VAR_2)) == -1) {
    FUNC_5(VAR_0, "bind");
  }
  return FUNC_4();
}
