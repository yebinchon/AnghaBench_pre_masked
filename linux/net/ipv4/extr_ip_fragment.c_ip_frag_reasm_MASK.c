
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int saddr; } ;
struct TYPE_9__ {TYPE_2__ v4; } ;
struct TYPE_10__ {int len; scalar_t__ max_size; TYPE_3__ key; int * last_run_head; int * fragments_tail; int rb_fragments; TYPE_1__* fqdir; } ;
struct ipq {size_t ecn; scalar_t__ max_df_size; TYPE_4__ q; } ;
struct iphdr {int tos; void* frag_off; void* tot_len; } ;
struct TYPE_11__ {int flags; int frag_max_size; } ;
struct TYPE_7__ {struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,struct sk_buff*,void*,int ) ;
 void* FUNC_4 (TYPE_4__*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_5 (struct ipq*) ;
 int* VAR_8 ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct iphdr*) ;
 int FUNC_9 (struct ipq*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (char*,struct ipq*) ;
 int FUNC_12 (char*,int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct ipq *VAR_9, struct sk_buff *VAR_10,
    struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct net *VAR_13 = VAR_9->q.fqdir->net;
 struct iphdr *VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17;
 u8 VAR_18;

 FUNC_9(VAR_9);

 VAR_18 = VAR_8[VAR_9->ecn];
 if (FUNC_13(VAR_18 == 0xff)) {
  VAR_17 = -VAR_1;
  goto out_fail;
 }


 VAR_15 = FUNC_4(&VAR_9->q, VAR_10, VAR_11);
 if (!VAR_15)
  goto out_nomem;

 VAR_16 = FUNC_7(VAR_10) + VAR_9->q.len;
 VAR_17 = -VAR_0;
 if (VAR_16 > 65535)
  goto out_oversize;

 FUNC_3(&VAR_9->q, VAR_10, VAR_15,
          FUNC_5(VAR_9));

 VAR_10->dev = VAR_12;
 FUNC_0(VAR_10)->frag_max_size = FUNC_10(VAR_9->max_df_size, VAR_9->q.max_size);

 VAR_14 = FUNC_6(VAR_10);
 VAR_14->tot_len = FUNC_2(VAR_16);
 VAR_14->tos |= VAR_18;
 if (VAR_9->max_df_size == VAR_9->q.max_size) {
  FUNC_0(VAR_10)->flags |= VAR_3;
  VAR_14->frag_off = FUNC_2(VAR_6);
 } else {
  VAR_14->frag_off = 0;
 }

 FUNC_8(VAR_14);

 FUNC_1(VAR_13, VAR_5);
 VAR_9->q.rb_fragments = VAR_7;
 VAR_9->q.fragments_tail = ((void*)0);
 VAR_9->q.last_run_head = ((void*)0);
 return 0;

out_nomem:
 FUNC_11("queue_glue: no memory for gluing queue %p\n", VAR_9);
 VAR_17 = -VAR_2;
 goto out_fail;
out_oversize:
 FUNC_12("Oversized IP packet from %pI4\n", &VAR_9->q.key.v4.saddr);
out_fail:
 FUNC_1(VAR_13, VAR_4);
 return VAR_17;
}
