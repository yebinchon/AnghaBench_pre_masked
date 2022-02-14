
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; TYPE_1__* dev; int tstamp; scalar_t__ data; } ;
struct canfd_frame {scalar_t__ can_id; } ;
struct bcm_op {scalar_t__ can_id; unsigned int cfsiz; int flags; int nframes; struct canfd_frame const* frames; int last_frames; int frames_abs; int rx_ifindex; int rx_stamp; int timer; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_op*) ;
 int FUNC_1 (struct bcm_op*,unsigned int,struct canfd_frame const*) ;
 int FUNC_2 (struct bcm_op*) ;
 int FUNC_3 (struct bcm_op*,int ,struct canfd_frame const*) ;
 int FUNC_4 (struct canfd_frame const*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2, void *VAR_3)
{
 struct bcm_op *VAR_4 = (struct bcm_op *)VAR_3;
 const struct canfd_frame *VAR_5 = (struct canfd_frame *)VAR_2->data;
 unsigned int VAR_6;

 if (VAR_4->can_id != VAR_5->can_id)
  return;


 if (VAR_2->len != VAR_4->cfsiz)
  return;


 FUNC_5(&VAR_4->timer);


 VAR_4->rx_stamp = VAR_2->tstamp;

 VAR_4->rx_ifindex = VAR_2->dev->ifindex;

 VAR_4->frames_abs++;

 if (VAR_4->flags & VAR_1) {

  FUNC_0(VAR_4);
  return;
 }

 if (VAR_4->flags & VAR_0) {

  FUNC_3(VAR_4, VAR_4->last_frames, VAR_5);
  goto rx_starttimer;
 }

 if (VAR_4->nframes == 1) {

  FUNC_1(VAR_4, 0, VAR_5);
  goto rx_starttimer;
 }

 if (VAR_4->nframes > 1) {
  for (VAR_6 = 1; VAR_6 < VAR_4->nframes; VAR_6++) {
   if ((FUNC_4(VAR_4->frames, 0) & FUNC_4(VAR_5, 0)) ==
       (FUNC_4(VAR_4->frames, 0) &
        FUNC_4(VAR_4->frames + VAR_4->cfsiz * VAR_6, 0))) {
    FUNC_1(VAR_4, VAR_6, VAR_5);
    break;
   }
  }
 }

rx_starttimer:
 FUNC_2(VAR_4);
}
