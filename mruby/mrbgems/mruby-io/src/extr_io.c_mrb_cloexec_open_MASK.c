
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fmode_t ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int,int ) ;

int
FUNC_8(mrb_state *VAR_5, const char *VAR_6, mrb_int VAR_7, mrb_int VAR_8)
{
  int VAR_9, VAR_10 = VAR_0;
  char* VAR_11 = FUNC_5(VAR_6, -1);







reopen:
  VAR_9 = FUNC_7(VAR_11, (int)VAR_7, (fmode_t)VAR_8);
  if (VAR_9 == -1) {
    if (!VAR_10) {
      switch (VAR_4) {
        case 128:
        case 129:
        FUNC_3(VAR_5);
        VAR_10 = VAR_3;
        goto reopen;
      }
    }

    FUNC_6(VAR_5, FUNC_0(VAR_5, FUNC_2(VAR_5, "open %s", VAR_6)));
  }
  FUNC_4(VAR_11);

  if (VAR_9 <= 2) {
    FUNC_1(VAR_5, VAR_9);
  }
  return VAR_9;
}
