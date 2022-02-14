
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {int dev; scalar_t__ primary_key; } ;
typedef int __be32 ;
struct TYPE_2__ {int number; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct neighbour*,struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct neighbour *VAR_1, struct sk_buff *VAR_2)
{
 __be32 *VAR_3 = (__be32 *) VAR_1->primary_key;

 FUNC_1("(neigh %p, skb %p)\n", VAR_1, VAR_2);
 FUNC_2(VAR_0, FUNC_0(VAR_1->dev)->number, *VAR_3);
}
