
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ _nfct; } ;
struct nf_hook_state {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct sk_buff*,struct nf_hook_state const*) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conn*) ;

__attribute__((used)) static unsigned int FUNC_6(void *VAR_1,
      struct sk_buff *VAR_2,
      const struct nf_hook_state *VAR_3)
{
 if (FUNC_1(FUNC_0(VAR_2))) {
  enum ip_conntrack_info VAR_4;
  struct nf_conn *VAR_5;

  VAR_5 = FUNC_3(VAR_2, &VAR_4);
  if (VAR_5 && FUNC_4(VAR_5)) {



   VAR_2->_nfct = 0;
   FUNC_5(VAR_5);
  }
  return VAR_0;
 }

 return FUNC_2(VAR_2, VAR_3);
}
