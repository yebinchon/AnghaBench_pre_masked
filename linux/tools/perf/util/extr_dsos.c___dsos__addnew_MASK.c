
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsos {int dummy; } ;
struct dso {int dummy; } ;


 int FUNC_0 (struct dsos*,struct dso*) ;
 struct dso* FUNC_1 (char const*) ;
 int FUNC_2 (struct dso*) ;
 int FUNC_3 (struct dso*) ;

struct dso *FUNC_4(struct dsos *VAR_0, const char *VAR_1)
{
 struct dso *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_3(VAR_2);

  FUNC_2(VAR_2);
 }
 return VAR_2;
}
