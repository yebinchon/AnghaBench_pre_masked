
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {int master; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ,char*) ;
 struct zx_tdm_info* FUNC_1 (struct snd_soc_dai*) ;
 unsigned long FUNC_2 (struct zx_tdm_info*,int ) ;
 int FUNC_3 (struct zx_tdm_info*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_8, unsigned int VAR_9)
{
 struct zx_tdm_info *VAR_10 = FUNC_1(VAR_8);
 unsigned long VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_1);
 VAR_11 &= ~(VAR_6 | VAR_5);
 VAR_11 |= VAR_3 << VAR_7;

 switch (VAR_9 & VAR_2) {
 case 129:
  VAR_10->master = 1;
  VAR_11 |= VAR_4;
  break;
 case 128:
  VAR_10->master = 0;
  VAR_11 &= ~VAR_4;
  break;
 default:
  FUNC_0(VAR_8->dev, "Unknown master/slave format\n");
  return -VAR_0;
 }


 FUNC_3(VAR_10, VAR_1, VAR_11);

 return 0;
}
