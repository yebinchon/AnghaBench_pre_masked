
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch_tree {int dummy; } ;
struct dsa_switch {int dev; TYPE_1__* ops; struct dsa_switch_tree* dst; } ;
struct dsa_port {struct dsa_switch_tree* dst; struct net_device* master; struct dsa_device_ops const* tag_ops; int rcv; int filter; int type; int index; struct dsa_switch* ds; } ;
struct dsa_device_ops {int rcv; int filter; } ;
typedef enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;
struct TYPE_2__ {int (* get_tag_protocol ) (struct dsa_switch*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dsa_device_ops const*) ;
 int FUNC_1 (struct dsa_device_ops const*) ;
 int FUNC_2 (int ,char*) ;
 struct dsa_device_ops* FUNC_3 (int) ;
 int FUNC_4 (struct dsa_switch*,int ) ;

__attribute__((used)) static int FUNC_5(struct dsa_port *VAR_3, struct net_device *VAR_4)
{
 struct dsa_switch *VAR_5 = VAR_3->ds;
 struct dsa_switch_tree *VAR_6 = VAR_5->dst;
 const struct dsa_device_ops *VAR_7;
 enum dsa_tag_protocol VAR_8;

 VAR_8 = VAR_5->ops->get_tag_protocol(VAR_5, VAR_3->index);
 VAR_7 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_7)) {
  if (FUNC_1(VAR_7) == -VAR_1)
   return -VAR_2;
  FUNC_2(VAR_5->dev, "No tagger for this switch\n");
  return FUNC_1(VAR_7);
 }

 VAR_3->type = VAR_0;
 VAR_3->filter = VAR_7->filter;
 VAR_3->rcv = VAR_7->rcv;
 VAR_3->tag_ops = VAR_7;
 VAR_3->master = VAR_4;
 VAR_3->dst = VAR_6;

 return 0;
}
