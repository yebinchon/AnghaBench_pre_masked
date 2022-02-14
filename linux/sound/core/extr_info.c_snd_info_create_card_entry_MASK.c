
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int dummy; } ;
struct snd_card {int module; struct snd_info_entry* proc_root; } ;


 struct snd_info_entry* FUNC_0 (char const*,struct snd_info_entry*,int ) ;

struct snd_info_entry *FUNC_1(struct snd_card *VAR_0,
          const char *VAR_1,
          struct snd_info_entry * VAR_2)
{
 if (!VAR_2)
  VAR_2 = VAR_0->proc_root;
 return FUNC_0(VAR_1, VAR_2, VAR_0->module);
}
