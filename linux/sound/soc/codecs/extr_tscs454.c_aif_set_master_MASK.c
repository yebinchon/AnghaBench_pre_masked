
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;



 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct snd_soc_component *VAR_7,
  unsigned int VAR_8, bool VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 switch (VAR_8) {
 case 130:
  VAR_10 = VAR_4;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_6;
  break;
 default:
  VAR_13 = -VAR_0;
  FUNC_0(VAR_7->dev, "Unknown DAI %d (%d)\n", VAR_8, VAR_13);
  return VAR_13;
 }
 VAR_11 = VAR_1;
 VAR_12 = VAR_9 ? VAR_2 : VAR_3;

 VAR_13 = FUNC_1(VAR_7, VAR_10, VAR_11, VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7->dev, "Failed to set DAI %d to %s (%d)\n",
   VAR_8, VAR_9 ? "master" : "slave", VAR_13);
  return VAR_13;
 }

 return 0;
}
