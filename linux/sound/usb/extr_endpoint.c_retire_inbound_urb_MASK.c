
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct snd_usb_endpoint {scalar_t__ skip_packets; int data_subs; int (* retire_data_urb ) (int ,struct urb*) ;scalar_t__ sync_slave; } ;
struct snd_urb_ctx {struct urb* urb; } ;


 int FUNC_0 (scalar_t__,struct snd_usb_endpoint*,struct urb*) ;
 int FUNC_1 (int ,struct urb*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_endpoint *VAR_0,
          struct snd_urb_ctx *VAR_1)
{
 struct urb *VAR_2 = VAR_1->urb;

 if (FUNC_2(VAR_0->skip_packets > 0)) {
  VAR_0->skip_packets--;
  return;
 }

 if (VAR_0->sync_slave)
  FUNC_0(VAR_0->sync_slave, VAR_0, VAR_2);

 if (VAR_0->retire_data_urb)
  VAR_0->retire_data_urb(VAR_0->data_subs, VAR_2);
}
