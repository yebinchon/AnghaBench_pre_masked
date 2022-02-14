
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct snd_soc_component *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3,
   VAR_2, VAR_0,
  VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "Failed to mute DAC (%d)\n",
    VAR_4);
  return VAR_4;
 }

 return 0;
}
