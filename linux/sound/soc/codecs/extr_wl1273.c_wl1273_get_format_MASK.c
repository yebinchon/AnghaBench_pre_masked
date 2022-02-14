
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_priv {int mode; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 struct wl1273_priv* FUNC_0 (struct snd_soc_component*) ;

int FUNC_1(struct snd_soc_component *VAR_6, unsigned int *VAR_7)
{
 struct wl1273_priv *VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6);

 switch (VAR_8->mode) {
 case 129:
 case 128:
  *VAR_7 = VAR_3 |
   VAR_5 |
   VAR_1;

  break;
 case 130:
  *VAR_7 = VAR_2 |
   VAR_4 |
   VAR_1;

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
