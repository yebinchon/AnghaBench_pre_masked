
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int map; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct axg_fifo* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7,
     struct snd_soc_dai *VAR_8)
{
 struct axg_fifo *VAR_9 = FUNC_3(VAR_8);
 unsigned int VAR_10;
 int VAR_11;


 VAR_11 = FUNC_1(VAR_9->pclk);
 if (VAR_11)
  return VAR_11;


 FUNC_2(VAR_9->map, VAR_5, VAR_3, 0);


 FUNC_2(VAR_9->map, VAR_5, VAR_1,
      VAR_1);


 FUNC_2(VAR_9->map, VAR_5, VAR_2, 0);


 VAR_10 = VAR_0 - 1;
 FUNC_2(VAR_9->map, VAR_6, VAR_4,
      FUNC_0(VAR_10));

 return 0;
}
