
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sw_flow_id {int dummy; } ;
struct sw_flow_actions {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (struct sw_flow_actions const*,struct sw_flow_id const*,int ) ;
 int FUNC_3 (int *,struct genl_info*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(const struct sw_flow_actions *VAR_3,
            const struct sw_flow_id *VAR_4,
            struct genl_info *VAR_5,
            bool VAR_6,
            uint32_t VAR_7)
{
 struct sk_buff *VAR_8;
 size_t VAR_9;

 if (!VAR_6 && !FUNC_3(&VAR_2, VAR_5, 0))
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_7);
 VAR_8 = FUNC_1(VAR_9, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 return VAR_8;
}
