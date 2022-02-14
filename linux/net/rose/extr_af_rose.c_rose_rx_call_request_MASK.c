
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; int sk_ack_backlog; int sk_state; } ;
struct sk_buff {struct sock* sk; scalar_t__ len; scalar_t__ data; } ;
struct rose_facilities_struct {int dest_ndigis; int source_ndigis; int * source_digis; int source_call; int source_addr; int * dest_digis; int dest_call; int dest_addr; } ;
struct rose_sock {unsigned int lci; int dest_ndigis; int source_ndigis; int condition; scalar_t__ vl; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; int state; scalar_t__ defer; struct rose_neigh* neighbour; struct rose_facilities_struct facilities; struct net_device* device; int * source_digis; int source_call; int source_addr; int * dest_digis; int dest_call; int dest_addr; } ;
struct rose_neigh {int use; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rose_facilities_struct*,int,int) ;
 struct sock* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (scalar_t__,scalar_t__,struct rose_facilities_struct*) ;
 struct rose_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct rose_neigh*,unsigned int,int ,int) ;
 int FUNC_9 (struct sock*,int ) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;

int FUNC_14(struct sk_buff *VAR_8, struct net_device *VAR_9, struct rose_neigh *VAR_10, unsigned int VAR_11)
{
 struct sock *VAR_12;
 struct sock *VAR_13;
 struct rose_sock *VAR_14;
 struct rose_facilities_struct VAR_15;
 int VAR_16;

 VAR_8->sk = ((void*)0);




 FUNC_0(&VAR_15, 0x00, sizeof(struct rose_facilities_struct));

 if (!FUNC_4(VAR_8->data + VAR_1,
       VAR_8->len - VAR_1,
       &VAR_15)) {
  FUNC_8(VAR_10, VAR_11, VAR_2, 76);
  return 0;
 }

 VAR_12 = FUNC_1(&VAR_15.source_addr, &VAR_15.source_call);




 if (VAR_12 == ((void*)0) || FUNC_10(VAR_12) ||
     (VAR_13 = FUNC_3(VAR_12)) == ((void*)0)) {
  FUNC_8(VAR_10, VAR_11, VAR_3, 120);
  return 0;
 }

 VAR_8->sk = VAR_13;
 VAR_13->sk_state = VAR_7;
 VAR_14 = FUNC_5(VAR_13);

 VAR_14->lci = VAR_11;
 VAR_14->dest_addr = VAR_15.dest_addr;
 VAR_14->dest_call = VAR_15.dest_call;
 VAR_14->dest_ndigis = VAR_15.dest_ndigis;
 for (VAR_16 = 0 ; VAR_16 < VAR_15.dest_ndigis ; VAR_16++)
  VAR_14->dest_digis[VAR_16] = VAR_15.dest_digis[VAR_16];
 VAR_14->source_addr = VAR_15.source_addr;
 VAR_14->source_call = VAR_15.source_call;
 VAR_14->source_ndigis = VAR_15.source_ndigis;
 for (VAR_16 = 0 ; VAR_16 < VAR_15.source_ndigis ; VAR_16++)
  VAR_14->source_digis[VAR_16] = VAR_15.source_digis[VAR_16];
 VAR_14->neighbour = VAR_10;
 VAR_14->device = VAR_9;
 VAR_14->facilities = VAR_15;

 VAR_14->neighbour->use++;

 if (FUNC_5(VAR_12)->defer) {
  VAR_14->state = VAR_5;
 } else {
  FUNC_9(VAR_13, VAR_0);
  VAR_14->state = VAR_4;
  FUNC_7(VAR_13);
 }

 VAR_14->condition = 0x00;
 VAR_14->vs = 0;
 VAR_14->va = 0;
 VAR_14->vr = 0;
 VAR_14->vl = 0;
 VAR_12->sk_ack_backlog++;

 FUNC_2(VAR_13);

 FUNC_11(&VAR_12->sk_receive_queue, VAR_8);

 FUNC_6(VAR_13);

 if (!FUNC_12(VAR_12, VAR_6))
  VAR_12->sk_data_ready(VAR_12);

 return 1;
}
