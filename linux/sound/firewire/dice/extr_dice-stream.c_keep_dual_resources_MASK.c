
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dice {unsigned int** tx_pcm_chs; unsigned int* tx_midi_ports; unsigned int** rx_pcm_chs; unsigned int* rx_midi_ports; TYPE_1__* unit; struct fw_iso_resources* rx_resources; struct amdtp_stream* rx_stream; struct fw_iso_resources* tx_resources; struct amdtp_stream* tx_stream; } ;
struct reg_params {int count; int size; } ;
struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
typedef int reg ;
typedef enum snd_dice_rate_mode { ____Placeholder_snd_dice_rate_mode } snd_dice_rate_mode ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int __be32 ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct snd_dice*,struct amdtp_stream*,struct fw_iso_resources*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_dice*,unsigned int,int*) ;
 int FUNC_4 (struct snd_dice*,scalar_t__,int *,int) ;
 int FUNC_5 (struct snd_dice*,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_6(struct snd_dice *VAR_4, unsigned int VAR_5,
          enum amdtp_stream_direction VAR_6,
          struct reg_params *VAR_7)
{
 enum snd_dice_rate_mode VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_7->count; ++VAR_9) {
  __be32 VAR_11[2];
  struct amdtp_stream *VAR_12;
  struct fw_iso_resources *VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15;
  unsigned int VAR_16;
  unsigned int VAR_17;

  if (VAR_6 == VAR_0) {
   VAR_12 = &VAR_4->tx_stream[VAR_9];
   VAR_13 = &VAR_4->tx_resources[VAR_9];

   VAR_14 = VAR_4->tx_pcm_chs[VAR_9][VAR_8];
   VAR_15 = VAR_4->tx_midi_ports[VAR_9];
   VAR_10 = FUNC_5(VAR_4,
     VAR_7->size * VAR_9 + VAR_3,
     VAR_11, sizeof(VAR_11));
  } else {
   VAR_12 = &VAR_4->rx_stream[VAR_9];
   VAR_13 = &VAR_4->rx_resources[VAR_9];

   VAR_14 = VAR_4->rx_pcm_chs[VAR_9][VAR_8];
   VAR_15 = VAR_4->rx_midi_ports[VAR_9];
   VAR_10 = FUNC_4(VAR_4,
     VAR_7->size * VAR_9 + VAR_2,
     VAR_11, sizeof(VAR_11));
  }
  if (VAR_10 < 0)
   return VAR_10;
  VAR_16 = FUNC_0(VAR_11[0]);
  VAR_17 = FUNC_0(VAR_11[1]);


  if (VAR_16 != VAR_14 || VAR_17 != VAR_15) {
   FUNC_1(&VAR_4->unit->device,
     "cache mismatch: pcm: %u:%u, midi: %u:%u\n",
     VAR_16, VAR_14, VAR_17, VAR_15);
   return -VAR_1;
  }

  VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_13, VAR_5, VAR_16,
         VAR_17);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
