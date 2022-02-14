
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPWSTR ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int**,int ) ;

__attribute__((used)) static BOOL FUNC_1(DWORD_PTR *VAR_2, LPWSTR* VAR_3)
{
    DWORD VAR_4;
    LPWSTR VAR_5;

    VAR_4 = FUNC_0(*VAR_3, &VAR_5, 0);

    switch (*VAR_5) {
    case '\0': break;
    case ' ': VAR_5++; break;
    default: return VAR_0;
    }

    *VAR_2 |= VAR_4;
    *VAR_3 = VAR_5;
    return VAR_1;
}
