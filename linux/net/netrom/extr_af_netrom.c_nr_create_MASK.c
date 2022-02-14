
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_protocol; } ;
struct nr_sock {int bpqext; int state; int window; void* idle; void* t4; void* n2; void* t2; void* t1; int frag_queue; int reseq_queue; int ack_queue; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int *) ;
 int FUNC_2 (struct sock*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct nr_sock* FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (struct net*,int ,int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct socket*,struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_7(struct net *VAR_16, struct socket *VAR_17, int VAR_18,
       int VAR_19)
{
 struct sock *VAR_20;
 struct nr_sock *VAR_21;

 if (!FUNC_1(VAR_16, &VAR_7))
  return -VAR_0;

 if (VAR_17->type != VAR_6 || VAR_18 != 0)
  return -VAR_2;

 VAR_20 = FUNC_4(VAR_16, VAR_5, VAR_3, &VAR_8, VAR_19);
 if (VAR_20 == ((void*)0))
  return -VAR_1;

 VAR_21 = FUNC_3(VAR_20);

 FUNC_6(VAR_17, VAR_20);

 VAR_17->ops = &VAR_9;
 VAR_20->sk_protocol = VAR_18;

 FUNC_5(&VAR_21->ack_queue);
 FUNC_5(&VAR_21->reseq_queue);
 FUNC_5(&VAR_21->frag_queue);

 FUNC_2(VAR_20);

 VAR_21->t1 =
  FUNC_0(VAR_15);
 VAR_21->t2 =
  FUNC_0(VAR_10);
 VAR_21->n2 =
  FUNC_0(VAR_12);
 VAR_21->t4 =
  FUNC_0(VAR_11);
 VAR_21->idle =
  FUNC_0(VAR_13);
 VAR_21->window = VAR_14;

 VAR_21->bpqext = 1;
 VAR_21->state = VAR_4;

 return 0;
}
