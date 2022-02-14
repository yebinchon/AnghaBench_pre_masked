
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int current_rate; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (struct oxygen*) ;

__attribute__((used)) static void FUNC_4(struct oxygen *VAR_0,
          struct snd_pcm_hw_params *VAR_1)
{
 struct xonar_pcm179x *VAR_2 = VAR_0->model_data;

 FUNC_0(1);
 VAR_2->current_rate = FUNC_1(VAR_1);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
