
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_request_sock_ops {int (* send_synack ) (struct sock const*,int *,struct flowi*,struct request_sock*,int *,int ) ;} ;
struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct flowi {int dummy; } ;
struct TYPE_4__ {int txhash; struct tcp_request_sock_ops* af_specific; } ;
struct TYPE_3__ {int total_retrans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock const*) ;
 int FUNC_4 (struct sock const*,int *,struct flowi*,struct request_sock*,int *,int ) ;
 int FUNC_5 (struct sock const*) ;
 TYPE_2__* FUNC_6 (struct request_sock*) ;
 TYPE_1__* FUNC_7 (struct sock const*) ;
 int FUNC_8 (struct sock const*,struct request_sock*) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(const struct sock *VAR_3, struct request_sock *VAR_4)
{
 const struct tcp_request_sock_ops *VAR_5 = FUNC_6(VAR_4)->af_specific;
 struct flowi VAR_6;
 int VAR_7;

 FUNC_6(VAR_4)->txhash = FUNC_2();
 VAR_7 = VAR_5->send_synack(VAR_3, ((void*)0), &VAR_6, VAR_4, ((void*)0), VAR_2);
 if (!VAR_7) {
  FUNC_1(FUNC_3(VAR_3), VAR_1);
  FUNC_0(FUNC_3(VAR_3), VAR_0);
  if (FUNC_9(FUNC_5(VAR_3)))
   FUNC_7(VAR_3)->total_retrans++;
  FUNC_8(VAR_3, VAR_4);
 }
 return VAR_7;
}
