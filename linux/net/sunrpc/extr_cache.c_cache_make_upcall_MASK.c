
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct cache_detail {int (* cache_upcall ) (struct cache_detail*,struct cache_head*) ;} ;


 int FUNC_0 (struct cache_detail*,struct cache_head*) ;
 int FUNC_1 (struct cache_detail*,struct cache_head*) ;

__attribute__((used)) static int FUNC_2(struct cache_detail *VAR_0, struct cache_head *VAR_1)
{
 if (VAR_0->cache_upcall)
  return VAR_0->cache_upcall(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_1);
}
