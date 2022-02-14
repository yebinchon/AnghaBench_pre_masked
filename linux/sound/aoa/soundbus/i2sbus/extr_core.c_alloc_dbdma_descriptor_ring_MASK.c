
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2sbus_dev {int macio; } ;
struct dbdma_command_mem {int size; scalar_t__ space; void* cmds; scalar_t__ bus_addr; scalar_t__ bus_cmd_start; } ;
struct dbdma_cmd {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2sbus_dev *VAR_2,
           struct dbdma_command_mem *VAR_3,
           int VAR_4)
{

 VAR_3->size = (VAR_4 + 3) * sizeof(struct dbdma_cmd);



 VAR_3->space = FUNC_1(&FUNC_2(VAR_2->macio)->dev,
          VAR_3->size, &VAR_3->bus_addr, VAR_1);
 if (!VAR_3->space)
  return -VAR_0;

 VAR_3->cmds = (void*)FUNC_0(VAR_3->space);
 VAR_3->bus_cmd_start = VAR_3->bus_addr +
      (dma_addr_t)((char*)VAR_3->cmds - (char*)VAR_3->space);

 return 0;
}
