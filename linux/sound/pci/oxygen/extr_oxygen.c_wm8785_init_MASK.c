
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int card; struct generic_data* model_data; } ;
struct generic_data {int* wm8785_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct oxygen*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_5)
{
 struct generic_data *VAR_6 = VAR_5->model_data;

 VAR_6->wm8785_regs[0] =
  VAR_3 | VAR_4 | VAR_0;
 VAR_6->wm8785_regs[2] = VAR_2 | VAR_1;
 FUNC_1(VAR_5);
 FUNC_0(VAR_5->card, "WM8785");
}
