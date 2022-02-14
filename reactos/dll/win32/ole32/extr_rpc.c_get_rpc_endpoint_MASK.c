
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int OXID ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,char const*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(LPWSTR VAR_0, const OXID *VAR_1)
{

    static const WCHAR VAR_2[] = {'\\','p','i','p','e','\\','O','L','E','_','%','0','8','l','x','%','0','8','l','x',0};
    FUNC_0(VAR_0, VAR_2, (DWORD)(*VAR_1 >> 32),(DWORD)*VAR_1);
}
