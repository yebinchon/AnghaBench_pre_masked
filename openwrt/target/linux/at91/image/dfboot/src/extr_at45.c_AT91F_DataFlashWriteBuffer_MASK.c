
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* command; unsigned char* tx_cmd_pt; int tx_cmd_size; unsigned char* rx_cmd_pt; int rx_cmd_size; unsigned char* rx_data_pt; unsigned char* tx_data_pt; int rx_data_size; int tx_data_size; } ;
struct TYPE_6__ {TYPE_3__* pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_5__ {unsigned int pages_size; int pages_number; unsigned int byte_mask; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_2__* AT91PS_DataFlash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static AT91S_DataFlashStatus FUNC_1(
 AT91PS_DataFlash VAR_4,
 unsigned char VAR_5,
 unsigned char *VAR_6,
 unsigned int VAR_7,
 int VAR_8 )
{
 int VAR_9;

 if ((VAR_5 != VAR_2) && (VAR_5 != VAR_3))
  return VAR_1;


 if (VAR_7 > VAR_4->pDevice->pages_size)
  return VAR_0;


 VAR_4->pDataFlashDesc->command[0] = VAR_5;
 VAR_4->pDataFlashDesc->command[1] = 0;
 if (VAR_4->pDevice->pages_number >= 16384)
 {
     VAR_4->pDataFlashDesc->command[2] = 0;
     VAR_4->pDataFlashDesc->command[3] = (unsigned char)(((unsigned int)(VAR_7 & VAR_4->pDevice->byte_mask)) >> 8) ;
     VAR_4->pDataFlashDesc->command[4] = (unsigned char)((unsigned int)VAR_7 & 0x00FF) ;
  VAR_9 = 5;
 }
 else
 {
     VAR_4->pDataFlashDesc->command[2] = (unsigned char)(((unsigned int)(VAR_7 & VAR_4->pDevice->byte_mask)) >> 8) ;
     VAR_4->pDataFlashDesc->command[3] = (unsigned char)((unsigned int)VAR_7 & 0x00FF) ;
     VAR_4->pDataFlashDesc->command[4] = 0;
  VAR_9 = 4;
 }

 VAR_4->pDataFlashDesc->tx_cmd_pt = VAR_4->pDataFlashDesc->command ;
 VAR_4->pDataFlashDesc->tx_cmd_size = VAR_9 ;
 VAR_4->pDataFlashDesc->rx_cmd_pt = VAR_4->pDataFlashDesc->command ;
 VAR_4->pDataFlashDesc->rx_cmd_size = VAR_9 ;

 VAR_4->pDataFlashDesc->rx_data_pt = VAR_6 ;
 VAR_4->pDataFlashDesc->tx_data_pt = VAR_6 ;
 VAR_4->pDataFlashDesc->rx_data_size = VAR_8 ;
 VAR_4->pDataFlashDesc->tx_data_size = VAR_8 ;

 return FUNC_0(VAR_4->pDataFlashDesc);
}
