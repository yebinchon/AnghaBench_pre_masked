
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int DWORD ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static __inline DWORD FUNC_5(char* VAR_0, DWORD VAR_1)
{
 DWORD VAR_2;
 wchar_t *VAR_3 = FUNC_1(VAR_1, sizeof(wchar_t));
 if (VAR_3 == ((void*)0))
  return 0;
 FUNC_3(VAR_0, VAR_3, VAR_1);
 VAR_2 = FUNC_0(VAR_3, VAR_1);
 FUNC_4(VAR_3, VAR_0, VAR_1);
 FUNC_2(VAR_3);
 return VAR_2;
}
