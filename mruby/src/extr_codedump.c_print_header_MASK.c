
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mrb_irep *VAR_1, ptrdiff_t VAR_2)
{
  int32_t VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3 < 0) {
    FUNC_1("      ");
  }
  else {
    FUNC_1("%5d ", VAR_3);
  }

  FUNC_1("%03d ", (int)VAR_2);
}
