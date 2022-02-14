
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* pDevice; TYPE_1__* pDataFlashDesc; } ;
struct TYPE_7__ {int pages_number; unsigned int pages_size; } ;
struct TYPE_6__ {scalar_t__ tx_data_size; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_3__* AT91PS_DataFlash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,unsigned char,int,unsigned int) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
 AT91PS_DataFlash VAR_3,
 unsigned char VAR_4,
 unsigned int VAR_5)
{
 int VAR_6;

 if ((VAR_4 != VAR_1) && (VAR_4 != VAR_2))
  return VAR_0;


     VAR_3->pDataFlashDesc->tx_data_size = 0;
 VAR_6 = 4;
 if (VAR_3->pDevice->pages_number >= 16384)
  VAR_6 = 5;
 return(FUNC_0(VAR_3, VAR_4, VAR_6,
                                   VAR_5*VAR_3->pDevice->pages_size));
}
