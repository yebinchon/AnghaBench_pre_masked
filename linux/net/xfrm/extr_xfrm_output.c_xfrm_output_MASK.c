
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; } ;
struct xfrm_state {TYPE_2__ xso; } ;
struct sock {int dummy; } ;
struct sk_buff {int encapsulation; scalar_t__ ip_summed; } ;
struct sec_path {int len; struct xfrm_state** xvec; int olen; } ;
struct net {int dummy; } ;
struct TYPE_8__ {struct xfrm_state* xfrm; int dev; } ;
struct TYPE_7__ {int gso_type; } ;
struct TYPE_5__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sec_path* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_4__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct xfrm_state*) ;
 int FUNC_10 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_12 (struct xfrm_state*) ;

int FUNC_13(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct net *VAR_7 = FUNC_1(FUNC_6(VAR_6)->dev);
 struct xfrm_state *VAR_8 = FUNC_6(VAR_6)->xfrm;
 int VAR_9;

 FUNC_3(VAR_6);

 if (FUNC_9(VAR_6, VAR_8)) {
  struct sec_path *VAR_10;

  VAR_10 = FUNC_4(VAR_6);
  if (!VAR_10) {
   FUNC_0(VAR_7, VAR_2);
   FUNC_2(VAR_6);
   return -VAR_1;
  }
  VAR_6->encapsulation = 1;

  VAR_10->olen++;
  VAR_10->xvec[VAR_10->len++] = VAR_8;
  FUNC_12(VAR_8);

  if (FUNC_7(VAR_6)) {
   FUNC_8(VAR_6)->gso_type |= VAR_4;

   return FUNC_10(VAR_7, VAR_5, VAR_6);
  }

  if (VAR_8->xso.dev && VAR_8->xso.dev->features & VAR_3)
   goto out;
 }

 if (FUNC_7(VAR_6))
  return FUNC_11(VAR_7, VAR_5, VAR_6);

 if (VAR_6->ip_summed == VAR_0) {
  VAR_9 = FUNC_5(VAR_6);
  if (VAR_9) {
   FUNC_0(VAR_7, VAR_2);
   FUNC_2(VAR_6);
   return VAR_9;
  }
 }

out:
 return FUNC_10(VAR_7, VAR_5, VAR_6);
}
