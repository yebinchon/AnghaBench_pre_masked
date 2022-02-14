
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = VAR_1 | VAR_0;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_7 = FUNC_0(VAR_4, VAR_3);

 if (VAR_5) {
  VAR_6 &= ~VAR_8;
  VAR_7 &= ~VAR_8;
 } else {
  VAR_6 |= VAR_8;
  VAR_7 |= VAR_8;
 }

 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_1(VAR_4, VAR_3, VAR_7);

 return 0;
}
