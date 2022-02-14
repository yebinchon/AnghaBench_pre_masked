
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int MCI_MR; int MCI_IER; } ;
struct TYPE_12__ {int PDC_PTCR; unsigned int PDC_RPR; int PDC_RCR; } ;
struct TYPE_11__ {TYPE_2__* pMCI_DeviceDesc; TYPE_1__* pMCI_DeviceFeatures; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_9__ {int Memory_Capacity; int Max_Read_DataBlock_Length; int Read_Partial; int Relative_Card_Address; } ;
typedef TYPE_3__* AT91PS_MciDevice ;


 TYPE_8__* VAR_0 ;
 TYPE_7__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int) ;

int FUNC_2(
 AT91PS_MciDevice VAR_14,
 int VAR_15,
 unsigned int *VAR_16,
 int VAR_17 )
{

    if(VAR_14->pMCI_DeviceDesc->state != VAR_3)
     return VAR_10;

    if( (FUNC_0(VAR_14,VAR_14->pMCI_DeviceFeatures->Relative_Card_Address) & VAR_13) != VAR_13)
     return VAR_10;

    if ( (VAR_15 + VAR_17) > VAR_14->pMCI_DeviceFeatures->Memory_Capacity )
  return VAR_10;


 if ( (VAR_15 % VAR_14->pMCI_DeviceFeatures->Max_Read_DataBlock_Length) != 0 )
  return VAR_10;



     if( (VAR_17 < VAR_14->pMCI_DeviceFeatures->Max_Read_DataBlock_Length)
     && (VAR_14->pMCI_DeviceFeatures->Read_Partial == 0x00) )
     return VAR_10;

    if( VAR_17 > VAR_14->pMCI_DeviceFeatures->Max_Read_DataBlock_Length)
     return VAR_10;



 VAR_0->MCI_MR |= ((VAR_14->pMCI_DeviceFeatures->Max_Read_DataBlock_Length << 16) | VAR_4);

    if (VAR_17 %4)
  VAR_17 = (VAR_17 /4)+1;
 else
  VAR_17 = VAR_17/4;

 VAR_1->PDC_PTCR = (VAR_9 | VAR_7);
    VAR_1->PDC_RPR = (unsigned int)VAR_16;
    VAR_1->PDC_RCR = VAR_17;


    if ( FUNC_1(VAR_14, VAR_12, VAR_15) != VAR_2 )
     return VAR_10;

 VAR_14->pMCI_DeviceDesc->state = VAR_6;


    VAR_0->MCI_IER = VAR_5;


 VAR_1->PDC_PTCR = VAR_8;

 return VAR_11;
}
