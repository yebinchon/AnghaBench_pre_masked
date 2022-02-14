
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tp_dst; int tp_src; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
     struct ip_tunnel_info *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_3->key.tp_src)) < 0 ||
     FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_3->key.tp_dst)) < 0)
  return -1;

 return 0;
}
