
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net {int nametbl_lock; } ;
struct sk_buff {int dummy; } ;
struct publication {int dummy; } ;
struct net {int dummy; } ;
struct name_table {scalar_t__ local_publ_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct name_table* FUNC_3 (struct net*) ;
 struct sk_buff* FUNC_4 (struct net*,struct publication*) ;
 struct publication* FUNC_5 (struct net*,int ,int ,int ,int ,int ,int ,int ) ;
 struct tipc_net* FUNC_6 (struct net*) ;
 int FUNC_7 (struct net*,struct sk_buff*) ;
 int FUNC_8 (struct net*) ;

struct publication *FUNC_9(struct net *VAR_1, u32 VAR_2, u32 VAR_3,
      u32 VAR_4, u32 VAR_5, u32 VAR_6,
      u32 VAR_7)
{
 struct name_table *VAR_8 = FUNC_3(VAR_1);
 struct tipc_net *VAR_9 = FUNC_6(VAR_1);
 struct publication *VAR_10 = ((void*)0);
 struct sk_buff *VAR_11 = ((void*)0);

 FUNC_1(&VAR_9->nametbl_lock);

 if (VAR_8->local_publ_count >= VAR_0) {
  FUNC_0("Bind failed, max limit %u reached\n", VAR_0);
  goto exit;
 }

 VAR_10 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         FUNC_8(VAR_1), VAR_6, VAR_7);
 if (VAR_10) {
  VAR_8->local_publ_count++;
  VAR_11 = FUNC_4(VAR_1, VAR_10);
 }
exit:
 FUNC_2(&VAR_9->nametbl_lock);

 if (VAR_11)
  FUNC_7(VAR_1, VAR_11);
 return VAR_10;
}
