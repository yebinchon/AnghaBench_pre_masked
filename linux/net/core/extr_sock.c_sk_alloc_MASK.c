
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_family; int sk_kern_sock; int sk_net_refcnt; int sk_cgrp_data; int sk_wmem_alloc; struct proto* sk_prot_creator; struct proto* sk_prot; } ;
struct proto {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int) ;
 struct sock* FUNC_5 (struct proto*,int,int) ;
 int FUNC_6 (struct net*,int) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct net*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct sock *FUNC_11(struct net *VAR_1, int VAR_2, gfp_t VAR_3,
        struct proto *VAR_4, int VAR_5)
{
 struct sock *VAR_6;

 VAR_6 = FUNC_5(VAR_4, VAR_3 | VAR_0, VAR_2);
 if (VAR_6) {
  VAR_6->sk_family = VAR_2;




  VAR_6->sk_prot = VAR_6->sk_prot_creator = VAR_4;
  VAR_6->sk_kern_sock = VAR_5;
  FUNC_7(VAR_6);
  VAR_6->sk_net_refcnt = VAR_5 ? 0 : 1;
  if (FUNC_2(VAR_6->sk_net_refcnt)) {
   FUNC_1(VAR_1);
   FUNC_6(VAR_1, 1);
  }

  FUNC_8(VAR_6, VAR_1);
  FUNC_4(&VAR_6->sk_wmem_alloc, 1);

  FUNC_3(VAR_6);
  FUNC_0(&VAR_6->sk_cgrp_data);
  FUNC_9(&VAR_6->sk_cgrp_data);
  FUNC_10(&VAR_6->sk_cgrp_data);
 }

 return VAR_6;
}
