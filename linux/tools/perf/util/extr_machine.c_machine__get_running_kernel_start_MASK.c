
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct machine {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int *) ;
 int FUNC_1 (struct machine*,char*,int) ;
 char** VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct machine *VAR_2,
          const char **VAR_3,
          u64 *VAR_4, u64 *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7, VAR_8 = -1;
 const char *VAR_9;
 u64 VAR_10 = 0;

 FUNC_1(VAR_2, VAR_6, VAR_0);

 if (FUNC_2(VAR_6, "/proc/kallsyms"))
  return 0;

 for (VAR_7 = 0; (VAR_9 = VAR_1[VAR_7]) != ((void*)0); VAR_7++) {
  VAR_8 = FUNC_0(VAR_6, VAR_9, &VAR_10);
  if (!VAR_8)
   break;
 }

 if (VAR_8)
  return -1;

 if (VAR_3)
  *VAR_3 = VAR_9;

 *VAR_4 = VAR_10;

 VAR_8 = FUNC_0(VAR_6, "_etext", &VAR_10);
 if (!VAR_8)
  *VAR_5 = VAR_10;

 return 0;
}
