
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {unsigned long sk_flags; int sk_err; int sk_bound_dev_if; int sk_rcvlowat; int sk_priority; int sk_mark; int sk_rcvtimeo; int sk_sndtimeo; int sk_rcvbuf; int sk_sndbuf; int sk_type; } ;



__attribute__((used)) static void FUNC_0(struct sock *VAR_0, struct sock *VAR_1,
       unsigned long VAR_2)
{

 VAR_0->sk_type = VAR_1->sk_type;
 VAR_0->sk_sndbuf = VAR_1->sk_sndbuf;
 VAR_0->sk_rcvbuf = VAR_1->sk_rcvbuf;
 VAR_0->sk_sndtimeo = VAR_1->sk_sndtimeo;
 VAR_0->sk_rcvtimeo = VAR_1->sk_rcvtimeo;
 VAR_0->sk_mark = VAR_1->sk_mark;
 VAR_0->sk_priority = VAR_1->sk_priority;
 VAR_0->sk_rcvlowat = VAR_1->sk_rcvlowat;
 VAR_0->sk_bound_dev_if = VAR_1->sk_bound_dev_if;
 VAR_0->sk_err = VAR_1->sk_err;

 VAR_0->sk_flags &= ~VAR_2;
 VAR_0->sk_flags |= VAR_1->sk_flags & VAR_2;
}
