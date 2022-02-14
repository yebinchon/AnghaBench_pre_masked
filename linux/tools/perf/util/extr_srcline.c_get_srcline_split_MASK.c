
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dso {scalar_t__ a2l_fails; scalar_t__ has_srcline; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int ,char**,unsigned int*,struct dso*,int,int *,int *) ;
 int FUNC_1 (struct dso*) ;
 char* FUNC_2 (struct dso*) ;

char *FUNC_3(struct dso *VAR_1, u64 VAR_2, unsigned *VAR_3)
{
 char *VAR_4 = ((void*)0);
 const char *VAR_5;

 if (!VAR_1->has_srcline)
  goto out;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 == ((void*)0))
  goto out;

 if (!FUNC_0(VAR_5, VAR_2, &VAR_4, VAR_3, VAR_1, 1, ((void*)0), ((void*)0)))
  goto out;

 VAR_1->a2l_fails = 0;
 return VAR_4;

out:
 if (VAR_1->a2l_fails && ++VAR_1->a2l_fails > VAR_0) {
  VAR_1->has_srcline = 0;
  FUNC_1(VAR_1);
 }

 return ((void*)0);
}
