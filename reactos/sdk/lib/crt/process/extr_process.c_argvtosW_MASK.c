
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _TCHAR ;


 int FUNC_0 (scalar_t__ const* const) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const* const,size_t) ;

__attribute__((used)) static _TCHAR*
FUNC_3(const _TCHAR* const* VAR_0, _TCHAR VAR_1)
{
   int VAR_2;
   size_t VAR_3;
   _TCHAR *VAR_4, *VAR_5;

   if (VAR_0 == ((void*)0))
      return ((void*)0);

   for (VAR_2 = 0, VAR_3 = 0; VAR_0[VAR_2]; VAR_2++)
   {
      VAR_3 += FUNC_0(VAR_0[VAR_2]) + 1;
   }

   VAR_5 = VAR_4 = (_TCHAR*) FUNC_1((VAR_3 + 1) * sizeof(_TCHAR));
   if (VAR_5 == ((void*)0))
      return ((void*)0);

   for(VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
   {
      VAR_3 = FUNC_0(VAR_0[VAR_2]);
      FUNC_2(VAR_4, VAR_0[VAR_2], VAR_3 * sizeof(_TCHAR));
      VAR_4 += VAR_3;
      *VAR_4++ = VAR_1;
   }
   *VAR_4 = 0;

   return VAR_5;
}
