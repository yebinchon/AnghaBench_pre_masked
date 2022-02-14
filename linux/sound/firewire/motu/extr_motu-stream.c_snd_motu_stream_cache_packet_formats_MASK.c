
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int midi_flag_offset; int midi_byte_offset; } ;
struct TYPE_6__ {int midi_flag_offset; int midi_byte_offset; } ;
struct snd_motu {TYPE_4__ rx_packet_formats; TYPE_3__* spec; TYPE_2__ tx_packet_formats; } ;
struct TYPE_7__ {int flags; TYPE_1__* protocol; } ;
struct TYPE_5__ {int (* cache_packet_formats ) (struct snd_motu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_motu*) ;

int FUNC_1(struct snd_motu *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->spec->protocol->cache_packet_formats(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4->spec->flags & VAR_2) {
  VAR_4->tx_packet_formats.midi_flag_offset = 4;
  VAR_4->tx_packet_formats.midi_byte_offset = 6;
 } else if (VAR_4->spec->flags & VAR_3) {
  VAR_4->tx_packet_formats.midi_flag_offset = 8;
  VAR_4->tx_packet_formats.midi_byte_offset = 7;
 }

 if (VAR_4->spec->flags & VAR_0) {
  VAR_4->rx_packet_formats.midi_flag_offset = 4;
  VAR_4->rx_packet_formats.midi_byte_offset = 6;
 } else if (VAR_4->spec->flags & VAR_1) {
  VAR_4->rx_packet_formats.midi_flag_offset = 8;
  VAR_4->rx_packet_formats.midi_byte_offset = 7;
 }

 return 0;
}
