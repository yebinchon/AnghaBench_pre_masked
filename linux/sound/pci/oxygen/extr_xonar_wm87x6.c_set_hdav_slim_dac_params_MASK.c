
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int hdmi; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 int FUNC_0 (struct oxygen*,int *,struct snd_pcm_hw_params*) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
         struct snd_pcm_hw_params *VAR_1)
{
 struct xonar_wm87x6 *VAR_2 = VAR_0->model_data;

 FUNC_0(VAR_0, &VAR_2->hdmi, VAR_1);
}
