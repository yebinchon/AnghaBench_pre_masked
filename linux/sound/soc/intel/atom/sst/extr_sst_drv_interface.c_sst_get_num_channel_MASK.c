
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int num_chan; } ;
struct TYPE_7__ {int num_chan; } ;
struct TYPE_6__ {int num_chan; } ;
struct TYPE_9__ {TYPE_3__ aac_params; TYPE_2__ mp3_params; TYPE_1__ pcm_params; } ;
struct TYPE_10__ {TYPE_4__ uc; } ;
struct snd_sst_params {int codec; TYPE_5__ sparams; } ;


 int VAR_0 ;




int FUNC_0(struct snd_sst_params *VAR_1)
{
 switch (VAR_1->codec) {
 case 128:
  return VAR_1->sparams.uc.pcm_params.num_chan;
 case 129:
  return VAR_1->sparams.uc.mp3_params.num_chan;
 case 130:
  return VAR_1->sparams.uc.aac_params.num_chan;
 default:
  return -VAR_0;
 }
}
