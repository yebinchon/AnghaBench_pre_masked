
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_bearer {void* mtu; TYPE_1__* media; void* window; void* priority; void* tolerance; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;
struct TYPE_2__ {scalar_t__ type_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 char* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_3 (int ) ;
 struct tipc_bearer* FUNC_4 (struct net*,char*) ;
 int VAR_11 ;
 int FUNC_5 (struct nlattr*,struct nlattr**) ;
 int FUNC_6 (struct net*,struct tipc_bearer*,size_t) ;
 scalar_t__ FUNC_7 (void*) ;

int FUNC_8(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 struct tipc_bearer *VAR_14;
 struct nlattr *VAR_15[VAR_3 + 1];
 struct net *VAR_16 = FUNC_3(VAR_12->sk);
 char *VAR_17;
 int VAR_18;

 if (!VAR_13->attrs[VAR_2])
  return -VAR_0;

 VAR_18 = FUNC_2(VAR_15, VAR_3,
       VAR_13->attrs[VAR_2],
       VAR_11, VAR_13->extack);
 if (VAR_18)
  return VAR_18;

 if (!VAR_15[VAR_4])
  return -VAR_0;
 VAR_17 = FUNC_0(VAR_15[VAR_4]);

 VAR_14 = FUNC_4(VAR_16, VAR_17);
 if (!VAR_14)
  return -VAR_0;

 if (VAR_15[VAR_5]) {
  struct nlattr *VAR_19[VAR_6 + 1];

  VAR_18 = FUNC_5(VAR_15[VAR_5],
           VAR_19);
  if (VAR_18)
   return VAR_18;

  if (VAR_19[VAR_9]) {
   VAR_14->tolerance = FUNC_1(VAR_19[VAR_9]);
   FUNC_6(VAR_16, VAR_14, VAR_9);
  }
  if (VAR_19[VAR_8])
   VAR_14->priority = FUNC_1(VAR_19[VAR_8]);
  if (VAR_19[VAR_10])
   VAR_14->window = FUNC_1(VAR_19[VAR_10]);
  if (VAR_19[VAR_7]) {
   if (VAR_14->media->type_id != VAR_1)
    return -VAR_0;







  }
 }

 return 0;
}
