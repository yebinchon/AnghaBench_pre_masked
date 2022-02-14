
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nf_conn {int ct_general; int ct_net; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct sk_buff*,int *,int ) ;
 TYPE_1__* FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct net *VAR_2, struct sk_buff *VAR_3,
       u16 VAR_4, bool VAR_5)
{
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7;

 VAR_7 = FUNC_3(VAR_3, &VAR_6);
 if (!VAR_7)
  return 0;
 if (!FUNC_1(VAR_2, FUNC_8(&VAR_7->ct_net)))
  return 0;
 if (FUNC_7(VAR_7)->id != VAR_4)
  return 0;


 if (VAR_5 && FUNC_0(VAR_6) != VAR_0) {
  if (FUNC_4(VAR_7))
   FUNC_5(VAR_7);

  FUNC_2(&VAR_7->ct_general);
  FUNC_6(VAR_3, ((void*)0), VAR_1);

  return 0;
 }

 return 1;
}
