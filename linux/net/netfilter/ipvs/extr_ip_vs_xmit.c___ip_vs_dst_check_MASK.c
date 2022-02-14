
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_dest_dst {int dst_cookie; struct dst_entry* dst_cache; } ;
struct ip_vs_dest {int dest_dst; } ;
struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct TYPE_2__ {int * (* check ) (struct dst_entry*,int ) ;} ;


 struct ip_vs_dest_dst* FUNC_0 (int ) ;
 int * FUNC_1 (struct dst_entry*,int ) ;

__attribute__((used)) static inline struct ip_vs_dest_dst *
FUNC_2(struct ip_vs_dest *VAR_0)
{
 struct ip_vs_dest_dst *VAR_1 = FUNC_0(VAR_0->dest_dst);
 struct dst_entry *VAR_2;

 if (!VAR_1)
  return ((void*)0);
 VAR_2 = VAR_1->dst_cache;
 if (VAR_2->obsolete &&
     VAR_2->ops->check(VAR_2, VAR_1->dst_cookie) == ((void*)0))
  return ((void*)0);
 return VAR_1;
}
