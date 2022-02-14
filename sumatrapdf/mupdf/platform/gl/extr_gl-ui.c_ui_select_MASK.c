
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*,char const*,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(const void *VAR_0, const char *VAR_1, const char *VAR_2[], int VAR_3)
{
 int VAR_4, VAR_5 = -1;
 if (FUNC_0(VAR_0, VAR_1, 0, VAR_3))
 {
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
   if (FUNC_2(VAR_2[VAR_4]))
    VAR_5 = VAR_4;
  FUNC_1();
 }
 return VAR_5;
}
