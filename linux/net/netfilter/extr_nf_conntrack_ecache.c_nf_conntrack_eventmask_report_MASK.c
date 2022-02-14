
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nf_ct_event_notifier {int (* fcn ) (unsigned int,struct nf_ct_event*) ;} ;
struct nf_ct_event {scalar_t__ portid; int report; struct nf_conn* ct; } ;
struct nf_conntrack_ecache {scalar_t__ portid; unsigned long missed; unsigned int ctmask; int state; } ;
struct nf_conn {int lock; } ;
struct TYPE_2__ {int nf_conntrack_event_cb; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conntrack_ecache* FUNC_0 (struct nf_conn*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 struct net* FUNC_2 (struct nf_conn*) ;
 struct nf_ct_event_notifier* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,struct nf_ct_event*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(unsigned int VAR_2, struct nf_conn *VAR_3,
      u32 VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct net *VAR_7 = FUNC_2(VAR_3);
 struct nf_ct_event_notifier *VAR_8;
 struct nf_conntrack_ecache *VAR_9;

 FUNC_4();
 VAR_8 = FUNC_3(VAR_7->ct.nf_conntrack_event_cb);
 if (!VAR_8)
  goto out_unlock;

 VAR_9 = FUNC_0(VAR_3);
 if (!VAR_9)
  goto out_unlock;

 if (FUNC_1(VAR_3)) {
  struct nf_ct_event VAR_10 = {
   .ct = VAR_3,
   .portid = VAR_9->portid ? VAR_9->portid : VAR_4,
   .report = VAR_5
  };

  unsigned long VAR_11 = VAR_9->portid ? 0 : VAR_9->missed;

  if (!((VAR_2 | VAR_11) & VAR_9->ctmask))
   goto out_unlock;

  VAR_6 = VAR_8->fcn(VAR_2 | VAR_11, &VAR_10);
  if (FUNC_9(VAR_6 < 0 || VAR_11)) {
   FUNC_6(&VAR_3->lock);
   if (VAR_6 < 0) {




    if (VAR_2 & (1 << VAR_0)) {
     if (VAR_9->portid == 0 && VAR_4 != 0)
      VAR_9->portid = VAR_4;
     VAR_9->state = VAR_1;
    } else {
     VAR_9->missed |= VAR_2;
    }
   } else {
    VAR_9->missed &= ~VAR_11;
   }
   FUNC_7(&VAR_3->lock);
  }
 }
out_unlock:
 FUNC_5();
 return VAR_6;
}
