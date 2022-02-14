
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * dxtn_conversion_func ;
typedef int D3DFORMAT ;
typedef int BOOL ;





 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static dxtn_conversion_func FUNC_0(D3DFORMAT VAR_6, BOOL VAR_7)
{
    switch (VAR_6)
    {
        case 130:
            return VAR_7 ? VAR_1 : VAR_0;
        case 129:
            return VAR_7 ? VAR_3 : VAR_2;
        case 128:
            return VAR_7 ? VAR_5 : VAR_4;
        default:
            return ((void*)0);
    }
}
