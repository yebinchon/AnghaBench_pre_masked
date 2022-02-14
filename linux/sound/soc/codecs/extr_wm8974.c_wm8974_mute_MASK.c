
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_1->component;
 u16 VAR_4 = FUNC_0(VAR_3, VAR_0) & 0xffbf;

 if (VAR_2)
  FUNC_1(VAR_3, VAR_0, VAR_4 | 0x40);
 else
  FUNC_1(VAR_3, VAR_0, VAR_4);
 return 0;
}
