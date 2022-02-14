
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int name; int number; int stream; struct snd_pcm_str* pstr; struct snd_pcm* pcm; } ;
struct snd_pcm_str {scalar_t__ substream_opened; scalar_t__ substream_count; } ;
struct snd_pcm_info {int subname; scalar_t__ subdevices_avail; scalar_t__ subdevices_count; int dev_subclass; int dev_class; int name; int id; int subdevice; int stream; int device; int card; } ;
struct snd_pcm {int dev_subclass; int dev_class; int name; int id; int device; TYPE_1__* card; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (struct snd_pcm_info*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct snd_pcm_substream *VAR_0, struct snd_pcm_info *VAR_1)
{
 struct snd_pcm *VAR_2 = VAR_0->pcm;
 struct snd_pcm_str *VAR_3 = VAR_0->pstr;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->card = VAR_2->card->number;
 VAR_1->device = VAR_2->device;
 VAR_1->stream = VAR_0->stream;
 VAR_1->subdevice = VAR_0->number;
 FUNC_1(VAR_1->id, VAR_2->id, sizeof(VAR_1->id));
 FUNC_1(VAR_1->name, VAR_2->name, sizeof(VAR_1->name));
 VAR_1->dev_class = VAR_2->dev_class;
 VAR_1->dev_subclass = VAR_2->dev_subclass;
 VAR_1->subdevices_count = VAR_3->substream_count;
 VAR_1->subdevices_avail = VAR_3->substream_count - VAR_3->substream_opened;
 FUNC_1(VAR_1->subname, VAR_0->name, sizeof(VAR_1->subname));

 return 0;
}
