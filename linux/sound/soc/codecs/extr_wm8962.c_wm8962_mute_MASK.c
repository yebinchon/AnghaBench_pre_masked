
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;
 int VAR_7, VAR_8;

 if (VAR_5)
  VAR_7 = VAR_2 | VAR_3;
 else
  VAR_7 = 0;





 VAR_8 = FUNC_0(VAR_6, VAR_1,
      VAR_3, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_0(VAR_6, VAR_0,
       VAR_2, VAR_7);
}
