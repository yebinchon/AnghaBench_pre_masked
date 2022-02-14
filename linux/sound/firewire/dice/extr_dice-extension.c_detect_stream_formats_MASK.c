
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct snd_dice {unsigned int clock_caps; int rx_midi_ports; int rx_pcm_chs; int tx_midi_ports; int tx_pcm_chs; } ;
typedef int reg ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_dice*,int ,unsigned int,unsigned int,int,int ,int ) ;
 int FUNC_2 (struct snd_dice*,int ,scalar_t__,int **,int) ;

__attribute__((used)) static int FUNC_3(struct snd_dice *VAR_11, u64 VAR_12)
{
 u32 VAR_13;
 __be32 VAR_14[2];
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_10; ++VAR_16) {
  unsigned int VAR_18;





  if (VAR_16 == 2) {
   VAR_18 = VAR_0 | VAR_1;
  } else if (VAR_16 == 1) {
   VAR_18 = VAR_5 | VAR_6;
  } else {
   VAR_18 = VAR_2 | VAR_3 |
         VAR_4;
  }
  if (!(VAR_18 & VAR_11->clock_caps))
   continue;

  VAR_13 = 0x2000 * VAR_16 + 0x1000;

  VAR_17 = FUNC_2(VAR_11, VAR_12,
           VAR_13 + VAR_9,
           &VAR_14, sizeof(VAR_14));
  if (VAR_17 < 0)
   break;

  VAR_13 += VAR_7;
  VAR_15 = FUNC_0(VAR_14[0]);
  VAR_17 = FUNC_1(VAR_11, VAR_12, VAR_13,
       VAR_15, VAR_16,
       VAR_11->tx_pcm_chs,
       VAR_11->tx_midi_ports);
  if (VAR_17 < 0)
   break;

  VAR_13 += VAR_15 * VAR_8;
  VAR_15 = FUNC_0(VAR_14[1]);
  VAR_17 = FUNC_1(VAR_11, VAR_12, VAR_13,
       VAR_15,
       VAR_16, VAR_11->rx_pcm_chs,
       VAR_11->rx_midi_ports);
  if (VAR_17 < 0)
   break;
 }

 return VAR_17;
}
