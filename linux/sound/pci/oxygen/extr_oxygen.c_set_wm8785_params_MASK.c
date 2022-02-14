
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {unsigned int* wm8785_regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct oxygen*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_8,
         struct snd_pcm_hw_params *VAR_9)
{
 struct generic_data *VAR_10 = VAR_8->model_data;
 unsigned int VAR_11;

 VAR_11 = VAR_1 | VAR_0;
 if (FUNC_0(VAR_9) <= 48000)
  VAR_11 |= VAR_4;
 else if (FUNC_0(VAR_9) <= 96000)
  VAR_11 |= VAR_2;
 else
  VAR_11 |= VAR_3;
 if (VAR_11 != VAR_10->wm8785_regs[0]) {
  FUNC_1(VAR_8, VAR_7, 0);
  FUNC_1(VAR_8, VAR_5, VAR_11);
  FUNC_1(VAR_8, VAR_6, VAR_10->wm8785_regs[2]);
 }
}
