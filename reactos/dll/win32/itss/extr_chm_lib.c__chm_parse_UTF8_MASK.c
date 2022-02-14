
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UInt64 ;
typedef int UChar ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,char*,int ,char*,int ) ;

__attribute__((used)) static BOOL FUNC_1(UChar **VAR_2, UInt64 VAR_3, WCHAR *VAR_4)
{
    DWORD VAR_5 = FUNC_0(VAR_1, 0, (char *)*VAR_2, VAR_3, VAR_4, VAR_0);
    VAR_4[VAR_5] = '\0';
    *VAR_2 += VAR_3;
    return !!VAR_5;
}
