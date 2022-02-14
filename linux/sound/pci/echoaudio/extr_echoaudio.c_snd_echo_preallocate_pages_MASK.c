
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ number; struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,struct device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm *VAR_1, struct device *VAR_2)
{
 struct snd_pcm_substream *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  for (VAR_3 = VAR_1->streams[VAR_4].substream; VAR_3; VAR_3 = VAR_3->next)
   FUNC_0(VAR_3, VAR_0,
            VAR_2,
            VAR_3->number ? 0 : 128<<10,
            256<<10);

 return 0;
}
