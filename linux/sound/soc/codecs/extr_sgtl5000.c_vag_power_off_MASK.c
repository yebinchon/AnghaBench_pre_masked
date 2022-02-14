
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int ) ;
 int FUNC_3 (struct snd_soc_component*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_3, u32 VAR_4)
{
 u16 VAR_5 = FUNC_1(VAR_3,
          VAR_0);

 if (!(VAR_5 & VAR_2))
  return;
 if (FUNC_3(VAR_3, VAR_5, VAR_4) >= 2)
  return;

 FUNC_2(VAR_3, VAR_0,
  VAR_2, 0);




 FUNC_0(VAR_1);
}
