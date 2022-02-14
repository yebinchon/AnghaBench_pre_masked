
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ila_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct ila_map*,struct sk_buff*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct ila_map *VAR_3,
    u32 VAR_4, u32 VAR_5, u32 VAR_6,
    struct sk_buff *VAR_7, u8 VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_5, &VAR_2, VAR_6, VAR_8);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_3(VAR_3, VAR_7) < 0)
  goto nla_put_failure;

 FUNC_1(VAR_7, VAR_9);
 return 0;

nla_put_failure:
 FUNC_0(VAR_7, VAR_9);
 return -VAR_0;
}
