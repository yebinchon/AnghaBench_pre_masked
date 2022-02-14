
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int map; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct axg_fifo* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
     struct snd_soc_dai *VAR_7)
{
 struct axg_fifo *VAR_8 = FUNC_4(VAR_7);
 unsigned int VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_8->pclk);
 if (VAR_11)
  return VAR_11;


 FUNC_3(VAR_8->map, VAR_4, VAR_1, 0);







 VAR_9 = VAR_0 - 1;
 VAR_10 = (VAR_0 / 2) - 1;
 FUNC_3(VAR_8->map, VAR_5,
      VAR_2 | VAR_3,
      FUNC_0(VAR_9) |
      FUNC_1(VAR_10));

 return 0;
}
