
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data_block_quadlets; } ;
struct TYPE_10__ {unsigned int generation; int channel; } ;
struct TYPE_7__ {int data_block_quadlets; } ;
struct snd_ff {int unit; TYPE_3__ tx_stream; TYPE_5__ tx_resources; TYPE_5__ rx_resources; TYPE_2__ rx_stream; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_9__ {TYPE_1__* card; } ;
struct TYPE_6__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ff *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->rx_resources.generation;
 __le32 VAR_7;
 int VAR_8;

 if (VAR_6 != FUNC_2(VAR_4->unit)->card->generation) {
  VAR_8 = FUNC_1(&VAR_4->tx_resources);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_1(&VAR_4->rx_resources);
  if (VAR_8 < 0)
   return VAR_8;
 }



 VAR_7 = FUNC_0(((VAR_4->rx_stream.data_block_quadlets << 3) << 8) |
     VAR_4->rx_resources.channel);
 VAR_8 = FUNC_3(VAR_4->unit, VAR_3,
     VAR_1, &VAR_7, sizeof(VAR_7), 0);
 if (VAR_8 < 0)
  return VAR_8;




 VAR_7 = FUNC_0((0x80 << 24) |
     (VAR_4->tx_resources.channel << 5) |
     (VAR_4->tx_stream.data_block_quadlets));
 VAR_8 = FUNC_3(VAR_4->unit, VAR_3,
     VAR_2, &VAR_7, sizeof(VAR_7), 0);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7 = FUNC_0(0x00000001);
 return FUNC_3(VAR_4->unit, VAR_3,
     VAR_0, &VAR_7, sizeof(VAR_7), 0);
}
