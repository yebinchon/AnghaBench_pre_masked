
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7218_priv {int jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct da7218_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_3)
{
 struct da7218_priv *VAR_4 = FUNC_0(VAR_3);
 u8 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0);

 if (VAR_5 & VAR_1)
  VAR_6 = VAR_2;
 else
  VAR_6 = 0;

 FUNC_2(VAR_4->jack, VAR_6, VAR_2);
}
