
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(DWORD *VAR_3, DWORD VAR_4)
{
    BOOL VAR_5;

    if (*VAR_3 < VAR_4)
    {
        *VAR_3 = VAR_4;
        FUNC_0(VAR_0);
        VAR_5 = VAR_1;
    }
    else
    {
        *VAR_3 = VAR_4;
        VAR_5 = VAR_2;
    }
    return VAR_5;
}
