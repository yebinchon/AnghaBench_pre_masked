
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, unsigned int VAR_8)
{
 VAR_8 &= (VAR_2 | VAR_4 |
  VAR_5);

 if (VAR_8 != (VAR_3 | VAR_6 |
      VAR_1)) {
  FUNC_0(VAR_7->dev, "Invalid DAI format\n");
  return -VAR_0;
 }

 return 0;
}
