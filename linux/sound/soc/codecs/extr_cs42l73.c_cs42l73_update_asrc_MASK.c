
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_4 > 0)
  VAR_5 = FUNC_0(VAR_4);

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_2, VAR_1, 0x0f, VAR_5);
 break;
 case 130:
  FUNC_1(VAR_2, VAR_0, 0x3c, VAR_5 << 2);
 break;
 case 129:
  FUNC_1(VAR_2, VAR_1, 0xf0, VAR_5 << 4);
 break;
 default:
 break;
 }
}
