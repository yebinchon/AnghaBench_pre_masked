
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vport {int dp; } ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int mark; int dev; } ;
struct ip_tunnel_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ cutlen; scalar_t__ mru; struct vport* input_vport; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_5 (struct ip_tunnel_info const*,struct sk_buff*,struct sw_flow_key*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct vport *VAR_0, struct sk_buff *VAR_1,
        const struct ip_tunnel_info *VAR_2)
{
 struct sw_flow_key VAR_3;
 int VAR_4;

 FUNC_0(VAR_1)->input_vport = VAR_0;
 FUNC_0(VAR_1)->mru = 0;
 FUNC_0(VAR_1)->cutlen = 0;
 if (FUNC_7(FUNC_1(VAR_1->dev) != FUNC_3(VAR_0->dp))) {
  u32 VAR_5;

  VAR_5 = VAR_1->mark;
  FUNC_6(VAR_1, 1);
  VAR_1->mark = VAR_5;
  VAR_2 = ((void*)0);
 }


 VAR_4 = FUNC_5(VAR_2, VAR_1, &VAR_3);
 if (FUNC_7(VAR_4)) {
  FUNC_2(VAR_1);
  return VAR_4;
 }
 FUNC_4(VAR_1, &VAR_3);
 return 0;
}
