
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip_args {int dummy; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int,char**,struct strip_args*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (int *,struct strip_args*) ;

int
FUNC_7(int VAR_3, char **VAR_4)
{
  struct strip_args VAR_5;
  int VAR_6;
  mrb_state *VAR_7;
  int VAR_8;

  if (VAR_3 <= 1) {
    FUNC_5("no files to strip\n");
    FUNC_4(VAR_4[0]);
    return VAR_0;
  }

  VAR_6 = FUNC_3(VAR_3, VAR_4, &VAR_5);
  if (VAR_6 < 0) {
    FUNC_4(VAR_4[0]);
    return VAR_0;
  }
  VAR_7 = FUNC_2(VAR_1, ((void*)0));
  if (VAR_7 == ((void*)0)) {
    FUNC_0("Invalid mrb_state, exiting mruby-strip\n", VAR_2);
    return VAR_0;
  }

  VAR_8 = FUNC_6(VAR_7, &VAR_5);

  FUNC_1(VAR_7);
  return VAR_8;
}
