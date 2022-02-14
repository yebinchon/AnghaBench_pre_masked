
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2sbus_dev {int macio; } ;
struct dbdma_command_mem {int bus_addr; int space; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i2sbus_dev *VAR_0,
           struct dbdma_command_mem *VAR_1)
{
 if (!VAR_1->space) return;

 FUNC_0(&FUNC_1(VAR_0->macio)->dev,
       VAR_1->size, VAR_1->space, VAR_1->bus_addr);
}
