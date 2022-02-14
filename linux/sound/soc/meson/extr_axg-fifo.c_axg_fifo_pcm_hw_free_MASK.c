
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct axg_fifo* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct axg_fifo *VAR_3 = FUNC_1(VAR_2);


 FUNC_2(VAR_3->map, VAR_0,
      FUNC_0(VAR_1), 0);

 return FUNC_3(VAR_2);
}
