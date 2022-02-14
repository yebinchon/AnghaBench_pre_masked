
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int,int,int*,int*) ;

__attribute__((used)) static inline BYTE FUNC_1(BYTE VAR_0, BYTE VAR_1, BYTE VAR_2)
{
    BYTE VAR_3, VAR_4;

    if (VAR_2 == 16) return VAR_1;
    if (VAR_2 <= 1) return VAR_0;
    if (VAR_1 == VAR_0) return VAR_0;

    FUNC_0( VAR_2, VAR_1, &VAR_3, &VAR_4 );

    if (VAR_0 > VAR_1)
    {
        DWORD VAR_5 = VAR_0 - VAR_1;
        DWORD VAR_6 = VAR_4 - VAR_1;
        VAR_0 = VAR_1 + (VAR_5 * VAR_6 ) / (0xff - VAR_1);
        return VAR_0;
    }
    else
    {
        DWORD VAR_7 = VAR_1 - VAR_0;
        DWORD VAR_8 = VAR_1 - VAR_3 ;
        VAR_0 = VAR_1 - (VAR_7 * VAR_8) / VAR_1;
        return VAR_0;
    }
}
