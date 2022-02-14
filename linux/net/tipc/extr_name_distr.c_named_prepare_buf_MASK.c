
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*,scalar_t__) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,struct tipc_msg*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct net*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct net *VAR_3, u32 VAR_4, u32 VAR_5,
      u32 VAR_6)
{
 struct sk_buff *VAR_7 = FUNC_2(VAR_1 + VAR_5, VAR_0);
 u32 VAR_8 = FUNC_4(VAR_3);
 struct tipc_msg *VAR_9;

 if (VAR_7 != ((void*)0)) {
  VAR_9 = FUNC_0(VAR_7);
  FUNC_3(VAR_8, VAR_9, VAR_2,
         VAR_4, VAR_1, VAR_6);
  FUNC_1(VAR_9, VAR_1 + VAR_5);
 }
 return VAR_7;
}
