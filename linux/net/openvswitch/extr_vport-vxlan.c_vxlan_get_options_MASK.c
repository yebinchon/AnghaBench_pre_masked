
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int dst_port; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct vport {int dev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vxlan_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct vport *VAR_5, struct sk_buff *VAR_6)
{
 struct vxlan_dev *VAR_7 = FUNC_0(VAR_5->dev);
 __be16 VAR_8 = VAR_7->cfg.dst_port;

 if (FUNC_4(VAR_6, VAR_1, FUNC_5(VAR_8)))
  return -VAR_0;

 if (VAR_7->cfg.flags & VAR_4) {
  struct nlattr *VAR_9;

  VAR_9 = FUNC_2(VAR_6, VAR_2);
  if (!VAR_9)
   return -VAR_0;

  if (VAR_7->cfg.flags & VAR_4 &&
      FUNC_3(VAR_6, VAR_3))
   return -VAR_0;

  FUNC_1(VAR_6, VAR_9);
 }

 return 0;
}
