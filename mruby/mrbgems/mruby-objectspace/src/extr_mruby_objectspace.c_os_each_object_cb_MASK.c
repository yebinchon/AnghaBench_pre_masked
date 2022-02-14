
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_each_object_data {int count; int block; scalar_t__ target_module; } ;
struct RBasic {int tt; int c; } ;
typedef int mrb_state ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct RBasic*) ;
 scalar_t__ FUNC_2 (int *,struct RBasic*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_1, struct RBasic *VAR_2, void *VAR_3)
{
  struct os_each_object_data *VAR_4 = (struct os_each_object_data*)VAR_3;


  if (FUNC_2(VAR_1, VAR_2)) {
    return VAR_0;
  }


  switch (VAR_2->tt) {
  case 129:
  case 128:
    return VAR_0;
  default:
    break;
  }


  if (!VAR_2->c) return VAR_0;


  if (VAR_4->target_module && !FUNC_0(VAR_1, FUNC_1(VAR_2), VAR_4->target_module)) {
    return VAR_0;
  }

  FUNC_3(VAR_1, VAR_4->block, FUNC_1(VAR_2));
  ++VAR_4->count;
  return VAR_0;
}
