
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {int mute; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct pcm512x_priv *VAR_5)
{
 return FUNC_0(
  VAR_5->regmap, VAR_0, VAR_1 | VAR_3,
  (!!(VAR_5->mute & 0x5) << VAR_2)
  | (!!(VAR_5->mute & 0x3) << VAR_4));
}
