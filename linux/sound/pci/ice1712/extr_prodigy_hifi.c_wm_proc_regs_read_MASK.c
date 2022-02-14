
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ice1712* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int,int) ;
 int FUNC_3 (struct snd_ice1712*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_info_entry *VAR_0,
         struct snd_info_buffer *VAR_1)
{
 struct snd_ice1712 *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4;

 FUNC_0(&VAR_2->gpio_mutex);
 for (VAR_3 = 0; VAR_3 <= 0x17; VAR_3++) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  FUNC_2(VAR_1, "%02x = %04x\n", VAR_3, VAR_4);
 }
 FUNC_1(&VAR_2->gpio_mutex);
}
