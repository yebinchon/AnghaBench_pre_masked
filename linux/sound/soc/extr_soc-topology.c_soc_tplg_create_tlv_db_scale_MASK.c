
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int dummy; } ;
struct snd_soc_tplg_tlv_dbscale {int mute; int step; int min; } ;
struct TYPE_2__ {void* p; } ;
struct snd_kcontrol_new {TYPE_1__ tlv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct soc_tplg *VAR_5,
 struct snd_kcontrol_new *VAR_6, struct snd_soc_tplg_tlv_dbscale *VAR_7)
{
 unsigned int VAR_8 = 2 * sizeof(unsigned int);
 unsigned int *VAR_9;

 VAR_9 = FUNC_0(VAR_8 + 2 * sizeof(unsigned int), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9[0] = VAR_2;
 VAR_9[1] = VAR_8;
 VAR_9[2] = FUNC_1(VAR_7->min);
 VAR_9[3] = (FUNC_1(VAR_7->step) & VAR_3)
  | (FUNC_1(VAR_7->mute) ? VAR_4 : 0);

 VAR_6->tlv.p = (void *)VAR_9;
 return 0;
}
