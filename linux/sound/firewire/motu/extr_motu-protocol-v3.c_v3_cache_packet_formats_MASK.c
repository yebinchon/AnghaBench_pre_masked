
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (struct snd_motu*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_motu *VAR_11)
{
 __be32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_10, &VAR_12,
     sizeof(VAR_12));
 if (VAR_14 < 0)
  return VAR_14;
 VAR_13 = FUNC_0(VAR_12);

 FUNC_2(&VAR_11->tx_packet_formats, VAR_0,
        VAR_11->spec->flags, VAR_11->spec->analog_in_ports);
 FUNC_1(&VAR_11->tx_packet_formats,
   VAR_11->spec->flags, VAR_13,
   VAR_2, VAR_6,
   VAR_3, VAR_7);

 FUNC_2(&VAR_11->rx_packet_formats, VAR_1,
        VAR_11->spec->flags, VAR_11->spec->analog_out_ports);
 FUNC_1(&VAR_11->rx_packet_formats,
   VAR_11->spec->flags, VAR_13,
   VAR_4, VAR_8,
   VAR_5, VAR_9);

 VAR_11->tx_packet_formats.pcm_byte_offset = 10;
 VAR_11->rx_packet_formats.pcm_byte_offset = 10;

 return 0;
}
