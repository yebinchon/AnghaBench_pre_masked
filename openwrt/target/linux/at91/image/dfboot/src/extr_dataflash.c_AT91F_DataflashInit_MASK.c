
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* DataFlash_state; } ;
struct TYPE_4__ {int pages_number; int pages_size; int page_offset; int byte_mask; void* cs; } ;
struct TYPE_5__ {int id; void* logical_address; TYPE_3__ Desc; TYPE_1__ Device; } ;






 int FUNC_0 (void*,TYPE_3__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 void* VAR_1 ;
 void*** VAR_2 ;
 TYPE_2__* VAR_3 ;

int FUNC_2(void)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_1();

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3[VAR_4].id = 0;
  VAR_3[VAR_4].Device.pages_number = 0;
  VAR_5 = FUNC_0 (VAR_2[VAR_4][1], &VAR_3[VAR_4].Desc);

  switch (VAR_5) {
  case 130:
   VAR_3[VAR_4].Device.pages_number = 4096;
   VAR_3[VAR_4].Device.pages_size = 528;
   VAR_3[VAR_4].Device.page_offset = 10;
   VAR_3[VAR_4].Device.byte_mask = 0x300;
   VAR_3[VAR_4].Device.cs = VAR_2[VAR_4][1];
   VAR_3[VAR_4].Desc.DataFlash_state = VAR_1;
   VAR_3[VAR_4].logical_address = VAR_2[VAR_4][0];
   VAR_3[VAR_4].id = VAR_5;
   VAR_6++;
   break;

  case 129:
   VAR_3[VAR_4].Device.pages_number = 8192;
   VAR_3[VAR_4].Device.pages_size = 528;
   VAR_3[VAR_4].Device.page_offset = 10;
   VAR_3[VAR_4].Device.byte_mask = 0x300;
   VAR_3[VAR_4].Device.cs = VAR_2[VAR_4][1];
   VAR_3[VAR_4].Desc.DataFlash_state = VAR_1;
   VAR_3[VAR_4].logical_address = VAR_2[VAR_4][0];
   VAR_3[VAR_4].id = VAR_5;
   VAR_6++;
   break;

  case 128:
   VAR_3[VAR_4].Device.pages_number = 8192;
   VAR_3[VAR_4].Device.pages_size = 1056;
   VAR_3[VAR_4].Device.page_offset = 11;
   VAR_3[VAR_4].Device.byte_mask = 0x700;
   VAR_3[VAR_4].Device.cs = VAR_2[VAR_4][1];
   VAR_3[VAR_4].Desc.DataFlash_state = VAR_1;
   VAR_3[VAR_4].logical_address = VAR_2[VAR_4][0];
   VAR_3[VAR_4].id = VAR_5;
   VAR_6++;
   break;
  case 131:
   VAR_3[VAR_4].Device.pages_number = 16384;
   VAR_3[VAR_4].Device.pages_size = 1056;
   VAR_3[VAR_4].Device.page_offset = 11;
   VAR_3[VAR_4].Device.byte_mask = 0x700;
   VAR_3[VAR_4].Device.cs = VAR_2[VAR_4][1];
   VAR_3[VAR_4].Desc.DataFlash_state = VAR_1;
   VAR_3[VAR_4].logical_address = VAR_2[VAR_4][0];
   VAR_3[VAR_4].id = VAR_5;
   VAR_6++;
   break;
  default:
   break;
  }
 }
 return (VAR_6);
}
