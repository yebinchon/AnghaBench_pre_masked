
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static __inline const char* FUNC_1(const char* VAR_0)
{
 size_t VAR_1;
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 for (VAR_1 = FUNC_0(VAR_0); VAR_1 != 0; VAR_1--) {
  if ((VAR_0[VAR_1] == '/') || (VAR_0[VAR_1] == '\\')) {
   VAR_1++;
   break;
  }
 }
 return &VAR_0[VAR_1];
}
