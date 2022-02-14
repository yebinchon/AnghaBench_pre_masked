
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int flags; int cudmatchlength; int dte_facilities; int facilities; int t2; int t23; int t22; int t21; } ;
struct sock {scalar_t__ sk_type; int sk_backlog_rcv; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_priority; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sock*,struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sock*) ;
 struct x25_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_6(struct sock *VAR_3)
{
 struct sock *VAR_4 = ((void*)0);
 struct x25_sock *VAR_5, *VAR_6;

 if (VAR_3->sk_type != VAR_0)
  goto out;

 if ((VAR_4 = FUNC_3(FUNC_2(VAR_3), 0)) == ((void*)0))
  goto out;

 VAR_5 = FUNC_5(VAR_4);

 VAR_4->sk_type = VAR_3->sk_type;
 VAR_4->sk_priority = VAR_3->sk_priority;
 VAR_4->sk_protocol = VAR_3->sk_protocol;
 VAR_4->sk_rcvbuf = VAR_3->sk_rcvbuf;
 VAR_4->sk_sndbuf = VAR_3->sk_sndbuf;
 VAR_4->sk_state = VAR_1;
 VAR_4->sk_backlog_rcv = VAR_3->sk_backlog_rcv;
 FUNC_1(VAR_4, VAR_3);

 VAR_6 = FUNC_5(VAR_3);
 VAR_5->t21 = VAR_6->t21;
 VAR_5->t22 = VAR_6->t22;
 VAR_5->t23 = VAR_6->t23;
 VAR_5->t2 = VAR_6->t2;
 VAR_5->flags = VAR_6->flags;
 VAR_5->facilities = VAR_6->facilities;
 VAR_5->dte_facilities = VAR_6->dte_facilities;
 VAR_5->cudmatchlength = VAR_6->cudmatchlength;

 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_4(VAR_4);
out:
 return VAR_4;
}
