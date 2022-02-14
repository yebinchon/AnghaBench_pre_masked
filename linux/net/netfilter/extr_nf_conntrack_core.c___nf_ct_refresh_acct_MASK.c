
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nf_conn {int timeout; int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct nf_conn*,int,int ) ;
 scalar_t__ FUNC_3 (struct nf_conn*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct nf_conn *VAR_2,
     enum ip_conntrack_info VAR_3,
     const struct sk_buff *VAR_4,
     u32 VAR_5,
     bool VAR_6)
{

 if (FUNC_4(VAR_0, &VAR_2->status))
  goto acct;


 if (FUNC_3(VAR_2))
  VAR_5 += VAR_1;

 if (FUNC_0(VAR_2->timeout) != VAR_5)
  FUNC_1(VAR_2->timeout, VAR_5);
acct:
 if (VAR_6)
  FUNC_2(VAR_2, VAR_3, VAR_4->len);
}
