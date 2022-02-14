
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int externalsr; } ;
struct TYPE_5__ {int sfreq; } ;
struct TYPE_7__ {TYPE_2__ aac_params; TYPE_1__ pcm_params; } ;
struct TYPE_8__ {TYPE_3__ uc; } ;
struct snd_sst_params {int codec; TYPE_4__ sparams; } ;


 int VAR_0 ;




int FUNC_0(struct snd_sst_params *VAR_1)
{
 switch (VAR_1->codec) {
 case 128:
  return VAR_1->sparams.uc.pcm_params.sfreq;
 case 130:
  return VAR_1->sparams.uc.aac_params.externalsr;
 case 129:
  return 0;
 default:
  return -VAR_0;
 }
}
