
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmem_device {int dummy; } ;
struct TYPE_4__ {int config2_bitmap; int config_bitmap; int spi_flash_size; int nor_flash_size; int model; } ;
struct TYPE_3__ {int * hwaddr; } ;


 int VAR_0 ;
 struct nvmem_device* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct nvmem_device*,int,int,char*) ;

__attribute__((used)) static void FUNC_2(struct nvmem_device *VAR_4, void *VAR_5)
{
 char VAR_6[16];

 VAR_1 = VAR_4;


 if (FUNC_1(VAR_1, 0x100, 6, VAR_6) == 6)
  FUNC_0(&VAR_3.hwaddr[0], VAR_6, VAR_0);
 if (FUNC_1(VAR_1, 0x106, 6, VAR_6) == 6)
  FUNC_0(&VAR_3.hwaddr[1], VAR_6, VAR_0);
 if (FUNC_1(VAR_1, 0x10C, 6, VAR_6) == 6)
  FUNC_0(&VAR_3.hwaddr[2], VAR_6, VAR_0);
 if (FUNC_1(VAR_1, 0x112, 6, VAR_6) == 6)
  FUNC_0(&VAR_3.hwaddr[3], VAR_6, VAR_0);


 if (FUNC_1(VAR_1, 0x130, 16, VAR_6) == 16)
  FUNC_0(&VAR_2.model, VAR_6, 16);
 if (FUNC_1(VAR_1, 0x140, 1, VAR_6) == 1)
  FUNC_0(&VAR_2.nor_flash_size, VAR_6, 1);
 if (FUNC_1(VAR_1, 0x141, 1, VAR_6) == 1)
  FUNC_0(&VAR_2.spi_flash_size, VAR_6, 1);
 if (FUNC_1(VAR_1, 0x142, 4, VAR_6) == 4)
  FUNC_0(&VAR_2.config_bitmap, VAR_6, 4);
 if (FUNC_1(VAR_1, 0x146, 4, VAR_6) == 4)
  FUNC_0(&VAR_2.config2_bitmap, VAR_6, 4);
}
