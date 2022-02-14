
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3 = FUNC_0(VAR_1, VAR_2);

  if (FUNC_2("/usr/bin", "test-bin") == -1) {
    FUNC_1(VAR_1, VAR_0, "can't make a symbolic link");
  }


  return VAR_3;
}
