
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct es7134_data {unsigned int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct es7134_data* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, int VAR_3,
        unsigned int VAR_4, int VAR_5)
{
 struct es7134_data *VAR_6 = FUNC_0(VAR_2);

 if (VAR_5 == VAR_1 && VAR_3 == 0) {
  VAR_6->mclk = VAR_4;
  return 0;
 }

 return -VAR_0;
}
