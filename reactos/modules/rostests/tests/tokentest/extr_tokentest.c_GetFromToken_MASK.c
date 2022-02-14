
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TOKEN_INFORMATION_CLASS ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PBYTE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int,scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int) ;

PVOID
FUNC_5(HANDLE VAR_1, TOKEN_INFORMATION_CLASS VAR_2)
{
 BOOL VAR_3;
    DWORD VAR_4;
 PBYTE VAR_5 = 0;

    VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 0, &VAR_4);
    if ( ! VAR_3 && FUNC_0() != VAR_0)
  return 0;

    VAR_5 = (PBYTE) FUNC_3(VAR_4);
    if ( ! FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4, &VAR_4) )
 {
  FUNC_4("GetFromToken() failed for TOKEN_INFORMATION_CLASS(%d): %d\n", VAR_2, FUNC_0());
  FUNC_2(VAR_5);
  return 0;
 }

 return VAR_5;
}
