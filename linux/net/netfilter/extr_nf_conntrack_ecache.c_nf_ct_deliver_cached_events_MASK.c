
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_ct_event_notifier {int (* fcn ) (unsigned long,struct nf_ct_event*) ;} ;
struct nf_ct_event {scalar_t__ report; scalar_t__ portid; struct nf_conn* ct; } ;
struct nf_conntrack_ecache {unsigned long missed; unsigned long ctmask; int cache; } ;
struct nf_conn {int lock; } ;
struct TYPE_2__ {int nf_conntrack_event_cb; } ;
struct net {TYPE_1__ ct; } ;


 scalar_t__ FUNC_0 (int) ;
 struct nf_conntrack_ecache* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct nf_conn*) ;
 struct net* FUNC_4 (struct nf_conn*) ;
 struct nf_ct_event_notifier* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned long,struct nf_ct_event*) ;
 unsigned long FUNC_11 (int *,int ) ;

void FUNC_12(struct nf_conn *VAR_0)
{
 struct net *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2, VAR_3;
 struct nf_ct_event_notifier *VAR_4;
 struct nf_conntrack_ecache *VAR_5;
 struct nf_ct_event VAR_6;
 int VAR_7;

 FUNC_6();
 VAR_4 = FUNC_5(VAR_1->ct.nf_conntrack_event_cb);
 if (VAR_4 == ((void*)0))
  goto out_unlock;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 == ((void*)0))
  goto out_unlock;

 VAR_2 = FUNC_11(&VAR_5->cache, 0);

 if (!FUNC_2(VAR_0) || FUNC_3(VAR_0))
  goto out_unlock;




 VAR_3 = VAR_5->missed;

 if (!((VAR_2 | VAR_3) & VAR_5->ctmask))
  goto out_unlock;

 VAR_6.ct = VAR_0;
 VAR_6.portid = 0;
 VAR_6.report = 0;

 VAR_7 = VAR_4->fcn(VAR_2 | VAR_3, &VAR_6);

 if (FUNC_0(VAR_7 == 0 && !VAR_3))
  goto out_unlock;

 FUNC_8(&VAR_0->lock);
 if (VAR_7 < 0)
  VAR_5->missed |= VAR_2;
 else
  VAR_5->missed &= ~VAR_3;
 FUNC_9(&VAR_0->lock);

out_unlock:
 FUNC_7();
}
