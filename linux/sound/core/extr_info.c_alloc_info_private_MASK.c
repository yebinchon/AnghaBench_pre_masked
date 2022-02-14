
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_private_data {struct snd_info_entry* entry; } ;
struct snd_info_entry {int module; int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_info_private_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_info_entry *VAR_4,
         struct snd_info_private_data **VAR_5)
{
 struct snd_info_private_data *VAR_6;

 if (!VAR_4 || !VAR_4->p)
  return -VAR_1;
 if (!FUNC_2(VAR_4->module))
  return -VAR_0;
 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  FUNC_1(VAR_4->module);
  return -VAR_2;
 }
 VAR_6->entry = VAR_4;
 *VAR_5 = VAR_6;
 return 0;
}
