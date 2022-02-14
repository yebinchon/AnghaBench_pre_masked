
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct lola* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct lola {int debug_res_ex; int debug_res; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_0,
        struct snd_info_buffer *VAR_1)
{
 struct lola *VAR_2 = VAR_0->private_data;
 FUNC_0(VAR_1, "0x%x 0x%x\n", VAR_2->debug_res, VAR_2->debug_res_ex);
}
