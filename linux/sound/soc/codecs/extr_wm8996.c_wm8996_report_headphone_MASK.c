
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_5)
{
 FUNC_0(VAR_5->dev, "Headphone detected\n");
 FUNC_2(VAR_5);


 FUNC_1(VAR_5, VAR_4,
       VAR_2 |
       VAR_0,
       7 << VAR_3 |
       7 << VAR_1);
}
