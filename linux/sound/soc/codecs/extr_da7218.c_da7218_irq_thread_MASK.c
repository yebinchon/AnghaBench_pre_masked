
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6;
 u8 VAR_8;


 VAR_8 = FUNC_2(VAR_7, VAR_0);
 if (!VAR_8)
  return VAR_4;


 if (VAR_8 & VAR_2)
  FUNC_1(VAR_7);


 if (VAR_8 & VAR_1)
  FUNC_0(VAR_7);


 FUNC_3(VAR_7, VAR_0, VAR_8);

 return VAR_3;
}
