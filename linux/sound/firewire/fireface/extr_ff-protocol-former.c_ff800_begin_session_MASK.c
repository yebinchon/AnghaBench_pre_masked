
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data_block_quadlets; } ;
struct TYPE_8__ {unsigned int generation; } ;
struct snd_ff {int unit; TYPE_1__ tx_stream; TYPE_4__ rx_resources; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_7__ {scalar_t__ max_speed; TYPE_2__* card; } ;
struct TYPE_6__ {unsigned int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ff *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4->rx_resources.generation;
 __le32 VAR_7;

 if (VAR_6 != FUNC_2(VAR_4->unit)->card->generation) {
  int VAR_8 = FUNC_1(&VAR_4->rx_resources);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_7 = FUNC_0(0x80000000);
 VAR_7 |= FUNC_0(VAR_4->tx_stream.data_block_quadlets);
 if (FUNC_2(VAR_4->unit)->max_speed == VAR_2)
  VAR_7 |= FUNC_0(VAR_1);
 return FUNC_3(VAR_4->unit, VAR_3,
     VAR_0, &VAR_7, sizeof(VAR_7), 0);
}
