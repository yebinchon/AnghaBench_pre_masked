
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__* differed_part_pcm_chunks; } ;
struct TYPE_4__ {scalar_t__* differed_part_pcm_chunks; } ;
struct snd_motu {int unit; TYPE_2__ rx_packet_formats; TYPE_1__ tx_packet_formats; } ;
typedef int reg ;
typedef int __be32 ;
struct TYPE_6__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;
 int FUNC_4 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct snd_motu *VAR_4)
{
 __be32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_0, &VAR_5,
     sizeof(VAR_5));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = FUNC_0(VAR_5);

 VAR_6 &= ~(VAR_2 |
    VAR_1|
    VAR_3);
 if (VAR_4->tx_packet_formats.differed_part_pcm_chunks[0] == 0)
  VAR_6 |= VAR_2;
 if (VAR_4->rx_packet_formats.differed_part_pcm_chunks[0] == 0)
  VAR_6 |= VAR_1;
 VAR_6 |= FUNC_2(VAR_4->unit)->max_speed;

 VAR_5 = FUNC_1(VAR_6);
 return FUNC_4(VAR_4, VAR_0, &VAR_5,
       sizeof(VAR_5));
}
