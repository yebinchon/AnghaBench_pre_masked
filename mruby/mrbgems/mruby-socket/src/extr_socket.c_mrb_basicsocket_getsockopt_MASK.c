
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int opt ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int,int,int,char*,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,char*,int,int ,int ,int ,int ) ;
 int FUNC_5 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  char VAR_2[8];
  int VAR_3;
  mrb_int VAR_4, VAR_5, VAR_6;
  mrb_value VAR_7, VAR_8;
  socklen_t VAR_9;

  FUNC_5(VAR_0, "ii", &VAR_5, &VAR_6);
  VAR_3 = FUNC_11(VAR_0, VAR_1);
  VAR_9 = sizeof(VAR_2);
  if (FUNC_0(VAR_3, (int)VAR_5, (int)VAR_6, VAR_2, &VAR_9) == -1)
    FUNC_9(VAR_0, "getsockopt");
  VAR_7 = FUNC_2(VAR_0, FUNC_7(FUNC_1(VAR_0, "Socket")), FUNC_6(VAR_0, "Option"));
  VAR_4 = FUNC_10(VAR_3);
  VAR_8 = FUNC_8(VAR_0, VAR_2, VAR_9);
  return FUNC_4(VAR_0, VAR_7, "new", 4, FUNC_3(VAR_4), FUNC_3(VAR_5), FUNC_3(VAR_6), VAR_8);
}
