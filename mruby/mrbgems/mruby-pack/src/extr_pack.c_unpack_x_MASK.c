
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_1, const void *VAR_2, int VAR_3, mrb_value VAR_4, int VAR_5, unsigned int VAR_6)
{
  if (VAR_5 < 0) return VAR_3;
  if (VAR_3 < VAR_5) {
    FUNC_0(VAR_1, VAR_0, "x outside of string");
  }
  return VAR_5;
}
