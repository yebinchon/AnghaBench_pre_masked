
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct alc5632_priv {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct alc5632_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct alc5632_priv *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_3->id) {
 case 0x5c:
  FUNC_1(VAR_2, VAR_1,
   FUNC_0(VAR_1));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
