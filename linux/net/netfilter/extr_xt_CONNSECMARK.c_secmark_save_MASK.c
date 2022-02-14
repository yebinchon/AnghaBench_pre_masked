
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ secmark; } ;
struct nf_conn {scalar_t__ secmark; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 struct nf_conn* FUNC_1 (struct sk_buff const*,int*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_1)
{
 if (VAR_1->secmark) {
  struct nf_conn *VAR_2;
  enum ip_conntrack_info VAR_3;

  VAR_2 = FUNC_1(VAR_1, &VAR_3);
  if (VAR_2 && !VAR_2->secmark) {
   VAR_2->secmark = VAR_1->secmark;
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
