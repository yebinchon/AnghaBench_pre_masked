
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; struct devlink** user_ptr; } ;
struct devlink_region {int dummy; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct devlink*,int ,int ,int ,int ,struct devlink_region*) ;
 struct devlink_region* FUNC_1 (struct devlink*,char const*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6,
       struct genl_info *VAR_7)
{
 struct devlink *VAR_8 = VAR_7->user_ptr[0];
 struct devlink_region *VAR_9;
 const char *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;

 if (!VAR_7->attrs[VAR_0])
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_7->attrs[VAR_0]);
 VAR_9 = FUNC_1(VAR_8, VAR_10);
 if (!VAR_9)
  return -VAR_2;

 VAR_11 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = FUNC_0(VAR_11, VAR_8, VAR_1,
         VAR_7->snd_portid, VAR_7->snd_seq, 0,
         VAR_9);
 if (VAR_12) {
  FUNC_4(VAR_11);
  return VAR_12;
 }

 return FUNC_2(VAR_11, VAR_7);
}
