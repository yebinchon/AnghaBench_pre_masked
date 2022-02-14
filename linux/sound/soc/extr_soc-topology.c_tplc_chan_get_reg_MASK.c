
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {int dummy; } ;
struct snd_soc_tplg_channel {int reg; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_2,
 struct snd_soc_tplg_channel *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_3[VAR_5].id) == VAR_4)
   return FUNC_0(VAR_3[VAR_5].reg);
 }

 return -VAR_0;
}
