
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct kirkwood_dma_data {scalar_t__ io; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;



 unsigned long FUNC_0 (scalar_t__) ;
 struct kirkwood_dma_data* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_8,
  unsigned int VAR_9)
{
 struct kirkwood_dma_data *VAR_10 = FUNC_1(VAR_8);
 unsigned long VAR_11;
 unsigned long VAR_12;

 switch (VAR_9 & VAR_7) {
 case 128:
  VAR_11 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_3;
  break;
 case 130:
  VAR_11 = VAR_1;
  break;
 default:
  return -VAR_0;
 }





 VAR_12 = FUNC_0(VAR_10->io+VAR_5);
 VAR_12 &= ~VAR_2;
 VAR_12 |= VAR_11;
 FUNC_2(VAR_12, VAR_10->io+VAR_5);

 VAR_12 = FUNC_0(VAR_10->io+VAR_6);
 VAR_12 &= ~VAR_2;
 VAR_12 |= VAR_11;
 FUNC_2(VAR_12, VAR_10->io+VAR_6);

 return 0;
}
