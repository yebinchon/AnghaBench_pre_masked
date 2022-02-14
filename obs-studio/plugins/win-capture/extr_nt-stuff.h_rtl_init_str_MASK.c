
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int (* RTLINITUNICODESTRINGFUNC ) (int *,int const*) ;


 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(UNICODE_STRING *VAR_0, const wchar_t *VAR_1)
{
 static bool VAR_2 = 0;
 static RTLINITUNICODESTRINGFUNC VAR_3 = ((void*)0);

 if (!VAR_2) {
  VAR_3 = (RTLINITUNICODESTRINGFUNC)FUNC_0(
   "RtlInitUnicodeString");
  VAR_2 = 1;
 }

 if (VAR_3)
  VAR_3(VAR_0, VAR_1);
}
