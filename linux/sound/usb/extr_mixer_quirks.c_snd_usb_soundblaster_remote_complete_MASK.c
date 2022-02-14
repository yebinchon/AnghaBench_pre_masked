
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_mixer_interface {int* rc_buffer; int rc_code; int rc_waitq; struct rc_config* rc_cfg; } ;
struct urb {scalar_t__ status; scalar_t__ actual_length; struct usb_mixer_interface* context; } ;
struct rc_config {scalar_t__ min_packet_length; size_t offset; int length; int mute_code; int mute_mixer_id; } ;


 int FUNC_0 (struct usb_mixer_interface*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct usb_mixer_interface *VAR_1 = VAR_0->context;
 const struct rc_config *VAR_2 = VAR_1->rc_cfg;
 u32 VAR_3;

 if (VAR_0->status < 0 || VAR_0->actual_length < VAR_2->min_packet_length)
  return;

 VAR_3 = VAR_1->rc_buffer[VAR_2->offset];
 if (VAR_2->length == 2)
  VAR_3 |= VAR_1->rc_buffer[VAR_2->offset + 1] << 8;


 if (VAR_3 == VAR_2->mute_code)
  FUNC_0(VAR_1, VAR_2->mute_mixer_id);
 VAR_1->rc_code = VAR_3;
 FUNC_2();
 FUNC_1(&VAR_1->rc_waitq);
}
