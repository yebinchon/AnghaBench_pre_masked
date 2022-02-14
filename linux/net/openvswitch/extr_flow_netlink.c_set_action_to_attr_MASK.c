
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ovs_tunnel_info {TYPE_1__* tun_dst; } ;
struct nlattr {int dummy; } ;
struct ip_tunnel_info {int mode; int options_len; int key; } ;
struct TYPE_4__ {struct ip_tunnel_info tun_info; } ;
struct TYPE_3__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct sk_buff*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct ip_tunnel_info*) ;
 int FUNC_2 (struct ip_tunnel_info*) ;
 void* FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ,struct nlattr const*) ;
 int FUNC_8 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_9(const struct nlattr *VAR_2, struct sk_buff *VAR_3)
{
 const struct nlattr *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = FUNC_8(VAR_4);
 struct nlattr *VAR_6;
 int VAR_7;

 switch (VAR_5) {
 case 128: {
  struct ovs_tunnel_info *VAR_8 = FUNC_3(VAR_4);
  struct ip_tunnel_info *VAR_9 = &VAR_8->tun_dst->u.tun_info;

  VAR_6 = FUNC_6(VAR_3, VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_3, &VAR_9->key,
     FUNC_2(VAR_9),
     VAR_9->options_len,
     FUNC_1(VAR_9), VAR_9->mode);
  if (VAR_7)
   return VAR_7;
  FUNC_5(VAR_3, VAR_6);
  break;
 }
 default:
  if (FUNC_7(VAR_3, VAR_1, FUNC_4(VAR_2), VAR_4))
   return -VAR_0;
  break;
 }

 return 0;
}
