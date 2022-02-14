
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dice {int domain; struct fw_iso_resources* rx_resources; struct amdtp_stream* rx_stream; struct fw_iso_resources* tx_resources; struct amdtp_stream* tx_stream; int unit; } ;
struct reg_params {int count; int size; } ;
struct fw_iso_resources {unsigned int channel; } ;
struct amdtp_stream {int dummy; } ;
typedef int reg ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int max_speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct amdtp_stream*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_dice*,scalar_t__,int *,int) ;
 int FUNC_4 (struct snd_dice*,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_5(struct snd_dice *VAR_4, enum amdtp_stream_direction VAR_5,
    unsigned int VAR_6, struct reg_params *VAR_7)
{
 unsigned int VAR_8 = FUNC_2(VAR_4->unit)->max_speed;
 int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  struct amdtp_stream *VAR_11;
  struct fw_iso_resources *VAR_12;
  __be32 VAR_13;

  if (VAR_5 == VAR_0) {
   VAR_11 = VAR_4->tx_stream + VAR_9;
   VAR_12 = VAR_4->tx_resources + VAR_9;
  } else {
   VAR_11 = VAR_4->rx_stream + VAR_9;
   VAR_12 = VAR_4->rx_resources + VAR_9;
  }

  VAR_13 = FUNC_1(VAR_12->channel);
  if (VAR_5 == VAR_0) {
   VAR_10 = FUNC_4(VAR_4,
     VAR_7->size * VAR_9 + VAR_2,
     &VAR_13, sizeof(VAR_13));
  } else {
   VAR_10 = FUNC_3(VAR_4,
     VAR_7->size * VAR_9 + VAR_1,
     &VAR_13, sizeof(VAR_13));
  }
  if (VAR_10 < 0)
   return VAR_10;

  if (VAR_5 == VAR_0) {
   VAR_13 = FUNC_1(VAR_8);
   VAR_10 = FUNC_4(VAR_4,
     VAR_7->size * VAR_9 + VAR_3,
     &VAR_13, sizeof(VAR_13));
   if (VAR_10 < 0)
    return VAR_10;
  }

  VAR_10 = FUNC_0(&VAR_4->domain, VAR_11,
           VAR_12->channel, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
