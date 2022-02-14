
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int pages_size; scalar_t__ pages_number; } ;
struct TYPE_4__ {int id; scalar_t__ logical_address; TYPE_1__ Device; } ;






 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].id != 0) {
   FUNC_0 ("DF:AT45DB");
   switch (VAR_1[VAR_2].id) {
   case 130:
    FUNC_0 ("161");
    break;

   case 129:
    FUNC_0 ("321");
    break;

   case 128:
    FUNC_0 ("642");
    break;
   case 131:
    FUNC_0 ("128");
    break;
   }

   FUNC_0 ("\n# PG: %6d\n"
    "PG SZ: %6d\n"
    "SZ=%8d bytes\n"
    "ADDR: %08X\n",
    (unsigned int) VAR_1[VAR_2].Device.pages_number,
    (unsigned int) VAR_1[VAR_2].Device.pages_size,
    (unsigned int) VAR_1[VAR_2].Device.pages_number *
    VAR_1[VAR_2].Device.pages_size,
    (unsigned int) VAR_1[VAR_2].logical_address);
  }
 }
}
