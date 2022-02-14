
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ fd2; scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct mrb_io* FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 () ;

mrb_value
FUNC_6(mrb_state *VAR_3, mrb_value VAR_4)
{
  FUNC_3(VAR_3, VAR_0, "IO#close_on_exec? is not supported on the platform");
  return FUNC_2();

}
