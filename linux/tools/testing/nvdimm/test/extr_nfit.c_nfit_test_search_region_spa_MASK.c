
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region_search_spa {scalar_t__ addr; struct nd_region* region; } ;
struct nd_region {scalar_t__ ndr_start; scalar_t__ ndr_size; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (struct device*) ;
 struct nd_region* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct region_search_spa *VAR_2 = VAR_1;
 struct nd_region *VAR_3;
 resource_size_t VAR_4;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = VAR_3->ndr_start + VAR_3->ndr_size;

 if (VAR_2->addr >= VAR_3->ndr_start && VAR_2->addr < VAR_4) {
  VAR_2->region = VAR_3;
  return 1;
 }

 return 0;
}
