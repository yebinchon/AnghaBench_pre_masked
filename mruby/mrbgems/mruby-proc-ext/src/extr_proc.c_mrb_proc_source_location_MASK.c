
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irep; } ;
struct RProc {TYPE_1__ body; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct RProc*) ;
 int FUNC_1 (int *,int ,int ) ;
 char* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 struct RProc* FUNC_6 (int ) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RProc *VAR_2 = FUNC_6(VAR_1);

  if (FUNC_0(VAR_2)) {
    return FUNC_5();
  }
  else {
    mrb_irep *VAR_3 = VAR_2->body.irep;
    int32_t VAR_4;
    const char *VAR_5;

    VAR_5 = FUNC_2(VAR_0, VAR_3, 0);
    VAR_4 = FUNC_3(VAR_0, VAR_3, 0);

    return (!VAR_5 && VAR_4 == -1)? FUNC_5()
        : FUNC_1(VAR_0, FUNC_7(VAR_0, VAR_5), FUNC_4(VAR_4));
  }
}
