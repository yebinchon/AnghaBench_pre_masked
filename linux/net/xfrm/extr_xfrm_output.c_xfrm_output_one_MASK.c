
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int packets; int bytes; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_7__ {int flags; } ;
struct xfrm_state {int lock; TYPE_6__* type; TYPE_5__* type_offload; TYPE_4__ curlft; TYPE_3__* repl; TYPE_2__ km; TYPE_1__ outer_mode; } ;
struct sk_buff {scalar_t__ encapsulation; scalar_t__ len; int mark; } ;
struct net {int dummy; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;
struct TYPE_12__ {int (* output ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_11__ {int (* encap ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_9__ {int (* overflow ) (struct xfrm_state*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sk_buff*) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_9 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_10 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ,struct xfrm_state*) ;
 int FUNC_16 (struct xfrm_state*) ;
 struct net* FUNC_17 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_11, int VAR_12)
{
 struct dst_entry *VAR_13 = FUNC_2(VAR_11);
 struct xfrm_state *VAR_14 = VAR_13->xfrm;
 struct net *VAR_15 = FUNC_17(VAR_14);

 if (VAR_12 <= 0)
  goto resume;

 do {
  VAR_12 = FUNC_14(VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_15, VAR_3);
   goto error_nolock;
  }

  VAR_11->mark = FUNC_15(VAR_11->mark, VAR_14);

  VAR_12 = FUNC_13(VAR_14, VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_15, VAR_6);
   goto error_nolock;
  }

  FUNC_6(&VAR_14->lock);

  if (FUNC_11(VAR_14->km.state != VAR_10)) {
   FUNC_0(VAR_15, VAR_5);
   VAR_12 = -VAR_2;
   goto error;
  }

  VAR_12 = FUNC_16(VAR_14);
  if (VAR_12) {
   FUNC_0(VAR_15, VAR_4);
   goto error;
  }

  VAR_12 = VAR_14->repl->overflow(VAR_14, VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_15, VAR_8);
   goto error;
  }

  VAR_14->curlft.bytes += VAR_11->len;
  VAR_14->curlft.packets++;

  FUNC_7(&VAR_14->lock);

  FUNC_3(VAR_11);
  if (!FUNC_2(VAR_11)) {
   FUNC_0(VAR_15, VAR_3);
   VAR_12 = -VAR_0;
   goto error_nolock;
  }

  if (FUNC_12(VAR_11)) {
   VAR_14->type_offload->encap(VAR_14, VAR_11);
  } else {

   VAR_11->encapsulation = 0;

   VAR_12 = VAR_14->type->output(VAR_14, VAR_11);
   if (VAR_12 == -VAR_1)
    goto out;
  }

resume:
  if (VAR_12) {
   FUNC_0(VAR_15, VAR_7);
   goto error_nolock;
  }

  VAR_13 = FUNC_4(VAR_11);
  if (!VAR_13) {
   FUNC_0(VAR_15, VAR_3);
   VAR_12 = -VAR_0;
   goto error_nolock;
  }
  FUNC_5(VAR_11, VAR_13);
  VAR_14 = VAR_13->xfrm;
 } while (VAR_14 && !(VAR_14->outer_mode.flags & VAR_9));

 return 0;

error:
 FUNC_7(&VAR_14->lock);
error_nolock:
 FUNC_1(VAR_11);
out:
 return VAR_12;
}
