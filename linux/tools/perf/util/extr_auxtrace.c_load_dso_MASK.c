
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dso; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (int ) ;
 struct map* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct map*) ;
 int FUNC_3 (struct map*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static struct dso *FUNC_5(const char *VAR_0)
{
 struct map *VAR_1;
 struct dso *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_2(VAR_1) < 0)
  FUNC_4("File '%s' not found or has no symbols.\n", VAR_0);

 VAR_2 = FUNC_0(VAR_1->dso);

 FUNC_3(VAR_1);

 return VAR_2;
}
