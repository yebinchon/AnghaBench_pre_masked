
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct snd_usb_endpoint {unsigned int nurbs; TYPE_1__* urb; int unlink_mask; int active_mask; scalar_t__ next_packet_write_pos; scalar_t__ next_packet_read_pos; int ready_playback_urbs; int flags; TYPE_2__* chip; } ;
struct TYPE_4__ {int shutdown; } ;
struct TYPE_3__ {struct urb* urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static int FUNC_6(struct snd_usb_endpoint *VAR_2, bool VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_3 && FUNC_1(&VAR_2->chip->shutdown))
  return -VAR_0;

 FUNC_2(VAR_1, &VAR_2->flags);

 FUNC_0(&VAR_2->ready_playback_urbs);
 VAR_2->next_packet_read_pos = 0;
 VAR_2->next_packet_write_pos = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->nurbs; VAR_4++) {
  if (FUNC_4(VAR_4, &VAR_2->active_mask)) {
   if (!FUNC_3(VAR_4, &VAR_2->unlink_mask)) {
    struct urb *VAR_5 = VAR_2->urb[VAR_4].urb;
    FUNC_5(VAR_5);
   }
  }
 }

 return 0;
}
