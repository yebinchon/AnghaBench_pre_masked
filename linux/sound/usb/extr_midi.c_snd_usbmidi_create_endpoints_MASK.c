
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_usb_midi_endpoint_info {int out_cables; int in_cables; } ;
struct snd_usb_midi {TYPE_5__* dev; TYPE_6__* endpoints; } ;
struct TYPE_13__ {TYPE_4__* in; TYPE_2__* out; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {TYPE_3__* ports; } ;
struct TYPE_10__ {int substream; } ;
struct TYPE_9__ {TYPE_1__* ports; } ;
struct TYPE_8__ {int substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,TYPE_6__*) ;
 int FUNC_2 (struct snd_usb_midi*,int ,int,int *) ;
 int FUNC_3 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_midi *VAR_3,
     struct snd_usb_midi_endpoint_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_4[VAR_5].out_cables) {
   VAR_7 = FUNC_3(VAR_3,
             &VAR_4[VAR_5],
             &VAR_3->endpoints[VAR_5]);
   if (VAR_7 < 0)
    return VAR_7;
  }
  if (VAR_4[VAR_5].in_cables) {
   VAR_7 = FUNC_1(VAR_3,
            &VAR_4[VAR_5],
            &VAR_3->endpoints[VAR_5]);
   if (VAR_7 < 0)
    return VAR_7;
  }

  for (VAR_6 = 0; VAR_6 < 0x10; ++VAR_6) {
   if (VAR_4[VAR_5].out_cables & (1 << VAR_6)) {
    FUNC_2(VAR_3,
          VAR_2,
          VAR_8,
          &VAR_3->endpoints[VAR_5].out->ports[VAR_6].substream);
    ++VAR_8;
   }
   if (VAR_4[VAR_5].in_cables & (1 << VAR_6)) {
    FUNC_2(VAR_3,
          VAR_1,
          VAR_9,
          &VAR_3->endpoints[VAR_5].in->ports[VAR_6].substream);
    ++VAR_9;
   }
  }
 }
 FUNC_0(&VAR_3->dev->dev, "created %d output and %d input ports\n",
      VAR_8, VAR_9);
 return 0;
}
