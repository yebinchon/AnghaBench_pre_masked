
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_service {int service_list; int subscriptions; int ranges; int type; int lock; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct hlist_head*) ;
 struct tipc_service* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct tipc_service *FUNC_6(u32 VAR_2, struct hlist_head *VAR_3)
{
 struct tipc_service *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);

 if (!VAR_4) {
  FUNC_4("Service creation failed, no memory\n");
  return ((void*)0);
 }

 FUNC_5(&VAR_4->lock);
 VAR_4->type = VAR_2;
 VAR_4->ranges = VAR_1;
 FUNC_0(&VAR_4->service_list);
 FUNC_1(&VAR_4->subscriptions);
 FUNC_2(&VAR_4->service_list, VAR_3);
 return VAR_4;
}
