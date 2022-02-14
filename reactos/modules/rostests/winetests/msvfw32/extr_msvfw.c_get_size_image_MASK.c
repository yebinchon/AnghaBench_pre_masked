
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int LONG ;
typedef int DWORD ;


 int FUNC_0 (int) ;

__attribute__((used)) static DWORD FUNC_1(LONG VAR_0, LONG VAR_1, WORD VAR_2)
{
    DWORD VAR_3 = VAR_0 * VAR_2;
    VAR_3 = (VAR_3 + 7) / 8;
    VAR_3 = (VAR_3 + 3) & ~3;
    VAR_3 *= FUNC_0(VAR_1);
    return VAR_3;
}
