
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,int ,struct path*) ;
 int FUNC_1 (struct path*) ;
 char* FUNC_2 (struct path*) ;

char *FUNC_3(const char *VAR_0)
{
 struct path VAR_1;

 if (VAR_0 && FUNC_0(VAR_0, 0, &VAR_1) == 0) {
  char *VAR_2 = FUNC_2(&VAR_1);

  FUNC_1(&VAR_1);
  return VAR_2;
 }
 return ((void*)0);
}
