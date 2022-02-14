
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int * LPDIRECT3DDEVICE9_INT ;
typedef int * LPDIRECT3DDEVICE9 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

LPDIRECT3DDEVICE9_INT FUNC_1(LPDIRECT3DDEVICE9 VAR_2)
{
    if (((void*)0) == VAR_2)
        return ((void*)0);

    return (LPDIRECT3DDEVICE9_INT)((ULONG_PTR)VAR_2 - FUNC_0(VAR_0, VAR_1));
}
