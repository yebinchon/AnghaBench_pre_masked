
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(struct dirent *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(VAR_0->d_name);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = (char *)FUNC_0(VAR_2, VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 *VAR_3 = '\0';
 return VAR_2;
}
