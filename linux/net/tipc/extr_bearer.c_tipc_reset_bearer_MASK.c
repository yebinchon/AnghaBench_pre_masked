
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bearer {int identity; int name; } ;
struct net {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net*,struct tipc_bearer*) ;
 int FUNC_2 (struct net*,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_0, struct tipc_bearer *VAR_1)
{
 FUNC_0("Resetting bearer <%s>\n", VAR_1->name);
 FUNC_2(VAR_0, VAR_1->identity);
 FUNC_1(VAR_0, VAR_1);
 return 0;
}
