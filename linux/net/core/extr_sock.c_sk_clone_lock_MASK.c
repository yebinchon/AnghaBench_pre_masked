
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int * tail; int head; } ;
struct sock {int sk_userlocks; int sk_flags; TYPE_2__* sk_prot; int sk_wq; int sk_refcnt; int sk_net_refcnt; int sk_incoming_cpu; scalar_t__ sk_priority; scalar_t__ sk_err_soft; scalar_t__ sk_err; int sk_reuseport_cb; int sk_filter; int sk_cgrp_data; int sk_zckey; int * sk_send_head; int sk_drops; scalar_t__ sk_forward_alloc; scalar_t__ sk_wmem_queued; scalar_t__ sk_dst_pending_confirm; int * sk_dst_cache; int sk_omem_alloc; int sk_wmem_alloc; int sk_rmem_alloc; TYPE_1__ sk_backlog; int sk_node; TYPE_2__* sk_prot_creator; int sk_family; } ;
struct sk_filter {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {scalar_t__ sockets_allocated; } ;


 int FUNC_0 (int ,struct sk_filter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock const*,struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct sk_filter* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct sock*,struct sk_filter*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int *) ;
 struct sock* FUNC_18 (TYPE_2__*,int const,int ) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int *) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 () ;
 int FUNC_23 (struct sock*,struct sock const*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (struct sock*) ;
 scalar_t__ FUNC_26 (struct sock const*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*,int ) ;
 scalar_t__ FUNC_29 (int) ;
 scalar_t__ FUNC_30 (struct sock*,struct sock const*) ;

struct sock *FUNC_31(const struct sock *VAR_3, const gfp_t VAR_4)
{
 struct sock *VAR_5;
 bool VAR_6 = 1;

 VAR_5 = FUNC_18(VAR_3->sk_prot, VAR_4, VAR_3->sk_family);
 if (VAR_5 != ((void*)0)) {
  struct sk_filter *VAR_7;

  FUNC_23(VAR_5, VAR_3);

  VAR_5->sk_prot_creator = VAR_3->sk_prot;


  if (FUNC_6(VAR_5->sk_net_refcnt))
   FUNC_5(FUNC_27(VAR_5));
  FUNC_17(&VAR_5->sk_node);
  FUNC_25(VAR_5);
  FUNC_2(VAR_5);
  VAR_5->sk_backlog.head = *(VAR_5->sk_backlog.tail = ((void*)0));
  VAR_5->sk_backlog.len = 0;

  FUNC_1(&VAR_5->sk_rmem_alloc, 0);



  FUNC_13(&VAR_5->sk_wmem_alloc, 1);
  FUNC_1(&VAR_5->sk_omem_alloc, 0);
  FUNC_16(VAR_5);

  VAR_5->sk_dst_cache = ((void*)0);
  VAR_5->sk_dst_pending_confirm = 0;
  VAR_5->sk_wmem_queued = 0;
  VAR_5->sk_forward_alloc = 0;
  FUNC_1(&VAR_5->sk_drops, 0);
  VAR_5->sk_send_head = ((void*)0);
  VAR_5->sk_userlocks = VAR_3->sk_userlocks & ~VAR_1;
  FUNC_1(&VAR_5->sk_zckey, 0);

  FUNC_28(VAR_5, VAR_2);
  FUNC_7(VAR_5);
  FUNC_4(&VAR_5->sk_cgrp_data);

  FUNC_11();
  VAR_7 = FUNC_10(VAR_3->sk_filter);
  if (VAR_7 != ((void*)0))




   VAR_6 = FUNC_14(VAR_5, VAR_7);
  FUNC_0(VAR_5->sk_filter, VAR_7);
  FUNC_12();

  if (FUNC_29(!VAR_6 || FUNC_30(VAR_5, VAR_3))) {




   if (!VAR_6)
    FUNC_0(VAR_5->sk_filter, ((void*)0));
   FUNC_15(VAR_5);
   VAR_5 = ((void*)0);
   goto out;
  }
  FUNC_0(VAR_5->sk_reuseport_cb, ((void*)0));

  if (FUNC_3(VAR_3, VAR_5)) {
   FUNC_15(VAR_5);
   VAR_5 = ((void*)0);
   goto out;
  }

  VAR_5->sk_err = 0;
  VAR_5->sk_err_soft = 0;
  VAR_5->sk_priority = 0;
  VAR_5->sk_incoming_cpu = FUNC_9();
  if (FUNC_6(VAR_5->sk_net_refcnt))
   FUNC_24(FUNC_27(VAR_5), 1);





  FUNC_22();
  FUNC_13(&VAR_5->sk_refcnt, 2);
  FUNC_19(VAR_5);
  FUNC_20(VAR_5, ((void*)0));
  FUNC_0(VAR_5->sk_wq, ((void*)0));

  if (VAR_5->sk_prot->sockets_allocated)
   FUNC_21(VAR_5);

  if (FUNC_26(VAR_3) &&
      VAR_5->sk_flags & VAR_0)
   FUNC_8();
 }
out:
 return VAR_5;
}
