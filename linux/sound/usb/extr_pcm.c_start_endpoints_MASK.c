
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_substream {int flags; struct snd_usb_endpoint* data_endpoint; TYPE_1__* dev; struct snd_usb_endpoint* sync_endpoint; } ;
struct snd_usb_endpoint {scalar_t__ iface; scalar_t__ altsetting; struct snd_usb_endpoint* sync_slave; struct snd_usb_substream* data_subs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,struct snd_usb_endpoint*) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (struct snd_usb_endpoint*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_usb_substream *VAR_4)
{
 int VAR_5;

 if (!VAR_4->data_endpoint)
  return -VAR_0;

 if (!FUNC_4(VAR_2, &VAR_4->flags)) {
  struct snd_usb_endpoint *VAR_6 = VAR_4->data_endpoint;

  FUNC_1(&VAR_4->dev->dev, "Starting data EP @%p\n", VAR_6);

  VAR_6->data_subs = VAR_4;
  VAR_5 = FUNC_3(VAR_6);
  if (VAR_5 < 0) {
   FUNC_0(VAR_2, &VAR_4->flags);
   return VAR_5;
  }
 }

 if (VAR_4->sync_endpoint &&
     !FUNC_4(VAR_3, &VAR_4->flags)) {
  struct snd_usb_endpoint *VAR_7 = VAR_4->sync_endpoint;

  if (VAR_4->data_endpoint->iface != VAR_4->sync_endpoint->iface ||
      VAR_4->data_endpoint->altsetting != VAR_4->sync_endpoint->altsetting) {
   VAR_5 = FUNC_5(VAR_4->dev,
      VAR_4->sync_endpoint->iface,
      VAR_4->sync_endpoint->altsetting);
   if (VAR_5 < 0) {
    FUNC_0(VAR_3, &VAR_4->flags);
    FUNC_2(&VAR_4->dev->dev,
        "%d:%d: cannot set interface (%d)\n",
        VAR_4->sync_endpoint->iface,
        VAR_4->sync_endpoint->altsetting, VAR_5);
    return -VAR_1;
   }
  }

  FUNC_1(&VAR_4->dev->dev, "Starting sync EP @%p\n", VAR_7);

  VAR_7->sync_slave = VAR_4->data_endpoint;
  VAR_5 = FUNC_3(VAR_7);
  if (VAR_5 < 0) {
   FUNC_0(VAR_3, &VAR_4->flags);
   return VAR_5;
  }
 }

 return 0;
}
