
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_metrics_block {int dummy; } ;
struct request_sock {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct tcp_metrics_block* FUNC_0 (struct request_sock*,struct dst_entry*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct tcp_metrics_block*,int ) ;

bool FUNC_4(struct request_sock *VAR_1, struct dst_entry *VAR_2)
{
 struct tcp_metrics_block *VAR_3;
 bool VAR_4;

 if (!VAR_2)
  return 0;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 && FUNC_3(VAR_3, VAR_0))
  VAR_4 = 1;
 else
  VAR_4 = 0;
 FUNC_2();

 return VAR_4;
}
