
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int tun_flags; } ;
struct ip_tunnel_info {TYPE_1__ key; int options_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,struct ip_tunnel_info const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
    const struct ip_tunnel_info *VAR_5)
{
 struct nlattr *VAR_6;
 int VAR_7 = -VAR_0;

 if (!VAR_5->options_len)
  return 0;

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_5->key.tun_flags & VAR_3) {
  VAR_7 = FUNC_3(VAR_4, VAR_5);
  if (VAR_7)
   goto err_out;
 } else {
err_out:
  FUNC_0(VAR_4, VAR_6);
  return VAR_7;
 }

 FUNC_1(VAR_4, VAR_6);
 return 0;
}
