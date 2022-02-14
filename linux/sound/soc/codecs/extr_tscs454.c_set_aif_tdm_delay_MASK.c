
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct snd_soc_component *VAR_5,
  unsigned int VAR_6, bool VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  VAR_9 = -VAR_0;
  FUNC_0(VAR_5->dev,
    "DAI %d unknown (%d)\n", VAR_6 + 1, VAR_9);
  return VAR_9;
 }
 VAR_9 = FUNC_1(VAR_5,
   VAR_8, VAR_1, VAR_7);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "Failed to setup tdm format (%d)\n",
    VAR_9);
  return VAR_9;
 }

 return 0;
}
