
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct alc5623_priv {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 struct alc5623_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_10)
{
 struct alc5623_priv *VAR_11 = FUNC_1(VAR_10);

 FUNC_2(VAR_10, VAR_7,
    VAR_6,
    VAR_6);

 FUNC_3(VAR_10, VAR_9, VAR_3);

 FUNC_2(VAR_10, VAR_4,
    VAR_5,
    VAR_5);

 FUNC_0(500);

 FUNC_3(VAR_10, VAR_8, VAR_2);


 if (VAR_11->id == 0x22)
  FUNC_3(VAR_10, VAR_7,
   VAR_1);
 else
  FUNC_3(VAR_10, VAR_7,
   VAR_0);


 FUNC_2(VAR_10, VAR_4,
    VAR_5,
    0);

}
