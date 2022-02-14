
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (char const*) ;
 struct map* FUNC_1 (int ,struct dso*) ;

struct map *FUNC_2(const char *VAR_0)
{
 struct map *VAR_1 = ((void*)0);
 struct dso *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_1 = FUNC_1(0, VAR_2);

 return VAR_1;
}
