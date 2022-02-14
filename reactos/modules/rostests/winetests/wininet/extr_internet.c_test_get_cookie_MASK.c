
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int *,int *,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
  DWORD VAR_1;
  BOOL VAR_2;

  VAR_1 = 1024;
  FUNC_2(0xdeadbeef);
  VAR_2 = FUNC_1("http://www.example.com", ((void*)0), ((void*)0), &VAR_1);
  FUNC_3(!VAR_2 && FUNC_0() == VAR_0,
    "InternetGetCookie should have failed with %s and error %d\n",
    VAR_2 ? "TRUE" : "FALSE", FUNC_0());
  FUNC_3(!VAR_1, "len = %u\n", VAR_1);
}
