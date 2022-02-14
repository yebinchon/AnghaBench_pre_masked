
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_type; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_priority; int sk_prot; } ;
struct nr_sock {int bpqext; int device; int window; int idle; int t4; int n2; int t2; int t1; int frag_queue; int reseq_queue; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 struct nr_sock* FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,struct sock*) ;
 int FUNC_5 (int *,struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_7(struct sock *VAR_4)
{
 struct sock *VAR_5;
 struct nr_sock *VAR_6, *VAR_7;

 if (VAR_4->sk_type != VAR_2)
  return ((void*)0);

 VAR_5 = FUNC_2(FUNC_6(VAR_4), VAR_1, VAR_0, VAR_4->sk_prot, 0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_5);

 FUNC_5(((void*)0), VAR_5);

 VAR_5->sk_type = VAR_4->sk_type;
 VAR_5->sk_priority = VAR_4->sk_priority;
 VAR_5->sk_protocol = VAR_4->sk_protocol;
 VAR_5->sk_rcvbuf = VAR_4->sk_rcvbuf;
 VAR_5->sk_sndbuf = VAR_4->sk_sndbuf;
 VAR_5->sk_state = VAR_3;
 FUNC_4(VAR_5, VAR_4);

 FUNC_3(&VAR_6->ack_queue);
 FUNC_3(&VAR_6->reseq_queue);
 FUNC_3(&VAR_6->frag_queue);

 FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_4);

 VAR_6->t1 = VAR_7->t1;
 VAR_6->t2 = VAR_7->t2;
 VAR_6->n2 = VAR_7->n2;
 VAR_6->t4 = VAR_7->t4;
 VAR_6->idle = VAR_7->idle;
 VAR_6->window = VAR_7->window;

 VAR_6->device = VAR_7->device;
 VAR_6->bpqext = VAR_7->bpqext;

 return VAR_5;
}
