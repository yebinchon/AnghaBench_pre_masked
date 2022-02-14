
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pMCI_DeviceDesc; TYPE_1__* pMCI_DeviceFeatures; } ;
struct TYPE_9__ {scalar_t__ SDCard_bus_width; } ;
struct TYPE_8__ {int Relative_Card_Address; } ;
typedef TYPE_3__* AT91PS_MciDevice ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int volatile VAR_7 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,char) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

int FUNC_3(AT91PS_MciDevice VAR_8)
{
 volatile int VAR_9;
 char VAR_10;

 do
 {
  VAR_9 =FUNC_0(VAR_8,VAR_8->pMCI_DeviceFeatures->Relative_Card_Address);
 }
 while((VAR_9 > 0) && ((VAR_9 & VAR_7) == 0));


    FUNC_2(VAR_8,
          VAR_6,
          (VAR_8->pMCI_DeviceFeatures->Relative_Card_Address)<<16);


 if(VAR_8->pMCI_DeviceDesc->SDCard_bus_width == VAR_4)
    VAR_10 = VAR_1;
 else VAR_10 = VAR_0;

 if (FUNC_1(VAR_8,VAR_5,VAR_10) != VAR_3)
  return VAR_2;

 return VAR_3;
}
