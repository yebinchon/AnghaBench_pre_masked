
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_each_object_data {scalar_t__ count; int * target_module; int block; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,struct os_each_object_data*) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3 = FUNC_4();
  struct os_each_object_data VAR_4;
  FUNC_2(VAR_1, "&!|C", &VAR_4.block, &VAR_3);

  VAR_4.target_module = FUNC_3(VAR_3) ? ((void*)0) : FUNC_0(VAR_3);
  VAR_4.count = 0;
  FUNC_5(VAR_1, VAR_0, &VAR_4);
  return FUNC_1(VAR_4.count);
}
