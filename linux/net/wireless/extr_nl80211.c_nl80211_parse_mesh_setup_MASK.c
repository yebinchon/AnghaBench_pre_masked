
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct mesh_setup {int user_mpm; scalar_t__ auth_id; void* is_secure; void* is_authenticated; int ie_len; int ie; int path_metric; int path_sel_proto; int sync_method; } ;
struct genl_info {int extack; int * attrs; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_2__ {int features; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr**,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_19,
         struct mesh_setup *VAR_20)
{
 struct cfg80211_registered_device *VAR_21 = VAR_19->user_ptr[0];
 struct nlattr *VAR_22[VAR_9 + 1];

 if (!VAR_19->attrs[VAR_7])
  return -VAR_0;
 if (FUNC_4(VAR_22, VAR_9, VAR_19->attrs[VAR_7], VAR_18, VAR_19->extack))
  return -VAR_0;

 if (VAR_22[VAR_13])
  VAR_20->sync_method =
  (FUNC_2(VAR_22[VAR_13])) ?
   VAR_6 :
   VAR_5;

 if (VAR_22[VAR_12])
  VAR_20->path_sel_proto =
  (FUNC_2(VAR_22[VAR_12])) ?
   VAR_4 :
   VAR_3;

 if (VAR_22[VAR_11])
  VAR_20->path_metric =
  (FUNC_2(VAR_22[VAR_11])) ?
   VAR_2 :
   VAR_1;

 if (VAR_22[VAR_14]) {
  struct nlattr *VAR_23 =
   VAR_22[VAR_14];
  VAR_20->ie = FUNC_0(VAR_23);
  VAR_20->ie_len = FUNC_3(VAR_23);
 }
 if (VAR_22[VAR_17] &&
     !(VAR_21->wiphy.features & VAR_8))
  return -VAR_0;
 VAR_20->user_mpm = FUNC_1(VAR_22[VAR_17]);
 VAR_20->is_authenticated = FUNC_1(VAR_22[VAR_16]);
 VAR_20->is_secure = FUNC_1(VAR_22[VAR_15]);
 if (VAR_20->is_secure)
  VAR_20->user_mpm = 1;

 if (VAR_22[VAR_10]) {
  if (!VAR_20->user_mpm)
   return -VAR_0;
  VAR_20->auth_id =
   FUNC_2(VAR_22[VAR_10]);
 }

 return 0;
}
