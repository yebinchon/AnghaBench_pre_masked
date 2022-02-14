
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct ichdev {scalar_t__ pcm_open_flag; int pcm; } ;


 struct ichdev* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct ichdev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->pcm_open_flag) {
  FUNC_1(VAR_1->pcm);
  VAR_1->pcm_open_flag = 0;
 }
 return FUNC_2(VAR_0);
}
