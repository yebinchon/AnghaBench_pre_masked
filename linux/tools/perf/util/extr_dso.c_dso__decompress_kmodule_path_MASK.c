
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dso*,char const*,char*,size_t) ;

int FUNC_2(struct dso *VAR_0, const char *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_0(VAR_4);
 return VAR_4 >= 0 ? 0 : -1;
}
