
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {struct snd_ff* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ff {TYPE_2__* spec; } ;
struct TYPE_4__ {TYPE_1__* protocol; } ;
struct TYPE_3__ {int (* dump_status ) (struct snd_ff*,struct snd_info_buffer*) ;} ;


 int FUNC_0 (struct snd_ff*,struct snd_info_buffer*) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_0,
        struct snd_info_buffer *VAR_1)
{
 struct snd_ff *VAR_2 = VAR_0->private_data;

 VAR_2->spec->protocol->dump_status(VAR_2, VAR_1);
}
