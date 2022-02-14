
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (char const*,char,int) ;
 char* FUNC_2 (char const*,char,int) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_0, char **VAR_1, ut32 *VAR_2, char **VAR_3, ut32 *VAR_4) {
 const char *VAR_5 = VAR_0;

 ut32 VAR_6 = VAR_0 && *VAR_0 ? FUNC_4 (VAR_0) : 0;
 int VAR_7 = 0;

 if (!VAR_1 || *VAR_1) {
  return VAR_7;
 } else if (!VAR_3 || *VAR_3) {
  return VAR_7;
 } else if (!VAR_4 || !VAR_2) {
  return VAR_7;
 }

 *VAR_3 = ((void*)0);
 *VAR_2 = 0;

 if (VAR_5 && *VAR_5 && VAR_6 > 1) {
  const char *VAR_8;
  VAR_5 = FUNC_1 (VAR_5, ' ', VAR_6);
  VAR_8 = VAR_5 && *VAR_5 ? FUNC_2 (VAR_5, ' ', -1) : ((void*)0);

  if (VAR_5 && VAR_8 && VAR_5 != VAR_8) {
   *VAR_2 = VAR_8 - VAR_5 + 1;
   *VAR_1 = FUNC_0 (*VAR_2);
   FUNC_3 (*VAR_1, *VAR_2, "%s", VAR_5 );
   VAR_6 = *VAR_2 - 1 < VAR_6 ? VAR_6 - *VAR_2 : 0;
  }

  if (*VAR_1 && VAR_6 > 0) {
   VAR_5 = FUNC_1 (VAR_8+1, ' ', VAR_6);
   VAR_8 = VAR_5 && *VAR_5 ? FUNC_2 (VAR_5, ' ', -1) : ((void*)0);

   if (!VAR_8 && VAR_5 && *VAR_5) {
    VAR_8 = VAR_5 + VAR_6;
   }

   if (VAR_5 && VAR_8 && VAR_5 != VAR_8) {
    *VAR_4 = VAR_8 - VAR_5 + 1;
    *VAR_3 = FUNC_0 (*VAR_4);
    FUNC_3 (*VAR_3, *VAR_4, "%s", VAR_5 );
    VAR_7 = 1;
   }
  }
 }
 return VAR_7;
}
