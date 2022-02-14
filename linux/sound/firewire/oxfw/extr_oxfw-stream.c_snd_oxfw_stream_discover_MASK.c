
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct snd_oxfw_stream_formation {scalar_t__ midi; } ;
struct snd_oxfw {int midi_input_ports; int has_output; int midi_output_ports; scalar_t__** rx_stream_formats; scalar_t__** tx_stream_formats; TYPE_1__* unit; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int,int,int,scalar_t__*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct snd_oxfw*,int ,int ) ;
 int FUNC_3 (scalar_t__*,struct snd_oxfw_stream_formation*) ;

int FUNC_4(struct snd_oxfw *VAR_5)
{
 u8 VAR_6[VAR_2];
 struct snd_oxfw_stream_formation VAR_7;
 u8 *VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 VAR_10 = FUNC_0(VAR_5->unit, 0x1f, 0x07, 0x00, VAR_6);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_5->unit->device,
  "fail to get info for isoc/external in/out plugs: %d\n",
   VAR_10);
  goto end;
 } else if ((VAR_6[0] == 0) && (VAR_6[1] == 0)) {
  VAR_10 = -VAR_3;
  goto end;
 }


 if (VAR_6[1] > 0) {
  VAR_10 = FUNC_2(VAR_5, VAR_1, 0);
  if (VAR_10 < 0)
   goto end;

  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   VAR_8 = VAR_5->tx_stream_formats[VAR_9];
   if (VAR_8 == ((void*)0))
    continue;
   VAR_10 = FUNC_3(VAR_8, &VAR_7);
   if (VAR_10 < 0)
    continue;


   if (VAR_7.midi > 0)
    VAR_5->midi_input_ports = 1;
  }

  VAR_5->has_output = 1;
 }


 if (VAR_6[0] > 0) {
  VAR_10 = FUNC_2(VAR_5, VAR_0, 0);
  if (VAR_10 < 0)
   goto end;

  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   VAR_8 = VAR_5->rx_stream_formats[VAR_9];
   if (VAR_8 == ((void*)0))
    continue;
   VAR_10 = FUNC_3(VAR_8, &VAR_7);
   if (VAR_10 < 0)
    continue;


   if (VAR_7.midi > 0)
    VAR_5->midi_output_ports = 1;
  }
 }
end:
 return VAR_10;
}
