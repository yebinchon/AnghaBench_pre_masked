
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct net*,struct dst_entry*,struct flowi const*,struct sock const*,int,int ) ;

struct dst_entry *FUNC_1(struct net *VAR_0, struct dst_entry *VAR_1,
         const struct flowi *VAR_2, const struct sock *VAR_3,
         int VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
