
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 char* FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, mrb_sym VAR_1)
{
  mrb_int VAR_2;
  const char *VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2);
  if (!FUNC_0(VAR_0, VAR_3, VAR_2)) {
    FUNC_1(VAR_0, VAR_1, "'%n' is not allowed as a class variable name", VAR_1);
  }
}
