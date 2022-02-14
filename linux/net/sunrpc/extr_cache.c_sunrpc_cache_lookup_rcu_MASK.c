
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct cache_detail {int dummy; } ;


 struct cache_head* FUNC_0 (struct cache_detail*,struct cache_head*,int) ;
 struct cache_head* FUNC_1 (struct cache_detail*,struct cache_head*,int) ;

struct cache_head *FUNC_2(struct cache_detail *VAR_0,
        struct cache_head *VAR_1, int VAR_2)
{
 struct cache_head *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
