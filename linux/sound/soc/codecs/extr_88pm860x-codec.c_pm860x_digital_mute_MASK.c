
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
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 int VAR_8 = 0, VAR_9 = VAR_0 | VAR_1;

 if (VAR_6)
  VAR_8 = VAR_9;
 FUNC_0(VAR_7, VAR_2, VAR_9, VAR_8);
 FUNC_0(VAR_7, VAR_3,
       VAR_4, VAR_4);
 return 0;
}
