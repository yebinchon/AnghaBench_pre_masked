
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_node {TYPE_1__* links; } ;
struct tipc_link {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct tipc_link* link; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (struct tipc_link*) ;
 struct tipc_node* FUNC_2 (struct net*,size_t) ;
 int FUNC_3 (struct tipc_node*) ;
 int FUNC_4 (struct tipc_node*) ;
 int FUNC_5 (struct tipc_node*) ;

int FUNC_6(struct net *VAR_2, u32 VAR_3, u32 VAR_4,
      char *VAR_5, size_t VAR_6)
{
 struct tipc_link *VAR_7;
 int VAR_8 = -VAR_0;
 struct tipc_node *VAR_9 = FUNC_2(VAR_2, VAR_4);

 if (!VAR_9)
  return VAR_8;

 if (VAR_3 >= VAR_1)
  goto exit;

 FUNC_4(VAR_9);
 VAR_7 = VAR_9->links[VAR_3].link;
 if (VAR_7) {
  FUNC_0(VAR_5, FUNC_1(VAR_7), VAR_6);
  VAR_8 = 0;
 }
 FUNC_5(VAR_9);
exit:
 FUNC_3(VAR_9);
 return VAR_8;
}
