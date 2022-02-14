
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 u8 VAR_5;
 int VAR_6;

 VAR_5 = VAR_3 ? VAR_1 : 0;

 VAR_6 = FUNC_0(VAR_4,
       VAR_0,
       VAR_1,
       VAR_5);
 FUNC_1(1000, 2000);

 return VAR_6;
}
