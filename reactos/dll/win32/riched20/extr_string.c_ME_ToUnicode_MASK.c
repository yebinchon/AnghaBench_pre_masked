
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int * LPVOID ;
typedef scalar_t__ LONG ;
typedef void* INT ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,int ,int *,int,int *,int) ;
 int * FUNC_1 (int) ;
 void* FUNC_2 (int *) ;

LPWSTR FUNC_3(LONG VAR_1, LPVOID VAR_2, INT *VAR_3)
{
  *VAR_3 = 0;
  if (!VAR_2) return ((void*)0);

  if (VAR_1 == VAR_0)
  {
    *VAR_3 = FUNC_2(VAR_2);
    return VAR_2;
  }
  else {
    WCHAR *VAR_4;
    int VAR_5 = FUNC_0(VAR_1, 0, VAR_2, -1, ((void*)0), 0);

    if(!VAR_5) return ((void*)0);

    if((VAR_4 = FUNC_1( VAR_5 * sizeof(WCHAR) )) != ((void*)0))
      *VAR_3 = FUNC_0(VAR_1, 0, VAR_2, -1, VAR_4, VAR_5) - 1;
    return VAR_4;
  }
}
