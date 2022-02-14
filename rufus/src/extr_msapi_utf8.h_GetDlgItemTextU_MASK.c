
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static __inline UINT FUNC_6(HWND VAR_2, int VAR_3, char* VAR_4, int VAR_5)
{
 UINT VAR_6 = 0;
 DWORD VAR_7 = VAR_0;

 FUNC_3(VAR_4, VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_5);
 VAR_7 = FUNC_1();
 if ((VAR_6 != 0) && ((VAR_6 = FUNC_4(VAR_1, VAR_4, VAR_5)) == 0)) {
  VAR_7 = FUNC_1();
 }
 FUNC_5(VAR_4);
 FUNC_2(VAR_7);
 return VAR_6;
}
