
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct neighbour {int (* output ) (struct neighbour*,struct sk_buff*) ;} ;
struct dst_entry {int dummy; } ;
struct dn_route {struct neighbour* n; } ;


 struct dst_entry* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct neighbour*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3 = FUNC_0(VAR_2);
 struct dn_route *VAR_4 = (struct dn_route *)VAR_3;
 struct neighbour *VAR_5 = VAR_4->n;

 return VAR_5->output(VAR_5, VAR_2);
}
