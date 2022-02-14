
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conntrack_helper {int flags; int queue_num; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct nf_conn_help* FUNC_1 (struct nf_conn*) ;
 struct nf_conntrack_helper* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_5, unsigned int VAR_6,
   struct nf_conn *VAR_7, enum ip_conntrack_info VAR_8)
{
 const struct nf_conn_help *VAR_9;
 struct nf_conntrack_helper *VAR_10;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 == ((void*)0))
  return VAR_3;


 VAR_10 = FUNC_2(VAR_9->helper);
 if (VAR_10 == ((void*)0))
  return VAR_3;


 if ((VAR_10->flags &
     (VAR_2 | VAR_1)) ==
      VAR_2)
  return VAR_0;


 return FUNC_0(VAR_10->queue_num) | VAR_4;
}
