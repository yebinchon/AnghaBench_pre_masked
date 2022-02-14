
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int dummy; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int release; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct snd_info_buffer*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 FUNC_1(VAR_1,
      "Advanced Linux Sound Architecture Driver Version k%s.\n",
      FUNC_0()->release);
}
