
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustring {unsigned char* Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
typedef unsigned char* LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*,unsigned char*,scalar_t__*) ;
 int FUNC_1 (struct ustring*,struct ustring*) ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_2(HKEY VAR_5, const BYTE VAR_6[VAR_2],
                                  LPBYTE VAR_7,
                                  DWORD *VAR_8)
{
    DWORD VAR_9;
    DWORD VAR_10;

    *VAR_8 = 0;
    VAR_9 = FUNC_0(VAR_5, VAR_4, 0, &VAR_10, ((void*)0), VAR_8);
    if (VAR_9 != VAR_1)
        return VAR_9;
    else if (VAR_10 != VAR_3)
        return VAR_0;
    if (VAR_7)
    {
        struct ustring VAR_11;
        struct ustring VAR_12;

        VAR_9 = FUNC_0(VAR_5, VAR_4, 0, &VAR_10, VAR_7,
                               VAR_8);
        if (VAR_9 != VAR_1)
            return VAR_9;
        else if (VAR_10 != VAR_3)
            return VAR_0;

        VAR_12.Length = VAR_12.MaximumLength = VAR_2;
        VAR_12.Buffer = (unsigned char *)VAR_6;

        VAR_11.Length = VAR_11.MaximumLength = *VAR_8;
        VAR_11.Buffer = VAR_7;
        FUNC_1(&VAR_11, &VAR_12);
    }
    return VAR_1;
}
