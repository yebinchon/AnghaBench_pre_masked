
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static const char * FUNC_2 (const char * VAR_0, const char *VAR_1) {
 const char *VAR_2 = ((void*)0);
 ut32 VAR_3 = VAR_1 && *VAR_1 ? FUNC_0 (VAR_1) : 0;
 if (VAR_3 && VAR_0 && *VAR_0) {
  VAR_2 = VAR_0;
  while (VAR_2 && *VAR_2 && (VAR_2 - VAR_0 < VAR_3)) {
   VAR_2 = FUNC_1 (VAR_2, VAR_1);
   if (VAR_2) {
    break;
   }
  }
 }
 return VAR_2;
}
