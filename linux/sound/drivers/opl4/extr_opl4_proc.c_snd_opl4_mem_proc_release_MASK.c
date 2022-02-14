
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int access_mutex; int memory_access; } ;
struct snd_info_entry {struct snd_opl4* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_info_entry *VAR_0,
         unsigned short VAR_1, void *VAR_2)
{
 struct snd_opl4 *VAR_3 = VAR_0->private_data;

 FUNC_0(&VAR_3->access_mutex);
 VAR_3->memory_access--;
 FUNC_1(&VAR_3->access_mutex);
 return 0;
}
