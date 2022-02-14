
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {struct loopback_pcm* private_data; } ;
struct loopback_pcm {int dummy; } ;


 int FUNC_0 (struct loopback_pcm*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_runtime *VAR_0)
{
 struct loopback_pcm *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1);
}
