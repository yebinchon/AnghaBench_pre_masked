
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int FUNC_0 (struct nf_conn*,int,int ) ;
 int FUNC_1 (struct nf_conn*,int ,int ) ;

bool FUNC_2(struct nf_conn *VAR_0,
       enum ip_conntrack_info VAR_1,
       const struct sk_buff *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->len);

 return FUNC_1(VAR_0, 0, 0);
}
