
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


 int FUNC_0 (TYPE_3__*,int ,int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
 AT91PS_DataFlash VAR_1,
 unsigned int VAR_2)
{
 int VAR_3;


     VAR_1->pDataFlashDesc->tx_data_size = 0;

 VAR_3 = 4;
 if (VAR_1->pDevice->pages_number >= 16384)
  VAR_3 = 5;
 return(FUNC_0(VAR_1, VAR_0, VAR_3,
                                   VAR_2*VAR_1->pDevice->pages_size));
}
