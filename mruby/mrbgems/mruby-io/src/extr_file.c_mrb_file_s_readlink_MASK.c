
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char**) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int *,size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,char*,size_t) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*,int) ;
 int FUNC_13 (char*,char*,size_t) ;

__attribute__((used)) static mrb_value
FUNC_14(mrb_state *VAR_1, mrb_value VAR_2) {




  char *VAR_3, *VAR_4, *VAR_5;
  size_t VAR_6 = 100;
  ssize_t VAR_7;
  mrb_value VAR_8;
  int VAR_9 = FUNC_2(VAR_1);

  FUNC_3(VAR_1, "z", &VAR_3);
  VAR_5 = FUNC_5(VAR_3, -1);

  VAR_4 = (char *)FUNC_6(VAR_1, VAR_6);
  while ((VAR_7 = FUNC_13(VAR_5, VAR_4, VAR_6)) == (ssize_t)VAR_6 && VAR_7 != -1) {
    VAR_6 *= 2;
    VAR_4 = (char *)FUNC_9(VAR_1, VAR_4, VAR_6);
  }
  FUNC_4(VAR_5);
  if (VAR_7 == -1) {
    FUNC_0(VAR_1, VAR_4);
    FUNC_11(VAR_1, VAR_3);
  }
  VAR_5 = FUNC_12(VAR_4, -1);
  VAR_8 = FUNC_10(VAR_1, VAR_5, VAR_7);
  FUNC_4(VAR_5);
  FUNC_0(VAR_1, VAR_4);

  FUNC_1(VAR_1, VAR_9);
  return VAR_8;

}
