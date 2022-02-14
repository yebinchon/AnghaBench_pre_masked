
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef char const* LPCSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,int,...) ;
 scalar_t__ FUNC_3 (char const*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(const char* VAR_1)
{
  LPCSTR VAR_2 = VAR_1;
  LPWSTR VAR_3 = FUNC_1(VAR_2);
  HRESULT VAR_4;

  DWORD VAR_5 = sizeof(DWORD);
  DWORD VAR_6, VAR_7;
  VAR_4 = FUNC_3(VAR_2, (LPBYTE)&VAR_6, VAR_5);
  FUNC_2(VAR_4 == VAR_0, "UrlHashA returned 0x%x (expected S_OK) for %s\n", VAR_4, VAR_1);
  if (&FUNC_4) {
    VAR_4 = FUNC_4(VAR_3, (LPBYTE)&VAR_7, VAR_5);
    FUNC_2(VAR_4 == VAR_0, "UrlHashW returned 0x%x (expected S_OK) for %s\n", VAR_4, VAR_1);
    FUNC_2(VAR_6 == VAR_7,
        "Hashes didn't match (A: 0x%x, W: 0x%x) for %s\n", VAR_6, VAR_7, VAR_1);
  }
  FUNC_0(VAR_3);

}
