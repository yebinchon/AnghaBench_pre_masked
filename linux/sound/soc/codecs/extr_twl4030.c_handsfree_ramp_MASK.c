
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*,int,unsigned char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5);

 if (VAR_6) {

  VAR_7 |= VAR_3;
  FUNC_1(VAR_4, VAR_5, VAR_7);
  FUNC_2(10);
  VAR_7 |= VAR_2;
  FUNC_1(VAR_4, VAR_5, VAR_7);
  FUNC_2(40);
  VAR_7 |= VAR_1;
  VAR_7 |= VAR_0;
  FUNC_1(VAR_4, VAR_5, VAR_7);
 } else {

  VAR_7 &= ~VAR_1;
  VAR_7 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_5, VAR_7);
  VAR_7 &= ~VAR_2;
  FUNC_1(VAR_4, VAR_5, VAR_7);
  FUNC_2(40);
  VAR_7 &= ~VAR_3;
  FUNC_1(VAR_4, VAR_5, VAR_7);
 }
}
