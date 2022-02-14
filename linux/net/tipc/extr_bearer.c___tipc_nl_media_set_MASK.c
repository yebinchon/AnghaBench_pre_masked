
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_media {scalar_t__ type_id; void* mtu; void* window; void* priority; void* tolerance; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 char* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int ) ;
 struct tipc_media* FUNC_3 (char*) ;
 int VAR_12 ;
 int FUNC_4 (struct nlattr*,struct nlattr**) ;
 scalar_t__ FUNC_5 (void*) ;

int FUNC_6(struct sk_buff *VAR_13, struct genl_info *VAR_14)
{
 int VAR_15;
 char *VAR_16;
 struct tipc_media *VAR_17;
 struct nlattr *VAR_18[VAR_2 + 1];

 if (!VAR_14->attrs[VAR_3])
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_18, VAR_4,
       VAR_14->attrs[VAR_3],
       VAR_12, VAR_14->extack);

 if (!VAR_18[VAR_5])
  return -VAR_0;
 VAR_16 = FUNC_0(VAR_18[VAR_5]);

 VAR_17 = FUNC_3(VAR_16);
 if (!VAR_17)
  return -VAR_0;

 if (VAR_18[VAR_6]) {
  struct nlattr *VAR_19[VAR_7 + 1];

  VAR_15 = FUNC_4(VAR_18[VAR_6],
           VAR_19);
  if (VAR_15)
   return VAR_15;

  if (VAR_19[VAR_10])
   VAR_17->tolerance = FUNC_1(VAR_19[VAR_10]);
  if (VAR_19[VAR_9])
   VAR_17->priority = FUNC_1(VAR_19[VAR_9]);
  if (VAR_19[VAR_11])
   VAR_17->window = FUNC_1(VAR_19[VAR_11]);
  if (VAR_19[VAR_8]) {
   if (VAR_17->type_id != VAR_1)
    return -VAR_0;






  }
 }

 return 0;
}
