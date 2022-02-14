
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
typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;
typedef int __le32 ;
struct TYPE_4__ {int max_speed; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct snd_ff*,unsigned int*,int*) ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_ff *VAR_5, unsigned int VAR_6)
{
 enum snd_ff_stream_mode VAR_7;
 unsigned int VAR_8;
 __le32 VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;


 if (VAR_6 % 32000 == 0)
  VAR_8 = 0x00;
 else if (VAR_6 % 44100 == 0)
  VAR_8 = 0x02;
 else if (VAR_6 % 48000 == 0)
  VAR_8 = 0x04;
 else
  return -VAR_0;

 if (VAR_6 >= 64000 && VAR_6 < 128000)
  VAR_8 |= 0x08;
 else if (VAR_6 >= 128000 && VAR_6 < 192000)
  VAR_8 |= 0x10;

 VAR_9 = FUNC_2(VAR_8);
 VAR_12 = FUNC_8(VAR_5->unit, VAR_3,
     VAR_2, &VAR_9, sizeof(VAR_9), 0);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_10 = 0;
 while (VAR_10++ < 10) {
  unsigned int VAR_13;
  enum snd_ff_clock_src VAR_14;

  VAR_12 = FUNC_6(VAR_5, &VAR_13, &VAR_14);
  if (VAR_12 < 0)
   return VAR_12;

  if (VAR_13 == VAR_6)
   break;
 }
 if (VAR_10 == 10)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); ++VAR_11) {
  if (VAR_6 == VAR_4[VAR_11])
   break;
 }
 if (VAR_11 == FUNC_0(VAR_4))
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_11, &VAR_7);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_5->tx_resources.channels_mask = 0x00000000000000ffuLL;
 VAR_12 = FUNC_3(&VAR_5->tx_resources,
   FUNC_1(&VAR_5->tx_stream),
   FUNC_5(VAR_5->unit)->max_speed);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_5->rx_resources.channels_mask = 0x00000000000000ffuLL;
 VAR_12 = FUNC_3(&VAR_5->rx_resources,
   FUNC_1(&VAR_5->rx_stream),
   FUNC_5(VAR_5->unit)->max_speed);
 if (VAR_12 < 0)
  FUNC_4(&VAR_5->tx_resources);

 return VAR_12;
}
