
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int store_vtbl_t ;
struct TYPE_3__ {int ref; int * properties; int const* vtbl; int dwOpenFlags; int type; int dwMagic; } ;
typedef TYPE_1__ WINECRYPT_CERTSTORE ;
typedef int DWORD ;
typedef int CertStoreType ;


 int VAR_0 ;

void FUNC_0(WINECRYPT_CERTSTORE *VAR_1, DWORD VAR_2, CertStoreType VAR_3, const store_vtbl_t *VAR_4)
{
    VAR_1->ref = 1;
    VAR_1->dwMagic = VAR_0;
    VAR_1->type = VAR_3;
    VAR_1->dwOpenFlags = VAR_2;
    VAR_1->vtbl = VAR_4;
    VAR_1->properties = ((void*)0);
}
