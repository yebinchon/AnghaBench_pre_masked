
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nf_acct {int bytes; int pkts; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(const struct sk_buff *VAR_0, struct nf_acct *VAR_1)
{
 FUNC_1(&VAR_1->pkts);
 FUNC_0(VAR_0->len, &VAR_1->bytes);
}
