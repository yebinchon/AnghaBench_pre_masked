
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_service {int lock; } ;
struct publication {int dummy; } ;
struct net {int dummy; } ;
struct name_table {int * services; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct name_table* FUNC_4 (struct net*) ;
 struct tipc_service* FUNC_5 (int ,int *) ;
 struct tipc_service* FUNC_6 (struct net*,int ) ;
 struct publication* FUNC_7 (struct net*,struct tipc_service*,int ,int ,int ,int ,int ,int ,int ) ;

struct publication *FUNC_8(struct net *VAR_1, u32 VAR_2,
          u32 VAR_3, u32 VAR_4,
          u32 VAR_5, u32 VAR_6,
          u32 VAR_7, u32 VAR_8)
{
 struct name_table *VAR_9 = FUNC_4(VAR_1);
 struct tipc_service *VAR_10;
 struct publication *VAR_11;

 if (VAR_5 > VAR_0 || VAR_3 > VAR_4) {
  FUNC_1("Failed to bind illegal {%u,%u,%u} with scope %u\n",
    VAR_2, VAR_3, VAR_4, VAR_5);
  return ((void*)0);
 }
 VAR_10 = FUNC_6(VAR_1, VAR_2);
 if (!VAR_10)
  VAR_10 = FUNC_5(VAR_2, &VAR_9->services[FUNC_0(VAR_2)]);
 if (!VAR_10)
  return ((void*)0);

 FUNC_2(&VAR_10->lock);
 VAR_11 = FUNC_7(VAR_1, VAR_10, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_3(&VAR_10->lock);
 return VAR_11;
}
