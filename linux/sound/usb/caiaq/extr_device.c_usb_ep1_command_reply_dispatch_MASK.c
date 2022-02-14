
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {unsigned char* transfer_buffer; int actual_length; int status; struct snd_usb_caiaqdev* context; TYPE_1__* dev; } ;
struct TYPE_7__ {scalar_t__ actual_length; } ;
struct TYPE_6__ {int usb_id; } ;
struct TYPE_8__ {int data_alignment; int num_midi_out; int num_midi_in; int num_analog_audio_out; int num_analog_audio_in; int fw_version; } ;
struct snd_usb_caiaqdev {unsigned char audio_parm_answer; TYPE_3__ ep1_in_urb; int ep1_wait_queue; TYPE_4__* control_state; TYPE_2__ chip; int spec_received; TYPE_4__ spec; } ;
struct device {int dummy; } ;
struct caiaq_device_spec {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_6 (struct snd_usb_caiaqdev*,unsigned char*,int) ;
 int FUNC_7 (struct snd_usb_caiaqdev*,unsigned char,unsigned char*,unsigned char) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10 (struct urb* VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->dev->dev;
 struct snd_usb_caiaqdev *VAR_6 = VAR_3->context;
 unsigned char *VAR_7 = VAR_3->transfer_buffer;

 if (VAR_3->status || !VAR_6) {
  FUNC_3(VAR_5, "received EP1 urb->status = %i\n", VAR_3->status);
  return;
 }

 switch(VAR_7[0]) {
 case 132:
   FUNC_5(&VAR_6->spec, VAR_7+1, sizeof(struct caiaq_device_spec));
  VAR_6->spec.fw_version = FUNC_4(VAR_6->spec.fw_version);
  FUNC_1(VAR_5, "device spec (firmware %d): audio: %d in, %d out, "
   "MIDI: %d in, %d out, data alignment %d\n",
   VAR_6->spec.fw_version,
   VAR_6->spec.num_analog_audio_in,
   VAR_6->spec.num_analog_audio_out,
   VAR_6->spec.num_midi_in,
   VAR_6->spec.num_midi_out,
   VAR_6->spec.data_alignment);

  VAR_6->spec_received++;
  FUNC_9(&VAR_6->ep1_wait_queue);
  break;
 case 133:
  VAR_6->audio_parm_answer = VAR_7[1];
  FUNC_9(&VAR_6->ep1_wait_queue);
  break;
 case 131:
  FUNC_7(VAR_6, VAR_7[1], VAR_7 + 3, VAR_7[2]);
  break;
 case 128:
  if (VAR_6->chip.usb_id ==
   FUNC_0(VAR_2, VAR_1)) {
   if (VAR_3->actual_length > sizeof(VAR_6->control_state))
    VAR_3->actual_length = sizeof(VAR_6->control_state);
   FUNC_5(VAR_6->control_state, VAR_7 + 1, VAR_3->actual_length);
   FUNC_9(&VAR_6->ep1_wait_queue);
   break;
  }






  break;
 }

 VAR_6->ep1_in_urb.actual_length = 0;
 VAR_4 = FUNC_8(&VAR_6->ep1_in_urb, VAR_0);
 if (VAR_4 < 0)
  FUNC_2(VAR_5, "unable to submit urb. OOM!?\n");
}
