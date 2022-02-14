
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsos {int dummy; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (struct dsos*,char const*) ;
 struct dso* FUNC_1 (struct dsos*,char const*,int) ;

struct dso *FUNC_2(struct dsos *VAR_0, const char *VAR_1)
{
 struct dso *VAR_2 = FUNC_1(VAR_0, VAR_1, 0);

 return VAR_2 ? VAR_2 : FUNC_0(VAR_0, VAR_1);
}
