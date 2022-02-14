
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct lola* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct lola {int debug_res_ex; int debug_res; } ;
typedef int line ;


 int FUNC_0 (struct lola*,unsigned int,unsigned int,unsigned int,unsigned int,int *,int *) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int) ;
 int FUNC_2 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_0,
         struct snd_info_buffer *VAR_1)
{
 struct lola *VAR_2 = VAR_0->private_data;
 char VAR_3[64];
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 while (!FUNC_1(VAR_1, VAR_3, sizeof(VAR_3))) {
  if (FUNC_2(VAR_3, "%u %u %u %u", &VAR_4, &VAR_5, &VAR_6, &VAR_7) != 4)
   continue;
  FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7,
    &VAR_2->debug_res,
    &VAR_2->debug_res_ex);
 }
}
