
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ undo_retrans; scalar_t__ retrans_stamp; int retrans_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int) ;
 int FUNC_2 (char*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_6 == 0) {





  FUNC_0(VAR_3)->sacked |= VAR_0;
  VAR_5->retrans_out += FUNC_4(VAR_3);
 }


 if (!VAR_5->retrans_stamp)
  VAR_5->retrans_stamp = FUNC_5(VAR_3);

 if (VAR_5->undo_retrans < 0)
  VAR_5->undo_retrans = 0;
 VAR_5->undo_retrans += FUNC_4(VAR_3);
 return VAR_6;
}
