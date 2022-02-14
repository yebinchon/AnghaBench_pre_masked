
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsos {int lock; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (struct dsos*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct dso *FUNC_3(struct dsos *VAR_0, const char *VAR_1, bool VAR_2)
{
 struct dso *VAR_3;
 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);
 return VAR_3;
}
