
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_link {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tipc_link* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct tipc_link*,int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_4, u32 VAR_5)
{
 struct tipc_link *VAR_6 = FUNC_0(VAR_4);

 if (!VAR_6)
  return -VAR_2;
 if (VAR_5 < VAR_0)
  VAR_5 = VAR_0;
 if (VAR_5 > VAR_3)
  return -VAR_1;
 FUNC_1(VAR_4);
 FUNC_3(VAR_6, VAR_5);
 FUNC_2(VAR_4);
 return 0;
}
