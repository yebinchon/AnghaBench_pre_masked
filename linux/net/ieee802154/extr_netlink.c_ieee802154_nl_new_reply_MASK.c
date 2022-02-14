
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct sk_buff*,struct genl_info*,int *,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;

struct sk_buff *FUNC_3(struct genl_info *VAR_3,
     int VAR_4, u8 VAR_5)
{
 void *VAR_6;
 struct sk_buff *VAR_7 = FUNC_2(VAR_1, VAR_0);

 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_7, VAR_3,
    &VAR_2, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
