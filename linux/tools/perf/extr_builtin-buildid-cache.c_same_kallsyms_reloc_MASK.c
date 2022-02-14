
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int to ;
typedef int from ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,scalar_t__*) ;
 char** VAR_1 ;
 int FUNC_1 (char*,int,char*,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 const char *VAR_6;
 u64 VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10 = -1;

 FUNC_1(VAR_4, sizeof(VAR_4), "%s/kallsyms", VAR_2);
 FUNC_1(VAR_5, sizeof(VAR_5), "%s/kallsyms", VAR_3);

 for (VAR_9 = 0; (VAR_6 = VAR_1[VAR_9]) != ((void*)0); VAR_9++) {
  VAR_10 = FUNC_0(VAR_4, VAR_6, &VAR_7);
  if (!VAR_10)
   break;
 }

 if (VAR_10)
  return 0;

 if (FUNC_0(VAR_5, VAR_6, &VAR_8))
  return 0;

 return VAR_7 == VAR_8;
}
