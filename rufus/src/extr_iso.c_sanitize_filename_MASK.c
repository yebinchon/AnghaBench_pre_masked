
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unauthorized ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static __inline char* FUNC_3(char* VAR_2, BOOL* VAR_3)
{
 size_t VAR_4, VAR_5;
 char* VAR_6 = ((void*)0);
 char VAR_7[] = { '*', '?', '<', '>', ':', '|' };

 *VAR_3 = VAR_1;
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_2("Could not allocate string for sanitized path");
  return ((void*)0);
 }


 for (VAR_4=2; VAR_4<FUNC_1(VAR_6); VAR_4++) {
  for (VAR_5=0; VAR_5<sizeof(VAR_7); VAR_5++) {
   if (VAR_6[VAR_4] == VAR_7[VAR_5]) {
    VAR_6[VAR_4] = '_';
    *VAR_3 = VAR_0;
   }
  }
 }
 return VAR_6;
}
