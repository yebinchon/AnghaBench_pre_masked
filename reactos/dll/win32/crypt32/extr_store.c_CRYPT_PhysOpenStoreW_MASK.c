
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef int HCRYPTPROV ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,void const*) ;
 void const* FUNC_1 (void const*) ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_2(HCRYPTPROV VAR_1,
 DWORD VAR_2, const void *VAR_3)
{
    if (VAR_2 & VAR_0)
        FUNC_0("(%ld, %08x, %p): stub\n", VAR_1, VAR_2, VAR_3);
    else
        FUNC_0("(%ld, %08x, %s): stub\n", VAR_1, VAR_2,
         FUNC_1(VAR_3));
    return ((void*)0);
}
