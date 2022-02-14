
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int,int *,int) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_4, LPCSTR VAR_5)
{
 DWORD VAR_6, VAR_7;
 LPWSTR VAR_8;

 VAR_6 = FUNC_5( VAR_0, 0, VAR_5, -1, ((void*)0), 0);
 if( !VAR_6 )
  return VAR_2;
 if( FUNC_6(VAR_4) != (VAR_6-1) )
  return VAR_2;
 VAR_8 = FUNC_3(FUNC_1(), 0, sizeof(WCHAR)*VAR_6);
 FUNC_5( VAR_0, 0, VAR_5, -1, VAR_8, VAR_6);
 VAR_7 = FUNC_0(FUNC_2(), VAR_3, VAR_4, VAR_6, VAR_8, VAR_6);
 FUNC_4(FUNC_1(), 0, VAR_8);
 return (VAR_7 == VAR_1);
}
