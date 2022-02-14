
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct pcm3168a_priv {unsigned int sysclk; int scki; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 struct pcm3168a_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
      int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct pcm3168a_priv *VAR_6 = FUNC_1(VAR_2->component);
 int VAR_7;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->scki, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6->sysclk = VAR_4;

 return 0;
}
