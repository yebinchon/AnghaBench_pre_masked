
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct dst_cache_pcpu {TYPE_1__ in_saddr; } ;
struct dst_cache {int cache; } ;
typedef int __be32 ;


 int FUNC_0 (struct dst_cache_pcpu*,struct dst_entry*,int ) ;
 struct dst_cache_pcpu* FUNC_1 (int ) ;

void FUNC_2(struct dst_cache *VAR_0, struct dst_entry *VAR_1,
         __be32 VAR_2)
{
 struct dst_cache_pcpu *VAR_3;

 if (!VAR_0->cache)
  return;

 VAR_3 = FUNC_1(VAR_0->cache);
 FUNC_0(VAR_3, VAR_1, 0);
 VAR_3->in_saddr.s_addr = VAR_2;
}
