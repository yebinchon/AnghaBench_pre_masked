
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs42l56_private {int iface_inv; int iface_fmt; int iface; } ;


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
 int VAR_10 ;


 unsigned int VAR_11 ;


 unsigned int VAR_12 ;

 unsigned int VAR_13 ;

 struct cs42l56_private* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct cs42l56_private *VAR_17 = FUNC_0(VAR_16);

 switch (VAR_15 & VAR_13) {
 case 133:
  VAR_17->iface = VAR_4;
  break;
 case 132:
  VAR_17->iface = VAR_9;
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_11) {
 case 131:
  VAR_17->iface_fmt = VAR_1;
  break;
 case 129:
  VAR_17->iface_fmt = VAR_2;
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_12) {
 case 128:
  VAR_17->iface_inv = 0;
  break;
 case 130:
  VAR_17->iface_inv = VAR_6;
  break;
 default:
  return -VAR_10;
 }

 FUNC_1(VAR_16, VAR_0,
       VAR_5, VAR_17->iface);
 FUNC_1(VAR_16, VAR_8,
       VAR_3, VAR_17->iface_fmt);
 FUNC_1(VAR_16, VAR_0,
       VAR_7, VAR_17->iface_inv);
 return 0;
}
