
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int private_data; } ;
struct snd_cmi8330 {TYPE_1__* streams; } ;
struct TYPE_2__ {int (* open ) (struct snd_pcm_substream*) ;int private_data; } ;


 size_t VAR_0 ;
 struct snd_cmi8330* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_cmi8330 *VAR_2 = FUNC_0(VAR_1);


 VAR_1->private_data = VAR_2->streams[VAR_0].private_data;
 return VAR_2->streams[VAR_0].open(VAR_1);
}
