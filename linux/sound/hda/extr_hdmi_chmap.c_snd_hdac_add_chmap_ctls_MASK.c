
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_chmap {struct snd_kcontrol* kctl; struct hdac_chmap* private_data; } ;
struct snd_pcm {int dummy; } ;
struct TYPE_4__ {int c; } ;
struct snd_kcontrol {int count; TYPE_2__ tlv; int put; int get; int info; TYPE_1__* vd; } ;
struct hdac_chmap {int dummy; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm*,int ,int *,int ,int,struct snd_pcm_chmap**) ;

int FUNC_1(struct snd_pcm *VAR_6, int VAR_7,
    struct hdac_chmap *VAR_8)
{
 struct snd_pcm_chmap *VAR_9;
 struct snd_kcontrol *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_6,
         VAR_1,
         ((void*)0), 0, VAR_7, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->private_data = VAR_8;
 VAR_10 = VAR_9->kctl;
 for (VAR_12 = 0; VAR_12 < VAR_10->count; VAR_12++)
  VAR_10->vd[VAR_12].access |= VAR_0;
 VAR_10->info = VAR_3;
 VAR_10->get = VAR_2;
 VAR_10->put = VAR_4;
 VAR_10->tlv.c = VAR_5;

 return 0;
}
