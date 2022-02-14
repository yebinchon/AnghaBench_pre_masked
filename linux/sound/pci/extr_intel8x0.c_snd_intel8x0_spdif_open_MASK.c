
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {scalar_t__ device_type; int * ichd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*,int *) ;
 struct intel8x0* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3)
{
 struct intel8x0 *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_4->device_type == VAR_0 ? VAR_2 : VAR_1;

 return FUNC_0(VAR_3, &VAR_4->ichd[VAR_5]);
}
