
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3,
          const char **VAR_4, unsigned int *VAR_5,
          unsigned int VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_1(VAR_1, &VAR_7);

 FUNC_0(VAR_8, 1);
 return VAR_0;
}
