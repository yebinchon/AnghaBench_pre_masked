
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct nm256 {int * streams; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct nm256*) ;
 int VAR_2 ;
 int FUNC_1 (struct nm256*,int *,struct snd_pcm_substream*,int *) ;
 struct nm256* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct nm256 *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_4) < 0)
  return -VAR_0;
 FUNC_1(VAR_4, &VAR_4->streams[VAR_1],
          VAR_3, &VAR_2);
 return 0;
}
