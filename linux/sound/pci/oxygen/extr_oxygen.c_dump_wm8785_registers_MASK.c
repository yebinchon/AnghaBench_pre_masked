
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {int * wm8785_regs; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct generic_data *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3;

 FUNC_0(VAR_1, "\nWM8785:");
 for (VAR_3 = 0; VAR_3 < 3; ++VAR_3)
  FUNC_0(VAR_1, " %03x", VAR_2->wm8785_regs[VAR_3]);
 FUNC_0(VAR_1, "\n");
}
