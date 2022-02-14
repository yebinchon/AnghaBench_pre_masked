
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int interval; int complete; struct snd_usX2Y_substream* context; int number_of_packets; struct usb_device* dev; int * transfer_buffer; } ;
struct snd_usX2Y_substream {int maxpacksize; struct urb** urb; int * tmpbuf; int endpoint; TYPE_1__* usX2Y; } ;
struct TYPE_2__ {struct usb_device* dev; struct snd_usX2Y_substream** subs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_usX2Y_substream*) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct usb_device*,unsigned int,int) ;
 unsigned int FUNC_7 (struct usb_device*,int ) ;
 unsigned int FUNC_8 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_usX2Y_substream *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = VAR_6 == VAR_6->usX2Y->subs[VAR_4];
 struct usb_device *VAR_10 = VAR_6->usX2Y->dev;

 VAR_8 = VAR_9 ? FUNC_8(VAR_10, VAR_6->endpoint) :
   FUNC_7(VAR_10, VAR_6->endpoint);
 VAR_6->maxpacksize = FUNC_6(VAR_10, VAR_8, VAR_9);
 if (!VAR_6->maxpacksize)
  return -VAR_0;

 if (VAR_9 && ((void*)0) == VAR_6->tmpbuf) {
  VAR_6->tmpbuf = FUNC_0(FUNC_2(), VAR_6->maxpacksize, VAR_2);
  if (!VAR_6->tmpbuf)
   return -VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct urb **VAR_11 = VAR_6->urb + VAR_7;
  if (*VAR_11) {
   FUNC_5(*VAR_11);
   continue;
  }
  *VAR_11 = FUNC_4(FUNC_2(), VAR_2);
  if (((void*)0) == *VAR_11) {
   FUNC_3(VAR_6);
   return -VAR_1;
  }
  if (!VAR_9 && !(*VAR_11)->transfer_buffer) {

   (*VAR_11)->transfer_buffer =
    FUNC_1(VAR_6->maxpacksize,
           FUNC_2(), VAR_2);
   if (((void*)0) == (*VAR_11)->transfer_buffer) {
    FUNC_3(VAR_6);
    return -VAR_1;
   }
  }
  (*VAR_11)->dev = VAR_10;
  (*VAR_11)->pipe = VAR_8;
  (*VAR_11)->number_of_packets = FUNC_2();
  (*VAR_11)->context = VAR_6;
  (*VAR_11)->interval = 1;
  (*VAR_11)->complete = VAR_5;
 }
 return 0;
}
