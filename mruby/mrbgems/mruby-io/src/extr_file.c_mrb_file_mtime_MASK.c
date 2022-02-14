
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int,struct stat*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  struct stat VAR_3;
  int VAR_4;

  VAR_2 = FUNC_7(FUNC_1(VAR_0, "Time"));
  VAR_4 = (int)FUNC_3(FUNC_6(VAR_0, VAR_1));
  if (FUNC_0(VAR_4, &VAR_3) == -1)
    return FUNC_2();
  return FUNC_5(VAR_0, VAR_2, "at", 1, FUNC_4(VAR_3.st_mtime));
}
