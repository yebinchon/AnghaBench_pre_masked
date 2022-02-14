
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustring {unsigned char* Buffer; int MaximumLength; int Length; } ;
typedef int LPCWSTR ;
typedef unsigned char* LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (struct ustring*,struct ustring*) ;
 unsigned char* FUNC_2 (int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int const*,int ) ;
 int VAR_3 ;

__attribute__((used)) static DWORD FUNC_5(HKEY VAR_4, LPCWSTR VAR_5, DWORD VAR_6,
                                   const BYTE VAR_7[VAR_1],
                                   const BYTE *VAR_8, DWORD VAR_9)
{
    LPBYTE VAR_10;
    struct ustring VAR_11;
    struct ustring VAR_12;
    DWORD VAR_13;

    VAR_12.Length = VAR_12.MaximumLength = VAR_1;
    VAR_12.Buffer = (unsigned char *)VAR_7;

    VAR_10 = FUNC_2(VAR_9);
    if (!VAR_10) return VAR_0;

    FUNC_4(VAR_10, VAR_8, VAR_9);
    VAR_11.Length = VAR_11.MaximumLength = VAR_9;
    VAR_11.Buffer = VAR_10;
    FUNC_1(&VAR_11, &VAR_12);

    VAR_13 = FUNC_0(VAR_4, VAR_3, 0, VAR_2, VAR_10, VAR_9);
    FUNC_3(VAR_10);

    return VAR_13;
}
