
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_tunnel_info {int mode; int options_len; int key; } ;


 int FUNC_0 (struct sk_buff*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct ip_tunnel_info*) ;
 int FUNC_2 (struct ip_tunnel_info*) ;

int FUNC_3(struct sk_buff *VAR_0,
       struct ip_tunnel_info *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->key,
      FUNC_2(VAR_1),
      VAR_1->options_len,
      FUNC_1(VAR_1), VAR_1->mode);
}
