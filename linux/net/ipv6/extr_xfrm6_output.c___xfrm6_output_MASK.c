
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int len; scalar_t__ sk; int ignore_df; } ;
struct net {int dummy; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfrm_state*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct net*,struct sock*,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct dst_entry* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_5, struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct dst_entry *VAR_8 = FUNC_9(VAR_7);
 struct xfrm_state *VAR_9 = VAR_8->xfrm;
 int VAR_10;
 bool VAR_11;
 if (VAR_9->props.mode != VAR_3)
  goto skip_frag;

 if (VAR_7->protocol == FUNC_5(VAR_1))
  VAR_10 = FUNC_7(VAR_7);
 else
  VAR_10 = FUNC_3(FUNC_9(VAR_7));

 VAR_11 = VAR_7->len > VAR_10 && !FUNC_10(VAR_7);

 if (VAR_11 && FUNC_11(VAR_7)) {
  FUNC_12(VAR_7, VAR_10);
  FUNC_8(VAR_7);
  return -VAR_0;
 } else if (!VAR_7->ignore_df && VAR_11 && VAR_7->sk) {
  FUNC_13(VAR_7, VAR_10);
  FUNC_8(VAR_7);
  return -VAR_0;
 }

 if (VAR_11 || FUNC_2(FUNC_9(VAR_7)))
  return FUNC_6(VAR_5, VAR_6, VAR_7,
        VAR_4);

skip_frag:
 return FUNC_1(VAR_9, VAR_6, VAR_7);
}
