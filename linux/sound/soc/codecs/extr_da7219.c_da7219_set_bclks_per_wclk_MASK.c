
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_7,
         unsigned long VAR_8)
{
 u8 VAR_9;

 switch (VAR_8) {
 case 32:
  VAR_9 = VAR_2;
  break;
 case 64:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_0;
  break;
 case 256:
  VAR_9 = VAR_1;
  break;
 default:
  return -VAR_6;
 }

 FUNC_0(VAR_7, VAR_5,
          VAR_4,
          VAR_9);

 return 0;
}
