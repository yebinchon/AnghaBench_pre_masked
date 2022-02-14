
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int dummy; } ;
struct map {int dummy; } ;
struct kmap {struct map_groups* kmaps; } ;


 struct kmap* FUNC_0 (struct map*) ;
 int FUNC_1 (char*) ;

struct map_groups *FUNC_2(struct map *VAR_0)
{
 struct kmap *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1 || !VAR_1->kmaps) {
  FUNC_1("Internal error: map__kmaps with a non-kernel map\n");
  return ((void*)0);
 }
 return VAR_1->kmaps;
}
