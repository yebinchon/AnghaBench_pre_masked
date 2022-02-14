
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_hash_bucket {int chain; } ;
struct tcp_metrics_block {int tcpm_next; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {unsigned int* args; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ,struct net*) ;
 struct tcp_metrics_block* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct netlink_callback*,struct tcp_metrics_block*) ;
 struct tcpm_hash_bucket* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_6 (struct tcp_metrics_block*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2,
          struct netlink_callback *VAR_3)
{
 struct net *VAR_4 = FUNC_4(VAR_2->sk);
 unsigned int VAR_5 = 1U << VAR_1;
 unsigned int VAR_6, VAR_7 = VAR_3->args[0];
 int VAR_8 = VAR_3->args[1], VAR_9 = VAR_8;

 for (VAR_6 = VAR_7; VAR_6 < VAR_5; VAR_6++, VAR_8 = 0) {
  struct tcp_metrics_block *VAR_10;
  struct tcpm_hash_bucket *VAR_11 = VAR_0 + VAR_6;

  FUNC_2();
  for (VAR_9 = 0, VAR_10 = FUNC_1(VAR_11->chain); VAR_10;
       VAR_10 = FUNC_1(VAR_10->tcpm_next), VAR_9++) {
   if (!FUNC_0(FUNC_6(VAR_10), VAR_4))
    continue;
   if (VAR_9 < VAR_8)
    continue;
   if (FUNC_5(VAR_2, VAR_3, VAR_10) < 0) {
    FUNC_3();
    goto done;
   }
  }
  FUNC_3();
 }

done:
 VAR_3->args[0] = VAR_6;
 VAR_3->args[1] = VAR_9;
 return VAR_2->len;
}
