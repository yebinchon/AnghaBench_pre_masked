
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,unsigned int,char const*,size_t) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static __inline char* FUNC_2(const char* VAR_0, unsigned int VAR_1, const char* VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 char* VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 != ((void*)0)) {
  for (VAR_4=0; VAR_4<FUNC_1(VAR_5); VAR_4++) {
   if ((VAR_5[VAR_4] == '\\') && (VAR_5[VAR_4+1] == 'n')) {
    VAR_5[VAR_4] = '\r';
    VAR_5[VAR_4+1] = '\n';
   }
  }
 }
 return VAR_5;
}
