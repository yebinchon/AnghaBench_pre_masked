
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dsos; } ;
struct dso {int dummy; } ;


 int FUNC_0 (int *,struct dso*) ;
 struct dso* FUNC_1 (char const*) ;
 int FUNC_2 (struct dso*,char const*,int) ;

__attribute__((used)) static struct dso *FUNC_3(struct machine *VAR_0, const char *VAR_1,
       const char *VAR_2)
{
 struct dso *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != ((void*)0)) {
  FUNC_0(&VAR_0->dsos, VAR_3);
  FUNC_2(VAR_3, VAR_2, 0);
 }

 return VAR_3;
}
