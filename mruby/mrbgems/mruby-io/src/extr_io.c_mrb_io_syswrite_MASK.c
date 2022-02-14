
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd2; int fd; int writable; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int fsize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mrb_io* FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int ,int ) ;

mrb_value
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct mrb_io *VAR_3;
  mrb_value VAR_4, VAR_5;
  int VAR_6, VAR_7;

  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (! VAR_3->writable) {
    FUNC_5(VAR_1, VAR_0, "not opened for writing");
  }

  FUNC_4(VAR_1, "S", &VAR_4);
  VAR_5 = VAR_4;

  if (VAR_3->fd2 == -1) {
    VAR_6 = VAR_3->fd;
  } else {
    VAR_6 = VAR_3->fd2;
  }
  VAR_7 = FUNC_7(VAR_6, FUNC_1(VAR_5), (fsize_t)FUNC_0(VAR_5));
  if (VAR_7 == -1) {
    FUNC_6(VAR_1, 0);
  }

  return FUNC_3(VAR_7);
}
