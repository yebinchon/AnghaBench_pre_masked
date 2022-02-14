
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct src_node_conf_t {unsigned int pitch; int mix_msr; int imp_msr; int msr; int vo; } ;
struct ct_atc_pcm {TYPE_2__* substream; } ;
struct ct_atc {int rsr; int msr; } ;
struct TYPE_4__ {TYPE_1__* runtime; } ;
struct TYPE_3__ {int channels; int rate; } ;


 void* FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ct_atc *VAR_0, struct ct_atc_pcm *VAR_1,
    struct src_node_conf_t *VAR_2, int *VAR_3)
{
 unsigned int VAR_4;


 VAR_4 = FUNC_0((VAR_0->rsr * VAR_0->msr),
    VAR_1->substream->runtime->rate);
 *VAR_3 = 0;

 if (1 == VAR_0->msr) {
  *VAR_3 = VAR_1->substream->runtime->channels;
  VAR_2[0].pitch = VAR_4;
  VAR_2[0].mix_msr = VAR_2[0].imp_msr = VAR_2[0].msr = 1;
  VAR_2[0].vo = 1;
 } else if (2 <= VAR_0->msr) {
  if (0x8000000 < VAR_4) {


   VAR_2[0].pitch = (VAR_0->msr << 24);
   VAR_2[0].msr = VAR_2[0].mix_msr = 1;
   VAR_2[0].imp_msr = VAR_0->msr;
   VAR_2[0].vo = 0;
   VAR_2[1].pitch = FUNC_0(VAR_0->rsr,
     VAR_1->substream->runtime->rate);
   VAR_2[1].msr = VAR_2[1].mix_msr = VAR_2[1].imp_msr = 1;
   VAR_2[1].vo = 1;
   *VAR_3 = VAR_1->substream->runtime->channels * 2;
  } else if (0x1000000 < VAR_4) {


   VAR_2[0].pitch = VAR_4;
   VAR_2[0].msr = VAR_2[0].mix_msr
        = VAR_2[0].imp_msr = VAR_0->msr;
   VAR_2[0].vo = 1;
   *VAR_3 = VAR_1->substream->runtime->channels;
  }
 }
}
