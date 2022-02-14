
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link_component {char* dai_name; void* name; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; int dai_fmt; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* codecs; struct snd_soc_dai_link_component* cpus; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,int,int ) ;

__attribute__((used)) static struct snd_soc_dai_link *FUNC_2(struct device *VAR_2,
       int *VAR_3)
{
 struct snd_soc_dai_link *VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4),
           VAR_0);
 struct snd_soc_dai_link_component *VAR_5 = FUNC_1(VAR_2,
      3 * sizeof(*VAR_5), VAR_0);
 if (!VAR_4 || !VAR_5)
  return ((void*)0);

 VAR_4->cpus = &VAR_5[0];
 VAR_4->codecs = &VAR_5[1];
 VAR_4->platforms = &VAR_5[2];

 VAR_4->num_cpus = 1;
 VAR_4->num_codecs = 1;
 VAR_4->num_platforms = 1;

 VAR_4->name = "cdc";
 VAR_4->stream_name = "CDC PCM";
 VAR_4->codecs->dai_name = "Codec";
 VAR_4->cpus->dai_name = FUNC_0(VAR_2);
 VAR_4->codecs->name = FUNC_0(VAR_2);
 VAR_4->platforms->name = FUNC_0(VAR_2);
 VAR_4->dai_fmt = VAR_1;

 *VAR_3 = 1;

 return VAR_4;
}
