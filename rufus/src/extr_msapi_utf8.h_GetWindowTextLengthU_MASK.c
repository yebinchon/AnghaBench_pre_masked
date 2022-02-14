
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static __inline int FUNC_8(HWND VAR_2)
{
 int VAR_3 = 0;
 DWORD VAR_4 = VAR_0;
 wchar_t* VAR_5 = ((void*)0);
 char* VAR_6 = ((void*)0);

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0();
 if (VAR_3 == 0) goto out;
 VAR_5 = FUNC_4(VAR_3, sizeof(wchar_t));
 VAR_4 = FUNC_0();
 if (VAR_5 == ((void*)0)) {
  VAR_4 = VAR_1; VAR_3 = 0; goto out;
 }
 VAR_3 = FUNC_2(VAR_2, VAR_5, VAR_3);
 VAR_4 = FUNC_0();
 if (VAR_3 == 0) goto out;
 VAR_6 = FUNC_7(VAR_5);
 VAR_4 = FUNC_0();
 if (VAR_6 == ((void*)0)) {
  VAR_4 = VAR_1; VAR_3 = 0; goto out;
 }
 VAR_3 = (int)FUNC_6(VAR_6) + 2;
 VAR_4 = FUNC_0();
out:
 FUNC_5(VAR_5);
 FUNC_5(VAR_6);
 FUNC_3(VAR_4);
 return VAR_3;
}
