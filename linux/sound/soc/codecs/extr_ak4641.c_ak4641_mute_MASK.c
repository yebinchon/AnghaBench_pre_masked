
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_1->component;

 return FUNC_0(VAR_3, VAR_0, 0x20, VAR_2 ? 0x20 : 0);
}
