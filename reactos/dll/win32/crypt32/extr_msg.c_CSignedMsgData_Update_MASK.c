
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SignOrVerify ;
typedef int DWORD ;
typedef int CSignedMsgData ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int const*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL FUNC_3(CSignedMsgData *VAR_1,
 const BYTE *VAR_2, DWORD VAR_3, BOOL VAR_4, SignOrVerify VAR_5)
{
    BOOL VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);

    if (VAR_6 && VAR_4)
    {
        VAR_6 = FUNC_1(VAR_1, VAR_5);
        if (VAR_6 && VAR_5 == VAR_0)
            VAR_6 = FUNC_0(VAR_1);
    }
    return VAR_6;
}
