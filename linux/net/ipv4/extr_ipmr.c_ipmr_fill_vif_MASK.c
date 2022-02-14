
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vif_device {int remote; int local; int pkt_out; int pkt_in; int bytes_out; int bytes_in; int flags; TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct mr_table {struct vif_device* vif_table; } ;
struct TYPE_2__ {size_t ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mr_table*,size_t) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,size_t) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_8(struct mr_table *VAR_11, u32 VAR_12, struct sk_buff *VAR_13)
{
 struct nlattr *VAR_14;
 struct vif_device *VAR_15;


 if (!FUNC_0(VAR_11, VAR_12))
  return 1;

 VAR_15 = &VAR_11->vif_table[VAR_12];
 VAR_14 = FUNC_3(VAR_13, VAR_0);
 if (!VAR_14)
  return 0;
 if (FUNC_6(VAR_13, VAR_4, VAR_15->dev->ifindex) ||
     FUNC_6(VAR_13, VAR_10, VAR_12) ||
     FUNC_5(VAR_13, VAR_3, VAR_15->flags) ||
     FUNC_7(VAR_13, VAR_1, VAR_15->bytes_in,
         VAR_8) ||
     FUNC_7(VAR_13, VAR_2, VAR_15->bytes_out,
         VAR_8) ||
     FUNC_7(VAR_13, VAR_6, VAR_15->pkt_in,
         VAR_8) ||
     FUNC_7(VAR_13, VAR_7, VAR_15->pkt_out,
         VAR_8) ||
     FUNC_4(VAR_13, VAR_5, VAR_15->local) ||
     FUNC_4(VAR_13, VAR_9, VAR_15->remote)) {
  FUNC_1(VAR_13, VAR_14);
  return 0;
 }
 FUNC_2(VAR_13, VAR_14);

 return 1;
}
