
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_dice {int global_offset; int rsrv_offset; int sync_offset; int rx_offset; int tx_offset; } ;
typedef enum snd_dice_addr_type { ____Placeholder_snd_dice_addr_type } snd_dice_addr_type ;


 scalar_t__ VAR_0 ;






__attribute__((used)) static u64 FUNC_0(struct snd_dice *VAR_1, enum snd_dice_addr_type VAR_2,
         u64 VAR_3)
{
 switch (VAR_2) {
 case 128:
  VAR_3 += VAR_1->tx_offset;
  break;
 case 130:
  VAR_3 += VAR_1->rx_offset;
  break;
 case 129:
  VAR_3 += VAR_1->sync_offset;
  break;
 case 131:
  VAR_3 += VAR_1->rsrv_offset;
  break;
 case 132:
 default:
  VAR_3 += VAR_1->global_offset;
  break;
 }
 VAR_3 += VAR_0;
 return VAR_3;
}
