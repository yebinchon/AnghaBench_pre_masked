
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int * sk_send_head; } ;
struct TYPE_4__ {int icsk_retransmits; TYPE_1__* icsk_af_ops; } ;
struct TYPE_3__ {scalar_t__ (* rebuild_header ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*,int ) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct sock*) ;

int FUNC_5(struct sock *VAR_2)
{
 FUNC_0(VAR_2->sk_send_head == ((void*)0));

 if (FUNC_2(VAR_2)->icsk_af_ops->rebuild_header(VAR_2) != 0)
  return -VAR_0;


 FUNC_2(VAR_2)->icsk_retransmits++;

 return FUNC_1(VAR_2, FUNC_3(VAR_2->sk_send_head, VAR_1));
}
