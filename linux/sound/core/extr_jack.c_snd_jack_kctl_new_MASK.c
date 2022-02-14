
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_free; struct snd_jack_kctl* private_data; } ;
struct snd_jack_kctl {unsigned int mask_bits; struct snd_kcontrol* kctl; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 struct snd_jack_kctl* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int VAR_1 ;
 struct snd_kcontrol* FUNC_3 (char const*,struct snd_card*) ;

__attribute__((used)) static struct snd_jack_kctl * FUNC_4(struct snd_card *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 struct snd_kcontrol *VAR_5;
 struct snd_jack_kctl *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_2, VAR_5);
 if (VAR_7 < 0)
  return ((void*)0);

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);

 if (!VAR_6)
  goto error;

 VAR_6->kctl = VAR_5;
 VAR_6->mask_bits = VAR_4;

 VAR_5->private_data = VAR_6;
 VAR_5->private_free = VAR_1;

 return VAR_6;
error:
 FUNC_2(VAR_5);
 return ((void*)0);
}
