
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static char* FUNC_4(const char* VAR_0)
{
 static char VAR_1[128];
 char *VAR_2;
 size_t VAR_3, VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 < 5)
  return ((void*)0);

 for (VAR_3 = VAR_4 - 2; VAR_3 > 0; VAR_3--) {
  if (VAR_0[VAR_3] == '/') {
   VAR_3++;
   break;
  }
 }
 FUNC_1(VAR_1, &VAR_0[VAR_3]);


 VAR_2 = FUNC_3(VAR_1, "%3F");
 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;
 VAR_2 = FUNC_3(VAR_1, "%3f");
 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); VAR_3++) {
  if ((VAR_1[VAR_3] == '?') || (VAR_1[VAR_3] == '#')) {
   VAR_1[VAR_3] = 0;
   break;
  }
 }
 return VAR_1;
}
