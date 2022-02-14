
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct aif {int master; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_1(struct snd_soc_component *VAR_2,
  struct aif *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 switch (VAR_4 & VAR_1) {
 case 129:
  VAR_3->master = 1;
  break;
 case 128:
  VAR_3->master = 0;
  break;
 default:
  VAR_5 = -VAR_0;
  FUNC_0(VAR_2->dev, "Unsupported format (%d)\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
