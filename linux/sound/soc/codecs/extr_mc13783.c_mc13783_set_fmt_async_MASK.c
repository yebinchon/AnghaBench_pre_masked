
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_soc_dai*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 if (VAR_3->id == VAR_2)
  return FUNC_0(VAR_3, VAR_4, VAR_1);
 else
  return FUNC_0(VAR_3, VAR_4, VAR_0);
}
