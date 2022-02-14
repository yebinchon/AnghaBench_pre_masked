
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ,int ,scalar_t__) ;

__attribute__((used)) static __inline char* FUNC_1(HKEY VAR_1, const char* VAR_2) {
 static char VAR_3[512];
 VAR_3[0] = 0;
 FUNC_0(VAR_1, VAR_2, VAR_0, (LPBYTE)VAR_3, (DWORD)sizeof(VAR_3)-1);
 return VAR_3;
}
