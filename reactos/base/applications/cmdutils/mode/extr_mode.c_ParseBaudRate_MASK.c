
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef int * PCWSTR ;


 int * FUNC_0 (int *,int*) ;

__attribute__((used)) static PCWSTR
FUNC_1(PCWSTR VAR_0, PDWORD VAR_1)
{
    VAR_0 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_0) return ((void*)0);





    switch (*VAR_1)
    {

        case 11: case 15: case 30: case 60:
            *VAR_1 *= 10;
            break;


        case 12: case 24: case 48: case 96:
            *VAR_1 *= 100;
            break;

        case 19:
            *VAR_1 = 19200;
            break;
    }

    return VAR_0;
}
