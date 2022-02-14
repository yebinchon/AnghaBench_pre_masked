
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_1, const char **VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7;

 VAR_6 = FUNC_2(VAR_2[0]);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 && VAR_1 == 1)
  return 0;


 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_3 == 0 && VAR_6)
   continue;

  VAR_4 += FUNC_4(VAR_2[VAR_3]) + 1;
 }
 VAR_7 = FUNC_5(VAR_4 + 1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_3 == 0 && VAR_6)
   continue;

  VAR_4 += FUNC_3(&VAR_7[VAR_4], "%s ", VAR_2[VAR_3]);
 }
 VAR_5 = FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 return VAR_5;
}
