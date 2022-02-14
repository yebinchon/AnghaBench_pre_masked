
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;
struct kmap {int dummy; } ;


 struct kmap* FUNC_0 (struct map*) ;
 int FUNC_1 (char*) ;

struct kmap *FUNC_2(struct map *VAR_0)
{
 struct kmap *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  FUNC_1("Internal error: map__kmap with a non-kernel map\n");
 return VAR_1;
}
