
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct snd_usb_midi_in_endpoint {TYPE_1__** urbs; struct snd_usb_midi* umidi; } ;
struct snd_usb_midi_endpoint_info {int in_ep; int in_interval; } ;
struct snd_usb_midi_endpoint {struct snd_usb_midi_in_endpoint* in; } ;
struct snd_usb_midi {TYPE_2__* dev; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct snd_usb_midi_in_endpoint* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_usb_midi_in_endpoint*) ;
 int VAR_4 ;
 void* FUNC_3 (TYPE_2__*,int,int ,int *) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,unsigned int,void*,int,int ,struct snd_usb_midi_in_endpoint*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,unsigned int,void*,int,int ,struct snd_usb_midi_in_endpoint*,int ) ;
 int FUNC_7 (TYPE_2__*,unsigned int,int ) ;
 unsigned int FUNC_8 (TYPE_2__*,int ) ;
 unsigned int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct snd_usb_midi *VAR_5,
       struct snd_usb_midi_endpoint_info *VAR_6,
       struct snd_usb_midi_endpoint *VAR_7)
{
 struct snd_usb_midi_in_endpoint *VAR_8;
 void *VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_7->in = ((void*)0);
 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->umidi = VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_8->urbs[VAR_12] = FUNC_4(0, VAR_1);
  if (!VAR_8->urbs[VAR_12]) {
   VAR_13 = -VAR_0;
   goto error;
  }
 }
 if (VAR_6->in_interval)
  VAR_10 = FUNC_9(VAR_5->dev, VAR_6->in_ep);
 else
  VAR_10 = FUNC_8(VAR_5->dev, VAR_6->in_ep);
 VAR_11 = FUNC_7(VAR_5->dev, VAR_10, 0);
 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_9 = FUNC_3(VAR_5->dev, VAR_11, VAR_1,
         &VAR_8->urbs[VAR_12]->transfer_dma);
  if (!VAR_9) {
   VAR_13 = -VAR_0;
   goto error;
  }
  if (VAR_6->in_interval)
   FUNC_6(VAR_8->urbs[VAR_12], VAR_5->dev,
      VAR_10, VAR_9, VAR_11,
      VAR_4,
      VAR_8, VAR_6->in_interval);
  else
   FUNC_5(VAR_8->urbs[VAR_12], VAR_5->dev,
       VAR_10, VAR_9, VAR_11,
       VAR_4, VAR_8);
  VAR_8->urbs[VAR_12]->transfer_flags = VAR_3;
  VAR_13 = FUNC_10(VAR_8->urbs[VAR_12]);
  if (VAR_13 < 0) {
   FUNC_0(&VAR_5->dev->dev, "invalid MIDI in EP %x\n",
    VAR_6->in_ep);
   goto error;
  }
 }

 VAR_7->in = VAR_8;
 return 0;

 error:
 FUNC_2(VAR_8);
 return -VAR_0;
}
