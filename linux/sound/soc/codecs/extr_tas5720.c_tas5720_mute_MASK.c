
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0,
      VAR_1, VAR_3 ? VAR_1 : 0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "error (un-)muting device: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
