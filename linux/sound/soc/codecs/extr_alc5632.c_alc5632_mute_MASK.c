
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 u16 VAR_6 = VAR_1
      |VAR_2;
 u16 VAR_7 = FUNC_0(VAR_5, VAR_0) & ~VAR_6;

 if (VAR_4)
  VAR_7 |= VAR_6;

 return FUNC_1(VAR_5, VAR_0, VAR_7);
}
