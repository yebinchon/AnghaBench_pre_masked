
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd; int readable; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,scalar_t__) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int ,int ,int ) ;

mrb_value
FUNC_14(mrb_state *VAR_3, mrb_value VAR_4)
{
  struct mrb_io *VAR_5;
  mrb_value VAR_6 = FUNC_6();
  mrb_int VAR_7;
  int VAR_8;

  FUNC_4(VAR_3, "i|S", &VAR_7, &VAR_6);
  if (VAR_7 < 0) {
    FUNC_7(VAR_3, VAR_0, "negative expanding string size");
  }
  else if (VAR_7 == 0) {
    return FUNC_9(VAR_3, ((void*)0), VAR_7);
  }

  if (FUNC_5(VAR_6)) {
    VAR_6 = FUNC_9(VAR_3, ((void*)0), VAR_7);
  }

  if (FUNC_1(VAR_6) != VAR_7) {
    VAR_6 = FUNC_11(VAR_3, VAR_6, VAR_7);
  } else {
    FUNC_8(VAR_3, FUNC_0(VAR_6));
  }

  VAR_5 = (struct mrb_io *)FUNC_3(VAR_3, VAR_4);
  if (!VAR_5->readable) {
    FUNC_7(VAR_3, VAR_2, "not opened for reading");
  }
  VAR_8 = FUNC_13(VAR_5->fd, FUNC_2(VAR_6), (fsize_t)VAR_7);
  switch (VAR_8) {
    case 0:
      if (VAR_7 == 0) {
        VAR_6 = FUNC_10(VAR_3, "");
      } else {
        FUNC_7(VAR_3, VAR_1, "sysread failed: End of File");
      }
      break;
    case -1:
      FUNC_12(VAR_3, "sysread failed");
      break;
    default:
      if (FUNC_1(VAR_6) != VAR_8) {
        VAR_6 = FUNC_11(VAR_3, VAR_6, VAR_8);
      }
      break;
  }

  return VAR_6;
}
