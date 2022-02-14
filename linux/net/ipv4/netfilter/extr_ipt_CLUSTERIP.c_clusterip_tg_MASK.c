
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct xt_action_param {struct ipt_clusterip_tgt_info* targinfo; } ;
struct sk_buff {int pkt_type; } ;
struct nf_conn {int mark; TYPE_1__* tuplehash; } ;
struct ipt_clusterip_tgt_info {int config; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {int tuple; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;





 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_5, const struct xt_action_param *VAR_6)
{
 const struct ipt_clusterip_tgt_info *VAR_7 = VAR_6->targinfo;
 struct nf_conn *VAR_8;
 enum ip_conntrack_info VAR_9;
 u_int32_t VAR_10;





 VAR_8 = FUNC_4(VAR_5, &VAR_9);
 if (VAR_8 == ((void*)0))
  return VAR_2;



 if (FUNC_2(VAR_5)->protocol == VAR_0 &&
     (VAR_9 == 129 ||
      VAR_9 == 128))
  return VAR_4;





 VAR_10 = FUNC_0(VAR_5, VAR_7->config);

 switch (VAR_9) {
 case 130:
  VAR_8->mark = VAR_10;
  break;
 case 129:
 case 128:



 case 132:
 case 131:
  break;
 default:
  break;
 }




 FUNC_5("hash=%u ct_hash=%u ", VAR_10, VAR_8->mark);
 if (!FUNC_1(VAR_7->config, VAR_10)) {
  FUNC_5("not responsible\n");
  return VAR_2;
 }
 FUNC_5("responsible\n");



 VAR_5->pkt_type = VAR_3;

 return VAR_4;
}
