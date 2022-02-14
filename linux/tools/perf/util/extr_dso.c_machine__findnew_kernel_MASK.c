
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct dso {int kernel; } ;


 int FUNC_0 (struct dso*,char const*,int) ;
 struct dso* FUNC_1 (struct machine*,char const*) ;

struct dso *FUNC_2(struct machine *VAR_0, const char *VAR_1,
        const char *VAR_2, int VAR_3)
{



 struct dso *VAR_4 = FUNC_1(VAR_0, VAR_1);





 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, VAR_2, 0);
  VAR_4->kernel = VAR_3;
 }

 return VAR_4;
}
