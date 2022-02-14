
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct mrb_io {scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,struct stat*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3, struct stat *VAR_4, int VAR_5)
{
  if (FUNC_7(VAR_2, VAR_3, FUNC_3(VAR_2, "IO"))) {
    struct mrb_io *VAR_6;
    VAR_6 = (struct mrb_io *)FUNC_4(VAR_2, VAR_3, &VAR_1);

    if (VAR_6 && VAR_6->fd >= 0) {
      return FUNC_2(VAR_6->fd, VAR_4);
    }

    FUNC_8(VAR_2, VAR_0, "closed stream");
    return -1;
  }
  else {
    char *VAR_7 = FUNC_6(FUNC_1(VAR_2, VAR_3), -1);
    int VAR_8;
    if (VAR_5) {
      VAR_8 = FUNC_0(VAR_7, VAR_4);
    } else {
      VAR_8 = FUNC_9(VAR_7, VAR_4);
    }
    FUNC_5(VAR_7);
    return VAR_8;
  }
}
