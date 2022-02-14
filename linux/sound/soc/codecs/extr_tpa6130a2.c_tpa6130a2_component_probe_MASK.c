
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpa6130a2_data {scalar_t__ id; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct tpa6130a2_data* FUNC_2 (struct snd_soc_component*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3)
{
 struct tpa6130a2_data *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->id == VAR_0)
  return FUNC_1(VAR_3,
   VAR_2, FUNC_0(VAR_2));
 else
  return FUNC_1(VAR_3,
   VAR_1, FUNC_0(VAR_1));
}
