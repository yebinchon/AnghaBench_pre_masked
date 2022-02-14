
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int name; int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 scalar_t__ FUNC_1 (struct tipc_link*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,char*,...) ;

char *FUNC_4(struct tipc_link *VAR_1, char *VAR_2)
{
 if (!VAR_1)
  FUNC_3(VAR_2, VAR_0, "null");
 else if (FUNC_1(VAR_1))
  FUNC_3(VAR_2, VAR_0, "broadcast-sender");
 else if (FUNC_0(VAR_1))
  FUNC_3(VAR_2, VAR_0,
     "broadcast-receiver, peer %x", VAR_1->addr);
 else
  FUNC_2(VAR_2, VAR_1->name, VAR_0);

 return VAR_2;
}
