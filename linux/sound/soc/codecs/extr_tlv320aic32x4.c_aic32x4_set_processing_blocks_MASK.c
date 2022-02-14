
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_3,
      u8 VAR_4, u8 VAR_5)
{
 if (VAR_4 > 18 || VAR_5 > 25)
  return -VAR_2;

 FUNC_0(VAR_3, VAR_0, VAR_4);
 FUNC_0(VAR_3, VAR_1, VAR_5);

 return 0;
}
