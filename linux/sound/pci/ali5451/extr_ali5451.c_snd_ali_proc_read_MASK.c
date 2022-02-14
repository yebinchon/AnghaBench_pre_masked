
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ali* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_0,
         struct snd_info_buffer *VAR_1)
{
 struct snd_ali *VAR_2 = VAR_0->private_data;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 256 ; VAR_3+= 4)
  FUNC_2(VAR_1, "%02x: %08x\n", VAR_3, FUNC_1(FUNC_0(VAR_2, VAR_3)));
}
