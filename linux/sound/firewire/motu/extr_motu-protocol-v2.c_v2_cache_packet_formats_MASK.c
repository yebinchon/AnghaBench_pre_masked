
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int pcm_byte_offset; } ;
struct snd_motu {TYPE_2__ rx_packet_formats; TYPE_2__ tx_packet_formats; TYPE_1__* spec; } ;
typedef int reg ;
typedef int __be32 ;
struct TYPE_4__ {int flags; int analog_out_ports; int analog_in_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_motu *VAR_7)
{
 __be32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_2, &VAR_8,
     sizeof(VAR_8));
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 = FUNC_0(VAR_8);

 FUNC_2(&VAR_7->tx_packet_formats, VAR_0,
        VAR_7->spec->flags, VAR_7->spec->analog_in_ports);
 FUNC_1(&VAR_7->tx_packet_formats, VAR_7->spec->flags,
   VAR_9, VAR_3, VAR_4);

 FUNC_2(&VAR_7->rx_packet_formats, VAR_1,
        VAR_7->spec->flags, VAR_7->spec->analog_out_ports);
 FUNC_1(&VAR_7->rx_packet_formats, VAR_7->spec->flags,
   VAR_9, VAR_5, VAR_6);

 VAR_7->tx_packet_formats.pcm_byte_offset = 10;
 VAR_7->rx_packet_formats.pcm_byte_offset = 10;

 return 0;
}
