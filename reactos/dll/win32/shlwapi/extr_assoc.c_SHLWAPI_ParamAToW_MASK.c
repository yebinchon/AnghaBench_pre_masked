
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_3(LPCSTR VAR_3, LPWSTR VAR_4, DWORD VAR_5,
                              LPWSTR* VAR_6)
{
  if (VAR_3)
  {
    DWORD VAR_7 = FUNC_2(VAR_0, 0, VAR_3, -1, ((void*)0), 0);

    if (VAR_7 < VAR_5)
    {
      *VAR_6 = VAR_4;
    }
    else
    {

      *VAR_6 = FUNC_1(FUNC_0(), 0,
                                   VAR_7 * sizeof(WCHAR));
      if (!*VAR_6)
        return VAR_1;
    }
    FUNC_2(VAR_0, 0, VAR_3, -1, *VAR_6, VAR_7);
  }
  else
    *VAR_6 = ((void*)0);
  return VAR_2;
}
