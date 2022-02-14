
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_multicast_group {int dummy; } ;
struct genl_family {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct genl_family const*,struct genl_multicast_group const*,int,int ,int,int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(const struct genl_family *VAR_3,
       const struct genl_multicast_group *VAR_4,
       int VAR_5, u32 VAR_6, int VAR_7, u8 VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_2, VAR_1);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, 0, VAR_9, VAR_8);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9);
  return FUNC_0(VAR_10);
 }

 return VAR_9;
}
