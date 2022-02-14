
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct axg_fifo* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct axg_fifo *VAR_4 = FUNC_1(VAR_3);


 FUNC_0(VAR_4->map, VAR_1,
      VAR_0, 0);
 FUNC_0(VAR_4->map, VAR_1,
      VAR_0, VAR_0);
 FUNC_0(VAR_4->map, VAR_1,
      VAR_0, 0);

 return 0;
}
