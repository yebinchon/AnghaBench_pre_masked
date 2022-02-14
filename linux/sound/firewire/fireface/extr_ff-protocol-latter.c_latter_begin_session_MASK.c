
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_6__ {unsigned int generation; int channel; } ;
struct snd_ff {int unit; TYPE_3__ rx_resources; TYPE_3__ tx_resources; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_5__ {TYPE_1__* card; } ;
struct TYPE_4__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ff *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->rx_resources.generation;
 unsigned int VAR_7;
 u32 VAR_8;
 __le32 VAR_9;
 int VAR_10;

 if (VAR_5 >= 32000 && VAR_5 <= 48000)
  VAR_7 = 0x92;
 else if (VAR_5 >= 64000 && VAR_5 <= 96000)
  VAR_7 = 0x8e;
 else if (VAR_5 >= 128000 && VAR_5 <= 192000)
  VAR_7 = 0x8c;
 else
  return -VAR_0;

 if (VAR_6 != FUNC_2(VAR_4->unit)->card->generation) {
  VAR_10 = FUNC_1(&VAR_4->tx_resources);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_1(&VAR_4->rx_resources);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_8 = (VAR_4->tx_resources.channel << 8) | VAR_4->rx_resources.channel;
 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = FUNC_3(VAR_4->unit, VAR_3,
     VAR_1, &VAR_9, sizeof(VAR_9), 0);
 if (VAR_10 < 0)
  return VAR_10;



 VAR_9 = FUNC_0(VAR_7);
 return FUNC_3(VAR_4->unit, VAR_3,
      VAR_2, &VAR_9, sizeof(VAR_9), 0);
}
