
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int p; } ;
struct snd_kcontrol_new {unsigned int count; unsigned int access; int private_value; TYPE_3__ tlv; int put; int get; scalar_t__ info; int index; int name; int subdevice; int device; int iface; } ;
struct TYPE_5__ {int p; } ;
struct TYPE_4__ {int index; int name; int subdevice; int device; int iface; } ;
struct snd_kcontrol {void* private_data; int private_value; TYPE_2__ tlv; int put; int get; scalar_t__ info; TYPE_1__ id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_kcontrol**,unsigned int,unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

struct snd_kcontrol *FUNC_5(const struct snd_kcontrol_new *VAR_6,
      void *VAR_7)
{
 struct snd_kcontrol *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_1(!VAR_6 || !VAR_6->info))
  return ((void*)0);

 VAR_9 = VAR_6->count;
 if (VAR_9 == 0)
  VAR_9 = 1;

 VAR_10 = VAR_6->access;
 if (VAR_10 == 0)
  VAR_10 = VAR_1;
 VAR_10 &= (VAR_1 |
     VAR_5 |
     VAR_0 |
     VAR_4 |
     VAR_3 |
     VAR_2);

 VAR_11 = FUNC_2(&VAR_8, VAR_9, VAR_10, ((void*)0));
 if (VAR_11 < 0)
  return ((void*)0);


 VAR_8->id.iface = VAR_6->iface;
 VAR_8->id.device = VAR_6->device;
 VAR_8->id.subdevice = VAR_6->subdevice;
 if (VAR_6->name) {
  FUNC_4(VAR_8->id.name, VAR_6->name, sizeof(VAR_8->id.name));
  if (FUNC_3(VAR_6->name, VAR_8->id.name) != 0)
   FUNC_0("ALSA: Control name '%s' truncated to '%s'\n",
    VAR_6->name, VAR_8->id.name);
 }
 VAR_8->id.index = VAR_6->index;

 VAR_8->info = VAR_6->info;
 VAR_8->get = VAR_6->get;
 VAR_8->put = VAR_6->put;
 VAR_8->tlv.p = VAR_6->tlv.p;

 VAR_8->private_value = VAR_6->private_value;
 VAR_8->private_data = VAR_7;

 return VAR_8;
}
