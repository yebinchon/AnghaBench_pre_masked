
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int * LPDIRECT3DTEXTURE9 ;
typedef int * LPD3D9MIPMAP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

LPD3D9MIPMAP FUNC_1(LPDIRECT3DTEXTURE9 VAR_2)
{
    if (((void*)0) == VAR_2)
        return ((void*)0);

    return (LPD3D9MIPMAP)((ULONG_PTR)VAR_2 - FUNC_0(VAR_0, VAR_1));
}
