
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int * id; scalar_t__ size; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ) ;

__attribute__((used)) static void FUNC_2(const struct pernet_operations *VAR_0, struct net *VAR_1)
{
 if (VAR_0->id && VAR_0->size) {
  FUNC_0(FUNC_1(VAR_1, *VAR_0->id));
 }
}
