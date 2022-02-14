
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int* MCI_RSPR; } ;
struct TYPE_7__ {TYPE_1__* pMCI_DeviceFeatures; } ;
struct TYPE_6__ {int Relative_Card_Address; } ;
typedef TYPE_2__* AT91PS_MciDevice ;


 TYPE_5__* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (TYPE_2__*,int ,int ) ;

int FUNC_1 (AT91PS_MciDevice VAR_6)
{
 unsigned int VAR_7 =0x0;


 VAR_6->pMCI_DeviceFeatures->Relative_Card_Address = 0x0;

  while( (VAR_7 & VAR_1) != VAR_1 )
    {
     VAR_7 = FUNC_0(VAR_6,
            VAR_5,
            VAR_4);
  if (VAR_7 != VAR_2)
   return VAR_3;

  VAR_7 = VAR_0->MCI_RSPR[0];
 }

 return(VAR_0->MCI_RSPR[0]);
}
