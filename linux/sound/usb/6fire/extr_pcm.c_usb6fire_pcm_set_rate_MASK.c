
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_runtime {size_t rate; int out_packet_size; int in_packet_size; int out_n_analog; int in_n_analog; TYPE_2__* chip; } ;
struct control_runtime {int usb_streaming; int (* update_streaming ) (struct control_runtime*) ;int (* set_rate ) (struct control_runtime*,size_t) ;int (* set_channels ) (struct control_runtime*,int ,int ,int,int) ;} ;
struct TYPE_4__ {TYPE_1__* dev; struct control_runtime* control; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct control_runtime*) ;
 int FUNC_2 (struct control_runtime*,size_t) ;
 int FUNC_3 (struct control_runtime*,int ,int ,int,int) ;
 int FUNC_4 (struct control_runtime*) ;

__attribute__((used)) static int FUNC_5(struct pcm_runtime *VAR_5)
{
 int VAR_6;
 struct control_runtime *VAR_7 = VAR_5->chip->control;

 VAR_7->usb_streaming = 0;
 VAR_6 = VAR_7->update_streaming(VAR_7);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->chip->dev->dev,
   "error stopping streaming while setting samplerate %d.\n",
   VAR_2[VAR_5->rate]);
  return VAR_6;
 }

 VAR_6 = VAR_7->set_rate(VAR_7, VAR_5->rate);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->chip->dev->dev,
   "error setting samplerate %d.\n",
   VAR_2[VAR_5->rate]);
  return VAR_6;
 }

 VAR_6 = VAR_7->set_channels(VAR_7, VAR_1, VAR_0,
   0, 0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->chip->dev->dev,
   "error initializing channels while setting samplerate %d.\n",
   VAR_2[VAR_5->rate]);
  return VAR_6;
 }

 VAR_7->usb_streaming = 1;
 VAR_6 = VAR_7->update_streaming(VAR_7);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->chip->dev->dev,
   "error starting streaming while setting samplerate %d.\n",
   VAR_2[VAR_5->rate]);
  return VAR_6;
 }

 VAR_5->in_n_analog = VAR_0;
 VAR_5->out_n_analog = VAR_1;
 VAR_5->in_packet_size = VAR_3[VAR_5->rate];
 VAR_5->out_packet_size = VAR_4[VAR_5->rate];
 return 0;
}
