
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; scalar_t__ length; struct snd_ff* callback_data; int address_callback; } ;
struct snd_ff {TYPE_2__ async_handler; TYPE_1__* spec; } ;
struct fw_address_region {int start; scalar_t__ end; } ;
struct TYPE_4__ {scalar_t__ midi_addr_range; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct fw_address_region*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_ff *VAR_2, int VAR_3)
{
 struct fw_address_region VAR_4;
 int VAR_5;

 VAR_2->async_handler.length = VAR_2->spec->midi_addr_range;
 VAR_2->async_handler.address_callback = VAR_1;
 VAR_2->async_handler.callback_data = VAR_2;

 VAR_4.start = 0x000100000000ull * VAR_3;
 VAR_4.end = VAR_4.start + VAR_2->async_handler.length;

 VAR_5 = FUNC_0(&VAR_2->async_handler, &VAR_4);
 if (VAR_5 >= 0) {

  if (VAR_2->async_handler.offset & 0x0000ffffffff) {
   FUNC_1(&VAR_2->async_handler);
   VAR_5 = -VAR_0;
  }
 }

 return VAR_5;
}
