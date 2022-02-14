
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int mode; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 struct snd_info_entry* FUNC_0 (struct module*,char const*,int *) ;
 int FUNC_1 (struct snd_info_entry*) ;
 scalar_t__ FUNC_2 (struct snd_info_entry*) ;

__attribute__((used)) static struct snd_info_entry *FUNC_3(struct module *VAR_1,
         const char *VAR_2)
{
 struct snd_info_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0));
 if (!VAR_3)
  return ((void*)0);
 VAR_3->mode = VAR_0 | 0555;
 if (FUNC_2(VAR_3) < 0) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
