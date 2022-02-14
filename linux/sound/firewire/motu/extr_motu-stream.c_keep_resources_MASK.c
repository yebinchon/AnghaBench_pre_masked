
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_motu_packet_format {int dummy; } ;
struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_motu {int unit; TYPE_1__* spec; struct snd_motu_packet_format tx_packet_formats; struct fw_iso_resources tx_resources; struct snd_motu_packet_format rx_packet_formats; struct fw_iso_resources rx_resources; struct amdtp_stream rx_stream; } ;
struct TYPE_4__ {int max_speed; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdtp_stream*,unsigned int,unsigned int,struct snd_motu_packet_format*) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct fw_iso_resources*,int ,int ) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_motu *VAR_4, unsigned int VAR_5,
     struct amdtp_stream *VAR_6)
{
 struct fw_iso_resources *VAR_7;
 struct snd_motu_packet_format *VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 if (VAR_6 == &VAR_4->rx_stream) {
  VAR_7 = &VAR_4->rx_resources;
  VAR_8 = &VAR_4->rx_packet_formats;

  if ((VAR_4->spec->flags & VAR_0) ||
      (VAR_4->spec->flags & VAR_1))
   VAR_9 = 1;
 } else {
  VAR_7 = &VAR_4->tx_resources;
  VAR_8 = &VAR_4->tx_packet_formats;

  if ((VAR_4->spec->flags & VAR_2) ||
      (VAR_4->spec->flags & VAR_3))
   VAR_9 = 1;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_5, VAR_9,
     VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_2(VAR_7,
    FUNC_1(VAR_6),
    FUNC_3(VAR_4->unit)->max_speed);
}
