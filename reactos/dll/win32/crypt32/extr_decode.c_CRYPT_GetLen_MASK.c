
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static BOOL FUNC_2(const BYTE *VAR_3, DWORD VAR_4, DWORD *VAR_5)
{
    BOOL VAR_6;

    if ((VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5)) &&
     *VAR_5 == VAR_0)
    {
        FUNC_1(VAR_1);
        VAR_6 = VAR_2;
    }
    return VAR_6;
}
