
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 u8 VAR_5;

 if (VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = 0;

 FUNC_0(VAR_4, VAR_0, VAR_1,
       VAR_5);

 return 0;
}
