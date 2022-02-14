
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int MCI_ARGR; unsigned int MCI_SR; int MCI_CMDR; } ;
struct TYPE_7__ {TYPE_1__* pMCI_DeviceFeatures; } ;
struct TYPE_6__ {int Relative_Card_Address; } ;
typedef TYPE_2__* AT91PS_MciDevice ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,unsigned int,unsigned int) ;

int FUNC_1 (
 AT91PS_MciDevice VAR_6,
 unsigned int VAR_7,
 unsigned int VAR_8 )
{
 unsigned int VAR_9;



    VAR_1->MCI_ARGR = (VAR_6->pMCI_DeviceFeatures->Relative_Card_Address << 16 );
    VAR_1->MCI_CMDR = VAR_0;


 do
 {
  VAR_9 = VAR_1->MCI_SR;

 }
 while( !(VAR_9 & VAR_3) );


    if (((VAR_1->MCI_SR) & VAR_4) != 0 )
  return ((VAR_1->MCI_SR) & VAR_4);


 if ( (VAR_7 && VAR_5) == 0)
  return VAR_2;

   return( FUNC_0(VAR_6,VAR_7,VAR_8) );
}
