
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {unsigned long keepalive_intv; } ;
struct tipc_link {int dummy; } ;


 int FUNC_0 (struct tipc_link*,unsigned long) ;
 unsigned long FUNC_1 (struct tipc_link*) ;

__attribute__((used)) static void FUNC_2(struct tipc_node *VAR_0, struct tipc_link *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3 = ((VAR_2 / 4) > 500) ? 500 : VAR_2 / 4;


 if (VAR_3 < VAR_0->keepalive_intv)
  VAR_0->keepalive_intv = VAR_3;


 FUNC_0(VAR_1, VAR_2 / VAR_0->keepalive_intv);
}
