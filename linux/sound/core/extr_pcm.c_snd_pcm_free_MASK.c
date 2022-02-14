
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int * streams; int (* private_free ) (struct snd_pcm*) ;int internal; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_pcm*) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm*) ;
 int FUNC_4 (struct snd_pcm*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm *VAR_3)
{
 if (!VAR_3)
  return 0;
 if (!VAR_3->internal)
  FUNC_1(VAR_3, VAR_2);
 if (VAR_3->private_free)
  VAR_3->private_free(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->streams[VAR_1]);
 FUNC_2(&VAR_3->streams[VAR_0]);
 FUNC_0(VAR_3);
 return 0;
}
