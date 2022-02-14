
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct map {int dso; } ;


 struct symbol* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct map*) ;

struct symbol *FUNC_4(struct map *VAR_0, const char *VAR_1)
{
 if (FUNC_3(VAR_0) < 0)
  return ((void*)0);

 if (!FUNC_2(VAR_0->dso))
  FUNC_1(VAR_0->dso);

 return FUNC_0(VAR_0->dso, VAR_1);
}
