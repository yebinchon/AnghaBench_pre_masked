
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr*,int ,scalar_t__,int ,scalar_t__,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,char*,scalar_t__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_15(mrb_state *VAR_3, mrb_value VAR_4)
{
  mrb_int VAR_5;
  mrb_value VAR_6, VAR_7, VAR_8, VAR_9;
  int VAR_10;

  VAR_5 = 0;
  FUNC_6(VAR_3, "|i", &VAR_5);
  VAR_7 = FUNC_11(VAR_3, VAR_1);
  VAR_9 = FUNC_11(VAR_3, VAR_2);

  VAR_8 = FUNC_8(VAR_3, VAR_4, FUNC_7(VAR_3, "@sockaddr"));
  if (!FUNC_13(VAR_8)) {
    FUNC_9(VAR_3, VAR_0, "invalid sockaddr");
  }
  VAR_10 = FUNC_3((struct sockaddr *)FUNC_1(VAR_8), (socklen_t)FUNC_0(VAR_8), FUNC_1(VAR_7), VAR_1, FUNC_1(VAR_9), VAR_2, (int)VAR_5);
  if (VAR_10) {
    FUNC_10(VAR_3, VAR_0, "getnameinfo: %s", FUNC_2(VAR_10));
  }
  VAR_6 = FUNC_4(VAR_3, 2);
  FUNC_12(VAR_3, VAR_7, FUNC_14(FUNC_1(VAR_7)));
  FUNC_5(VAR_3, VAR_6, VAR_7);
  FUNC_12(VAR_3, VAR_9, FUNC_14(FUNC_1(VAR_9)));
  FUNC_5(VAR_3, VAR_6, VAR_9);
  return VAR_6;
}
