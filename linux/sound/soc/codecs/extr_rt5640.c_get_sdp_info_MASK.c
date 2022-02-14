
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9;

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_6, VAR_1);
 VAR_9 = (VAR_9 & VAR_2) >> VAR_3;
 switch (VAR_7) {
 case 137:
  switch (VAR_9) {
  case 134:
  case 133:
   VAR_8 |= VAR_4;
   break;
  case 135:
   VAR_8 |= VAR_4;

  case 129:
  case 132:
   VAR_8 |= VAR_5;
   break;
  }
  break;

 case 136:
  switch (VAR_9) {
  case 130:
  case 132:
   VAR_8 |= VAR_4;
   break;
  case 131:
   VAR_8 |= VAR_4;

  case 134:
  case 128:
   VAR_8 |= VAR_5;
   break;
  }
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
