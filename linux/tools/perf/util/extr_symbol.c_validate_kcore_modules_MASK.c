
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int dummy; } ;
struct map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct map_groups*) ;
 int FUNC_1 (char*,char*,char const*) ;
 struct map_groups* FUNC_2 (struct map*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2,
      struct map *VAR_3)
{
 struct map_groups *VAR_4 = FUNC_2(VAR_3);
 char VAR_5[VAR_1];

 if (!VAR_4)
  return -VAR_0;

 if (!FUNC_1(VAR_5, "modules",
          VAR_2))
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_4))
  return -VAR_0;

 return 0;
}
