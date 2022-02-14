
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMCI_DeviceFeatures; TYPE_2__* pMCI_DeviceDesc; } ;
struct TYPE_5__ {int SDCard_bus_width; int state; } ;
struct TYPE_4__ {scalar_t__ Memory_Capacity; scalar_t__ Sector_Size; scalar_t__ Erase_Block_Enable; scalar_t__ Write_Partial; scalar_t__ Read_Partial; scalar_t__ Max_Write_DataBlock_Length; scalar_t__ Max_Read_DataBlock_Length; int Card_Inserted; scalar_t__ Relative_Card_Address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_0(void)
{


 VAR_5.Relative_Card_Address = 0;
 VAR_5.Card_Inserted = VAR_0;
 VAR_5.Max_Read_DataBlock_Length = 0;
 VAR_5.Max_Write_DataBlock_Length = 0;
 VAR_5.Read_Partial = 0;
 VAR_5.Write_Partial = 0;
 VAR_5.Erase_Block_Enable = 0;
 VAR_5.Sector_Size = 0;
 VAR_5.Memory_Capacity = 0;

 VAR_4.state = VAR_1;
 VAR_4.SDCard_bus_width = VAR_2;


 VAR_3.pMCI_DeviceDesc = &VAR_4;
 VAR_3.pMCI_DeviceFeatures = &VAR_5;

}
