
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 struct RString* FUNC_0 (int ) ;
 int FUNC_1 (struct RString*) ;
 char* FUNC_2 (struct RString*) ;
 int FUNC_3 (struct RString*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,char*,int *,int*) ;
 int FUNC_6 (int *,struct RString*) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3;
  mrb_int VAR_4, VAR_5;
  struct RString *VAR_6;
  char *VAR_7;

  FUNC_5(VAR_0, "Si", &VAR_2, &VAR_4);
  VAR_6 = FUNC_0(VAR_2);
  FUNC_6(VAR_0, VAR_6);
  VAR_7 = FUNC_2(VAR_6);
  VAR_3 = FUNC_7(VAR_0, VAR_7, VAR_4);
  VAR_5 = FUNC_1(VAR_6)-VAR_4;
  FUNC_4(VAR_7, VAR_7+VAR_4, VAR_5);
  VAR_7[VAR_5] = '\0';
  FUNC_3(VAR_6, VAR_5);

  return VAR_3;
}
