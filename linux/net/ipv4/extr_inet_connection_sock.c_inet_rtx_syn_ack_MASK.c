
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int num_retrans; TYPE_1__* rsk_ops; } ;
struct TYPE_2__ {int (* rtx_syn_ack ) (struct sock const*,struct request_sock*) ;} ;


 int FUNC_0 (struct sock const*,struct request_sock*) ;

int FUNC_1(const struct sock *VAR_0, struct request_sock *VAR_1)
{
 int VAR_2 = VAR_1->rsk_ops->rtx_syn_ack(VAR_0, VAR_1);

 if (!VAR_2)
  VAR_1->num_retrans++;
 return VAR_2;
}
