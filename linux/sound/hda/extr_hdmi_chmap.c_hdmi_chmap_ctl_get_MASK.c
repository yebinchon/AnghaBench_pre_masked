
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_chmap {struct hdac_chmap* private_data; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {unsigned char* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {int (* get_chmap ) (int ,int,unsigned char*) ;} ;
struct hdac_chmap {int hdac; TYPE_1__ ops; } ;
typedef int pcm_chmap ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 struct snd_pcm_chmap* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcm_chmap *VAR_2 = FUNC_2(VAR_0);
 struct hdac_chmap *VAR_3 = VAR_2->private_data;
 int VAR_4 = VAR_0->private_value;
 unsigned char VAR_5[8];
 int VAR_6;

 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 VAR_3->ops.get_chmap(VAR_3->hdac, VAR_4, VAR_5);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
  VAR_1->value.integer.value[VAR_6] = VAR_5[VAR_6];

 return 0;
}
