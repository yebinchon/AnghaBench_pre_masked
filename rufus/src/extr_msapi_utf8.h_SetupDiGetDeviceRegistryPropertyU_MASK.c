
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PSP_DEVINFO_DATA ;
typedef int PDWORD ;
typedef scalar_t__ PBYTE ;
typedef int HDEVINFO ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static __inline BOOL FUNC_6(HDEVINFO VAR_3, PSP_DEVINFO_DATA VAR_4,
 DWORD VAR_5, PDWORD VAR_6, PBYTE VAR_7, DWORD VAR_8, PDWORD VAR_9)
{
 BOOL VAR_10 = VAR_1;
 DWORD VAR_11 = VAR_0;

 FUNC_3(VAR_7, VAR_8);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5,
  VAR_6, (PBYTE)VAR_2, VAR_8, VAR_9);
 VAR_11 = FUNC_0();
 if ((VAR_10 != 0) && (FUNC_4(VAR_2,
  (char*)(uintptr_t)VAR_7, VAR_8) == 0)) {
  VAR_11 = FUNC_0();
  VAR_10 = VAR_1;
 }
 FUNC_5(VAR_7);
 FUNC_1(VAR_11);
 return VAR_10;
}
