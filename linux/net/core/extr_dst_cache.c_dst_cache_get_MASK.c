
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int dummy; } ;
struct dst_cache {int cache; } ;


 struct dst_entry* FUNC_0 (struct dst_cache*,int ) ;
 int FUNC_1 (int ) ;

struct dst_entry *FUNC_2(struct dst_cache *VAR_0)
{
 if (!VAR_0->cache)
  return ((void*)0);

 return FUNC_0(VAR_0, FUNC_1(VAR_0->cache));
}
