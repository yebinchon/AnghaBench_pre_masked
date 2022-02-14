
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net {int nametbl_lock; } ;
struct sk_buff {int dummy; } ;
struct publication {int binding_sock; } ;
struct net {int dummy; } ;
struct name_table {int local_publ_count; } ;


 int FUNC_0 (struct publication*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct name_table* FUNC_5 (struct net*) ;
 struct sk_buff* FUNC_6 (struct net*,struct publication*) ;
 struct publication* FUNC_7 (struct net*,int ,int ,int ,int ,int ) ;
 struct tipc_net* FUNC_8 (struct net*) ;
 int FUNC_9 (struct net*,struct sk_buff*) ;
 int FUNC_10 (struct net*) ;

int FUNC_11(struct net *VAR_1, u32 VAR_2, u32 VAR_3,
     u32 VAR_4, u32 VAR_5)
{
 struct name_table *VAR_6 = FUNC_5(VAR_1);
 struct tipc_net *VAR_7 = FUNC_8(VAR_1);
 u32 VAR_8 = FUNC_10(VAR_1);
 struct sk_buff *VAR_9 = ((void*)0);
 struct publication *VAR_10;

 FUNC_3(&VAR_7->nametbl_lock);

 VAR_10 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8, VAR_5);
 if (VAR_10) {
  VAR_6->local_publ_count--;
  VAR_9 = FUNC_6(VAR_1, VAR_10);
  FUNC_1(&VAR_10->binding_sock);
  FUNC_0(VAR_10, VAR_0);
 } else {
  FUNC_2("Failed to remove local publication {%u,%u,%u}/%u\n",
         VAR_2, VAR_3, VAR_4, VAR_5);
 }
 FUNC_4(&VAR_7->nametbl_lock);

 if (VAR_9) {
  FUNC_9(VAR_1, VAR_9);
  return 1;
 }
 return 0;
}
