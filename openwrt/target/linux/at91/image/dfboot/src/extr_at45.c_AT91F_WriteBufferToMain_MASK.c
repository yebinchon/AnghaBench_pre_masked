
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pDevice; TYPE_1__* pDataFlashDesc; } ;
struct TYPE_7__ {int pages_number; } ;
struct TYPE_6__ {scalar_t__ tx_data_size; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_3__* AT91PS_DataFlash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned char,int,unsigned int) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1 (
 AT91PS_DataFlash VAR_5,
 unsigned char VAR_6,
 unsigned int VAR_7 )
{
 int VAR_8;

 if ((VAR_6 != VAR_2) &&
     (VAR_6 != VAR_1) &&
     (VAR_6 != VAR_4) &&
     (VAR_6 != VAR_3) )
  return VAR_0;


 VAR_5->pDataFlashDesc->tx_data_size = 0;

 VAR_8 = 4;
 if (VAR_5->pDevice->pages_number >= 16384)
  VAR_8 = 5;

 return(FUNC_0 (VAR_5, VAR_6, VAR_8, VAR_7));
}
