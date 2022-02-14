
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct snd_soc_dai*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_1);
 if (VAR_6)
  return VAR_6;





 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_2;
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_0);

 return VAR_6;
}
