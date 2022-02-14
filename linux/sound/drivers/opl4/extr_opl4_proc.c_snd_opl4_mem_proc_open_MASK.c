
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int access_mutex; scalar_t__ memory_access; } ;
struct snd_info_entry {struct snd_opl4* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_info_entry *VAR_1,
      unsigned short VAR_2, void **VAR_3)
{
 struct snd_opl4 *VAR_4 = VAR_1->private_data;

 FUNC_0(&VAR_4->access_mutex);
 if (VAR_4->memory_access) {
  FUNC_1(&VAR_4->access_mutex);
  return -VAR_0;
 }
 VAR_4->memory_access++;
 FUNC_1(&VAR_4->access_mutex);
 return 0;
}
