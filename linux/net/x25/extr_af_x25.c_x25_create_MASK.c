
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int calling_ae; int called_ae; scalar_t__ called_len; scalar_t__ calling_len; } ;
struct TYPE_3__ {int reverse; scalar_t__ throughput; void* pacsize_out; void* pacsize_in; void* winsize_out; void* winsize_in; } ;
struct x25_sock {TYPE_2__ dte_facilities; TYPE_1__ facilities; int flags; scalar_t__ cudmatchlength; int state; int t2; int t23; int t22; int t21; } ;
struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_protocol; int sk_backlog_rcv; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char,int) ;
 int FUNC_1 (struct net*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct socket*,struct sock*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct sock* FUNC_4 (struct net*,int) ;
 int VAR_15 ;
 int FUNC_5 (struct sock*) ;
 int VAR_16 ;
 struct x25_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_17, struct socket *VAR_18, int VAR_19,
        int VAR_20)
{
 struct sock *VAR_21;
 struct x25_sock *VAR_22;
 int VAR_23 = -VAR_0;

 if (!FUNC_1(VAR_17, &VAR_10))
  goto out;

 VAR_23 = -VAR_3;
 if (VAR_18->type != VAR_4)
  goto out;

 VAR_23 = -VAR_1;
 if (VAR_19)
  goto out;

 VAR_23 = -VAR_2;
 if ((VAR_21 = FUNC_4(VAR_17, VAR_20)) == ((void*)0))
  goto out;

 VAR_22 = FUNC_6(VAR_21);

 FUNC_3(VAR_18, VAR_21);

 FUNC_5(VAR_21);

 VAR_18->ops = &VAR_16;
 VAR_21->sk_protocol = VAR_19;
 VAR_21->sk_backlog_rcv = VAR_15;

 VAR_22->t21 = VAR_12;
 VAR_22->t22 = VAR_14;
 VAR_22->t23 = VAR_13;
 VAR_22->t2 = VAR_11;
 VAR_22->state = VAR_9;
 VAR_22->cudmatchlength = 0;
 FUNC_2(VAR_5, &VAR_22->flags);


 VAR_22->facilities.winsize_in = VAR_8;
 VAR_22->facilities.winsize_out = VAR_8;
 VAR_22->facilities.pacsize_in = VAR_6;
 VAR_22->facilities.pacsize_out = VAR_6;
 VAR_22->facilities.throughput = 0;

 VAR_22->facilities.reverse = VAR_7;
 VAR_22->dte_facilities.calling_len = 0;
 VAR_22->dte_facilities.called_len = 0;
 FUNC_0(VAR_22->dte_facilities.called_ae, '\0',
   sizeof(VAR_22->dte_facilities.called_ae));
 FUNC_0(VAR_22->dte_facilities.calling_ae, '\0',
   sizeof(VAR_22->dte_facilities.calling_ae));

 VAR_23 = 0;
out:
 return VAR_23;
}
