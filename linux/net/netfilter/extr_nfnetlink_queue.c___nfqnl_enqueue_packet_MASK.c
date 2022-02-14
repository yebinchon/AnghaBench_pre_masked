
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfqnl_instance {scalar_t__ queue_total; scalar_t__ queue_maxlen; int flags; int lock; int queue_user_dropped; int peer_portid; scalar_t__ id_sequence; int queue_dropped; } ;
struct nf_queue_entry {scalar_t__ id; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfqnl_instance*,struct nf_queue_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nf_queue_entry*) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ) ;
 struct sk_buff* FUNC_6 (struct net*,struct nfqnl_instance*,struct nf_queue_entry*,int **) ;
 int FUNC_7 (struct nf_queue_entry*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct net *VAR_5, struct nfqnl_instance *VAR_6,
   struct nf_queue_entry *VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_0;
 __be32 *VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7, &VAR_10);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto err_out;
 }
 FUNC_8(&VAR_6->lock);

 if (FUNC_4(VAR_7))
  goto err_out_free_nskb;

 if (VAR_6->queue_total >= VAR_6->queue_maxlen) {
  if (VAR_6->flags & VAR_3) {
   VAR_11 = 1;
   VAR_9 = 0;
  } else {
   VAR_6->queue_dropped++;
   FUNC_3("nf_queue: full at %d entries, dropping packets(s)\n",
          VAR_6->queue_total);
  }
  goto err_out_free_nskb;
 }
 VAR_7->id = ++VAR_6->id_sequence;
 *VAR_10 = FUNC_1(VAR_7->id);


 VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6->peer_portid, VAR_2);
 if (VAR_9 < 0) {
  if (VAR_6->flags & VAR_3) {
   VAR_11 = 1;
   VAR_9 = 0;
  } else {
   VAR_6->queue_user_dropped++;
  }
  goto err_out_unlock;
 }

 FUNC_0(VAR_6, VAR_7);

 FUNC_9(&VAR_6->lock);
 return 0;

err_out_free_nskb:
 FUNC_2(VAR_8);
err_out_unlock:
 FUNC_9(&VAR_6->lock);
 if (VAR_11)
  FUNC_7(VAR_7, VAR_4);
err_out:
 return VAR_9;
}
