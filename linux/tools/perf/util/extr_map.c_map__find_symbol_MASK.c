
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct map {int dso; } ;


 struct symbol* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct map*) ;

struct symbol *FUNC_2(struct map *VAR_0, u64 VAR_1)
{
 if (FUNC_1(VAR_0) < 0)
  return ((void*)0);

 return FUNC_0(VAR_0->dso, VAR_1);
}
