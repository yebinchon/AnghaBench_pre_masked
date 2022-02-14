
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdarray {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct fdarray*,int *) ;
 scalar_t__ FUNC_1 (int *,char*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct fdarray *VAR_1, const char *VAR_2, FILE *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0 <= 0)
  return 0;

 VAR_4 += FUNC_1(VAR_3, "\n%s: ", VAR_2);
 return VAR_4 + FUNC_0(VAR_1, VAR_3);
}
