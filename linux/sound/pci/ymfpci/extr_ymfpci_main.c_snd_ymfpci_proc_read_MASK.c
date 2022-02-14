
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int dummy; } ;
struct snd_info_entry {struct snd_ymfpci* private_data; } ;
struct snd_info_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;
 int FUNC_1 (struct snd_ymfpci*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_1,
     struct snd_info_buffer *VAR_2)
{
 struct snd_ymfpci *VAR_3 = VAR_1->private_data;
 int VAR_4;

 FUNC_0(VAR_2, "YMFPCI\n\n");
 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4 += 4)
  FUNC_0(VAR_2, "%04x: %04x\n", VAR_4, FUNC_1(VAR_3, VAR_4));
}
