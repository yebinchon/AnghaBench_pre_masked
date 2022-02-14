
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsos {int lock; } ;
struct dso {int dummy; } ;


 int FUNC_0 (struct dsos*,char const*) ;
 int FUNC_1 (int *) ;
 struct dso* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

struct dso *FUNC_4(struct dsos *VAR_0, const char *VAR_1)
{
 struct dso *VAR_2;
 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_2(FUNC_0(VAR_0, VAR_1));
 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
