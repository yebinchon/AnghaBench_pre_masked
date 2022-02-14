
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, void *VAR_4)
{
  if (!FUNC_1(VAR_2)) {
    FUNC_0(VAR_1, VAR_0, "keyword argument hash with non symbol keys");
  }
  return 0;
}
