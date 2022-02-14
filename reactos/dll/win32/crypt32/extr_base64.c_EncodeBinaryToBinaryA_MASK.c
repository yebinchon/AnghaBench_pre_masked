
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPSTR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(const BYTE *VAR_3,
 DWORD VAR_4, DWORD VAR_5, LPSTR VAR_6, DWORD *VAR_7)
{
    BOOL VAR_8 = VAR_2;

    if (VAR_6)
    {
        if (*VAR_7 < VAR_4)
        {
            FUNC_0(VAR_0);
            VAR_8 = VAR_1;
        }
        else if (VAR_4)
            FUNC_1(VAR_6, VAR_3, VAR_4);
    }
    else
        *VAR_7 = VAR_4;

    return VAR_8;
}
