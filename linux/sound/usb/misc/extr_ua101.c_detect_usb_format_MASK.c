
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct uac_format_type_i_discrete_descriptor {int bSubframeSize; int bBitResolution; int bNrChannels; int * tSamFreq; } ;
struct TYPE_11__ {int channels; int frame_bytes; void* max_packet_bytes; int usb_pipe; } ;
struct TYPE_8__ {int channels; int frame_bytes; void* max_packet_bytes; int usb_pipe; } ;
struct ua101 {unsigned int rate; int packets_per_second; TYPE_4__ playback; TYPE_5__* dev; TYPE_7__** intf; TYPE_1__ capture; int format_bit; } ;
struct TYPE_13__ {TYPE_3__* altsetting; } ;
struct TYPE_12__ {int speed; int dev; } ;
struct TYPE_10__ {TYPE_2__* endpoint; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 struct uac_format_type_i_discrete_descriptor* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct usb_endpoint_descriptor const*) ;
 int FUNC_4 (struct usb_endpoint_descriptor const*) ;
 void* FUNC_5 (struct usb_endpoint_descriptor const*) ;
 int FUNC_6 (struct usb_endpoint_descriptor const*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_9(struct ua101 *VAR_5)
{
 const struct uac_format_type_i_discrete_descriptor *VAR_6;
 const struct uac_format_type_i_discrete_descriptor *VAR_7;
 const struct usb_endpoint_descriptor *VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_2(VAR_5->intf[VAR_1]);
 VAR_7 = FUNC_2(VAR_5->intf[VAR_2]);
 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 switch (VAR_6->bSubframeSize) {
 case 3:
  VAR_5->format_bit = VAR_3;
  break;
 case 4:
  VAR_5->format_bit = VAR_4;
  break;
 default:
  FUNC_1(&VAR_5->dev->dev, "sample width is not 24 or 32 bits\n");
  return -VAR_0;
 }
 if (VAR_6->bSubframeSize != VAR_7->bSubframeSize) {
  FUNC_1(&VAR_5->dev->dev,
   "playback/capture sample widths do not match\n");
  return -VAR_0;
 }

 if (VAR_6->bBitResolution != 24 ||
     VAR_7->bBitResolution != 24) {
  FUNC_1(&VAR_5->dev->dev, "sample width is not 24 bits\n");
  return -VAR_0;
 }

 VAR_5->rate = FUNC_0(VAR_6->tSamFreq[0]);
 VAR_9 = FUNC_0(VAR_7->tSamFreq[0]);
 if (VAR_5->rate != VAR_9) {
  FUNC_1(&VAR_5->dev->dev,
   "playback/capture rates do not match: %u/%u\n",
   VAR_9, VAR_5->rate);
  return -VAR_0;
 }

 switch (VAR_5->dev->speed) {
 case 129:
  VAR_5->packets_per_second = 1000;
  break;
 case 128:
  VAR_5->packets_per_second = 8000;
  break;
 default:
  FUNC_1(&VAR_5->dev->dev, "unknown device speed\n");
  return -VAR_0;
 }

 VAR_5->capture.channels = VAR_6->bNrChannels;
 VAR_5->playback.channels = VAR_7->bNrChannels;
 VAR_5->capture.frame_bytes =
  VAR_6->bSubframeSize * VAR_5->capture.channels;
 VAR_5->playback.frame_bytes =
  VAR_7->bSubframeSize * VAR_5->playback.channels;

 VAR_8 = &VAR_5->intf[VAR_1]->altsetting[1].endpoint[0].desc;
 if (!FUNC_3(VAR_8)) {
  FUNC_1(&VAR_5->dev->dev, "invalid capture endpoint\n");
  return -VAR_0;
 }
 VAR_5->capture.usb_pipe = FUNC_7(VAR_5->dev, FUNC_6(VAR_8));
 VAR_5->capture.max_packet_bytes = FUNC_5(VAR_8);

 VAR_8 = &VAR_5->intf[VAR_2]->altsetting[1].endpoint[0].desc;
 if (!FUNC_4(VAR_8)) {
  FUNC_1(&VAR_5->dev->dev, "invalid playback endpoint\n");
  return -VAR_0;
 }
 VAR_5->playback.usb_pipe = FUNC_8(VAR_5->dev, FUNC_6(VAR_8));
 VAR_5->playback.max_packet_bytes = FUNC_5(VAR_8);
 return 0;
}
