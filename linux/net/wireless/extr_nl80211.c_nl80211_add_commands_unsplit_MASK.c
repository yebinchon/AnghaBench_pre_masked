
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ max_sched_scan_reqs; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct TYPE_4__ {scalar_t__ deauth; scalar_t__ disconnect; scalar_t__ auth; scalar_t__ connect; scalar_t__ join_mesh; scalar_t__ start_ap; scalar_t__ set_monitor_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ) ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;

__attribute__((used)) static int FUNC_2(struct cfg80211_registered_device *VAR_70,
     struct sk_buff *VAR_71)
{
 int VAR_72 = 0;






 FUNC_0(VAR_43, VAR_11);
 FUNC_0(VAR_47, VAR_23);
 FUNC_0(VAR_40, VAR_12);
 FUNC_0(VAR_64, VAR_30);
 FUNC_0(VAR_42, VAR_14);
 FUNC_0(VAR_41, VAR_13);
 FUNC_0(VAR_69, VAR_25);
 FUNC_0(VAR_46, VAR_22);
 FUNC_0(VAR_45, VAR_1);
 FUNC_0(VAR_44, VAR_0);
 FUNC_0(VAR_48, VAR_2);
 FUNC_0(VAR_50, VAR_4);
 FUNC_0(VAR_52, VAR_9);
 FUNC_0(VAR_53, VAR_10);
 FUNC_0(VAR_62, VAR_27);
 FUNC_0(VAR_49, VAR_3);
 FUNC_0(VAR_51, VAR_6);
 if (VAR_70->wiphy.flags & VAR_36)
  FUNC_0(VAR_57, VAR_21);
 FUNC_0(VAR_59, VAR_28);
 FUNC_0(VAR_54, VAR_7);
 FUNC_0(VAR_55, VAR_8);
 if (VAR_70->wiphy.flags & VAR_37) {
  VAR_72++;
  if (FUNC_1(VAR_71, VAR_72, VAR_19))
   goto nla_put_failure;
 }
 if (VAR_70->ops->set_monitor_channel || VAR_70->ops->start_ap ||
     VAR_70->ops->join_mesh) {
  VAR_72++;
  if (FUNC_1(VAR_71, VAR_72, VAR_18))
   goto nla_put_failure;
 }
 FUNC_0(VAR_63, VAR_29);
 if (VAR_70->wiphy.flags & VAR_39) {
  FUNC_0(VAR_66, VAR_33);
  FUNC_0(VAR_67, VAR_34);
 }
 if (VAR_70->wiphy.max_sched_scan_reqs)
  FUNC_0(VAR_58, VAR_32);
 FUNC_0(VAR_56, VAR_20);
 FUNC_0(VAR_61, VAR_26);
 if (VAR_70->wiphy.flags & VAR_38) {
  VAR_72++;
  if (FUNC_1(VAR_71, VAR_72, VAR_17))
   goto nla_put_failure;
 }
 FUNC_0(VAR_65, VAR_31);
 FUNC_0(VAR_60, VAR_24);




 if (VAR_70->ops->connect || VAR_70->ops->auth) {
  VAR_72++;
  if (FUNC_1(VAR_71, VAR_72, VAR_15))
   goto nla_put_failure;
 }

 if (VAR_70->ops->disconnect || VAR_70->ops->deauth) {
  VAR_72++;
  if (FUNC_1(VAR_71, VAR_72, VAR_16))
   goto nla_put_failure;
 }

 return VAR_72;
 nla_put_failure:
 return -VAR_5;
}
