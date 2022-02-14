
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_sym ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 char* FUNC_4 (int *,int ,size_t*) ;

__attribute__((used)) static mrb_sym
FUNC_5(mrb_state *VAR_2, mrb_sym VAR_3)
{



  const char *VAR_4;
  char *VAR_5;
  mrb_int VAR_6;
  mrb_sym VAR_7;
  char VAR_8[32];

  VAR_4 = FUNC_4(VAR_2, VAR_3, &VAR_6);
  if (VAR_6 > (32 - 1)) {
    VAR_5 = (char *)FUNC_3(VAR_2, (size_t)VAR_6+1);
  }
  else {
    VAR_5 = VAR_8;
  }
  FUNC_0(VAR_5, VAR_4, (size_t)VAR_6);
  VAR_5[VAR_6] = '=';

  VAR_7 = FUNC_2(VAR_2, VAR_5, VAR_6+1);
  if (VAR_5 != VAR_8) {
    FUNC_1(VAR_2, VAR_5);
  }
  return VAR_7;
}
