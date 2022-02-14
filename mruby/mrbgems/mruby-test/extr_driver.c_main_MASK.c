
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

int
FUNC_9(int VAR_5, char **VAR_6)
{
  mrb_state *VAR_7;
  int VAR_8;
  mrb_bool VAR_9 = VAR_1;

  FUNC_7();


  VAR_7 = FUNC_5();
  if (VAR_7 == ((void*)0)) {
    FUNC_1(VAR_4, "Invalid mrb_state, exiting test driver");
    return VAR_0;
  }

  if (VAR_5 == 2 && VAR_6[1][0] == '-' && VAR_6[1][1] == 'v') {
    FUNC_8("verbose mode: enable\n\n");
    VAR_9 = VAR_2;
  }

  FUNC_3(VAR_7, VAR_9);
  FUNC_4(VAR_7, VAR_3);
  FUNC_6(VAR_7);
  VAR_8 = FUNC_0(VAR_7);
  FUNC_2(VAR_7);

  return VAR_8;
}
