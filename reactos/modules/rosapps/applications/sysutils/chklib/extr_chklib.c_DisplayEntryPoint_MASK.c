
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef int HANDLE ;
typedef int FARPROC ;


 int FUNC_0 () ;
 int FUNC_1 (int const,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static
void
FUNC_4(
 const HANDLE VAR_0,
 LPCSTR VAR_1
 )
{
 FARPROC VAR_2;

 FUNC_3(
  "[%s]\n",
  VAR_1
  );
 VAR_2 = FUNC_1(
   VAR_0,
   VAR_1
   );
 if (!VAR_2)
 {
  FUNC_2(
   L"GetProcAddress",
   FUNC_0()
   );
  return;
 }
 FUNC_3(
  "0x%p  %s\n",
  VAR_2,
  VAR_1
  );
}
