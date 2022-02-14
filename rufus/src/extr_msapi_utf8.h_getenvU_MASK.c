
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 int * FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static __inline char* FUNC_6(const char* VAR_1)
{
 FUNC_4(VAR_1);
 char* VAR_2 = ((void*)0);
 wchar_t* VAR_3 = ((void*)0);

 DWORD VAR_4 = FUNC_0(VAR_0, VAR_3, 0);
 VAR_3 = FUNC_1(VAR_4, sizeof(wchar_t));
 if (VAR_3 == ((void*)0)) {
  FUNC_5(VAR_1);
  return ((void*)0);
 }
 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_4);
 if (VAR_4 != 0)
  VAR_2 = FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 FUNC_5(VAR_1);
 return VAR_2;
}
