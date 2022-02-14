
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int component; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_context *VAR_1, int VAR_2,
 unsigned int *VAR_3)
{
 if (!VAR_1->component)
  return -VAR_0;
 return FUNC_0(VAR_1->component, VAR_2, VAR_3);
}
