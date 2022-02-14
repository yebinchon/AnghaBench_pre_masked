
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int timer; int substream; } ;
struct ct_atc {int (* pcm_release_resources ) (struct ct_atc*,struct ct_atc_pcm*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_atc_pcm*) ;
 struct ct_atc* FUNC_2 (int ) ;
 int FUNC_3 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_runtime *VAR_0)
{
 struct ct_atc_pcm *VAR_1 = VAR_0->private_data;
 struct ct_atc *VAR_2 = FUNC_2(VAR_1->substream);

 VAR_2->pcm_release_resources(VAR_2, VAR_1);
 FUNC_0(VAR_1->timer);
 FUNC_1(VAR_1);
 VAR_0->private_data = ((void*)0);
}
