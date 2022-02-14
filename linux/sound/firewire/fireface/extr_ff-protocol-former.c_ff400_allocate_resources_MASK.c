
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channels_mask; } ;
struct snd_ff {TYPE_2__ tx_resources; int unit; int rx_stream; TYPE_2__ rx_resources; int tx_stream; } ;
typedef int reg ;
typedef enum snd_ff_stream_mode { ____Placeholder_snd_ff_stream_mode } snd_ff_stream_mode ;
typedef int __le32 ;
struct TYPE_4__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_ff *VAR_5, unsigned int VAR_6)
{
 __le32 VAR_7;
 enum snd_ff_stream_mode VAR_8;
 int VAR_9;
 int VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_4[VAR_9] == VAR_6)
   break;
 }
 if (VAR_9 >= VAR_0)
  return -VAR_1;


 VAR_7 = FUNC_1(VAR_6);
 VAR_10 = FUNC_7(VAR_5->unit, VAR_3,
     VAR_2, &VAR_7, sizeof(VAR_7), 0);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(100);

 VAR_10 = FUNC_6(VAR_9, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_5->tx_resources.channels_mask = 0x00000000000000ffuLL;
 VAR_10 = FUNC_2(&VAR_5->tx_resources,
   FUNC_0(&VAR_5->tx_stream),
   FUNC_4(VAR_5->unit)->max_speed);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_5->rx_resources.channels_mask = 0x00000000000000ffuLL;
 VAR_10 = FUNC_2(&VAR_5->rx_resources,
   FUNC_0(&VAR_5->rx_stream),
   FUNC_4(VAR_5->unit)->max_speed);
 if (VAR_10 < 0)
  FUNC_3(&VAR_5->tx_resources);

 return VAR_10;
}
