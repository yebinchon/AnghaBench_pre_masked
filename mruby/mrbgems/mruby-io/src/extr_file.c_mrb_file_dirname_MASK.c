
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,int *,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char const**) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;
 char const* FUNC_5 (int *,char*) ;
 char const* FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_2, mrb_value VAR_3)
{
  char *VAR_4, *VAR_5;
  mrb_value VAR_6;
  FUNC_2(VAR_2, "S", &VAR_6);
  VAR_5 = FUNC_4(FUNC_6(VAR_2, VAR_6), -1);

  if ((VAR_4 = FUNC_1(VAR_5)) == ((void*)0)) {
    FUNC_3(VAR_5);
    FUNC_7(VAR_2, "dirname");
  }
  FUNC_3(VAR_5);
  return FUNC_5(VAR_2, VAR_4);

}
