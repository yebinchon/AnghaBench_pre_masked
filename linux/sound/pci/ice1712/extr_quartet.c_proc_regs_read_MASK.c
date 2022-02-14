
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ice1712* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 int FUNC_4 (struct snd_info_buffer*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_0,
  struct snd_info_buffer *VAR_1)
{
 struct snd_ice1712 *VAR_2 = VAR_0->private_data;
 char VAR_3[36];

 FUNC_4(VAR_1, "SCR:	%s\n", FUNC_0(VAR_3,
    FUNC_3(VAR_2)));
 FUNC_4(VAR_1, "MCR:	%s\n", FUNC_0(VAR_3,
    FUNC_2(VAR_2)));
 FUNC_4(VAR_1, "CPLD:	%s\n", FUNC_0(VAR_3,
    FUNC_1(VAR_2)));
}
