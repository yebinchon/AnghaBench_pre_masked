
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_node {TYPE_1__* links; } ;
struct tipc_nl_msg {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int link; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct tipc_nl_msg*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_2, struct tipc_nl_msg *VAR_3,
        struct tipc_node *VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 for (VAR_6 = *VAR_5; VAR_6 < VAR_0; VAR_6++) {
  *VAR_5 = VAR_6;

  if (!VAR_4->links[VAR_6].link)
   continue;

  VAR_7 = FUNC_0(VAR_2, VAR_3,
      VAR_4->links[VAR_6].link, VAR_1);
  if (VAR_7)
   return VAR_7;
 }
 *VAR_5 = 0;

 return 0;
}
