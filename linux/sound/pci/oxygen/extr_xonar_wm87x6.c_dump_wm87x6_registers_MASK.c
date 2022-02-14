
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int * wm8766_regs; } ;
struct snd_info_buffer {int dummy; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 int FUNC_0 (struct oxygen*,struct snd_info_buffer*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 struct xonar_wm87x6 *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1, "\nWM8766:\n00:");
 for (VAR_3 = 0; VAR_3 < 0x10; ++VAR_3)
  FUNC_1(VAR_1, " %03x", VAR_2->wm8766_regs[VAR_3]);
 FUNC_1(VAR_1, "\n");
}
