
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fsize_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,scalar_t__,int ,int) ;
 int FUNC_8 (int ,scalar_t__,int ,int,struct sockaddr const*,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1)
{
  ssize_t VAR_2;
  mrb_int VAR_3;
  mrb_value VAR_4, VAR_5;

  VAR_4 = FUNC_5();
  FUNC_3(VAR_0, "Si|S", &VAR_5, &VAR_3, &VAR_4);
  if (FUNC_4(VAR_4)) {
    VAR_2 = FUNC_7(FUNC_9(VAR_0, VAR_1), FUNC_1(VAR_5), (fsize_t)FUNC_0(VAR_5), (int)VAR_3);
  } else {
    VAR_2 = FUNC_8(FUNC_9(VAR_0, VAR_1), FUNC_1(VAR_5), (fsize_t)FUNC_0(VAR_5), (int)VAR_3, (const struct sockaddr*)FUNC_1(VAR_4), (fsize_t)FUNC_0(VAR_4));
  }
  if (VAR_2 == -1)
    FUNC_6(VAR_0, "send");
  return FUNC_2((mrb_int)VAR_2);
}
