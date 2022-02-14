
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int dummy; } ;
struct module {int dummy; } ;


 struct snd_info_entry* FUNC_0 (char const*,struct snd_info_entry*,struct module*) ;
 struct snd_info_entry* VAR_0 ;

struct snd_info_entry *FUNC_1(struct module * VAR_1,
            const char *VAR_2,
            struct snd_info_entry *VAR_3)
{
 if (!VAR_3)
  VAR_3 = VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_1);
}
