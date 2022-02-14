
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (void const*,int,int*) ;
 int FUNC_1 (char const*,char,int) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, int VAR_1,
       const char *VAR_2, int VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);

 if (!VAR_5 || VAR_4 < VAR_3)

  return 0;

 if (FUNC_2(VAR_5, VAR_2, VAR_3) != 0)
  return 0;

 if (VAR_5[VAR_3] == '\0')
  return 1;
 else if (!FUNC_1(VAR_2, '@', VAR_3) && (VAR_5[VAR_3] == '@'))
  return 1;
 else
  return 0;
}
