
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ PVOID ;
typedef int LPCWSTR ;
typedef int LPCSTR ;
typedef int HGLOBAL ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_5(HANDLE VAR_5, DWORD VAR_6, DWORD VAR_7, DWORD VAR_8, WORD VAR_9, PVOID VAR_10)
{
    HGLOBAL VAR_11;
    DWORD VAR_12 = 0;

    VAR_11 = FUNC_0(VAR_5, VAR_7, VAR_8);
    if (!VAR_11)
        return VAR_3;

    if ((VAR_6 >= 0xC000) && (VAR_6 <= 0xFFFF))
    {
        if (VAR_9 == VAR_0)
            VAR_12 = FUNC_2((LPCSTR)VAR_10);
        else if ((VAR_9 == VAR_2) || (VAR_9 == VAR_1))
            VAR_12 = FUNC_3((LPCWSTR)VAR_10);

        if (!VAR_12)
        {
            FUNC_1(VAR_11);
            return VAR_3;
        }
    }
    else
    {
        VAR_12 = VAR_6;
    }

    if (!FUNC_4(VAR_12, VAR_11))
    {
        FUNC_1(VAR_11);
        return VAR_3;
    }

    return VAR_4;
}
