
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCWSTR ;
typedef int * PBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static PCWSTR
FUNC_1(PCWSTR VAR_5, PBYTE VAR_6)
{
    switch (FUNC_0(*VAR_5++))
    {
        case L'N':
            *VAR_6 = VAR_2;
            break;

        case L'O':
            *VAR_6 = VAR_3;
            break;

        case L'E':
            *VAR_6 = VAR_0;
            break;

        case L'M':
            *VAR_6 = VAR_1;
            break;

        case L'S':
            *VAR_6 = VAR_4;
            break;

        default:
            return ((void*)0);
    }

    return VAR_5;
}
