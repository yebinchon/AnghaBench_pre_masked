
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int * LPCWSTR ;
typedef unsigned int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(LPCWSTR VAR_1, WORD *VAR_2, DWORD VAR_3)
{
    unsigned VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
        VAR_2[VAR_4] = FUNC_0( VAR_0, VAR_1[VAR_4] );
}
