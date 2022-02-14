
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct aic26 {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aic26* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4)
{
 struct aic26 *VAR_5 = FUNC_0(VAR_4->dev);
 int VAR_6, VAR_7;

 VAR_5->component = VAR_4;


 FUNC_4(VAR_4, VAR_2, 0xBB00);


 FUNC_4(VAR_4, VAR_1, 0);


 VAR_7 = FUNC_3(VAR_4, VAR_0);
 VAR_7 &= ~0xf800;
 VAR_7 |= 0x0800;
 FUNC_4(VAR_4, VAR_0, VAR_7);



 VAR_6 = FUNC_2(VAR_4->dev, &VAR_3);
 if (VAR_6)
  FUNC_1(VAR_4->dev, "error creating sysfs files\n");

 return 0;
}
