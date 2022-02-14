
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int provInfo ;
struct TYPE_5__ {int dirty; void* type; int file; int memStore; void* dwOpenFlags; } ;
typedef TYPE_1__ WINE_FILESTOREINFO ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_6__ {int cbSize; TYPE_1__* hStoreProv; int rgpvStoreProvFunc; int cStoreProvFunc; int member_0; } ;
typedef int HCERTSTORE ;
typedef int HANDLE ;
typedef void* DWORD ;
typedef TYPE_2__ CERT_STORE_PROV_INFO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (void*,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_3(DWORD VAR_2,
 HCERTSTORE VAR_3, HANDLE VAR_4, DWORD VAR_5)
{
    WINECRYPT_CERTSTORE *VAR_6 = ((void*)0);
    WINE_FILESTOREINFO *VAR_7 = FUNC_2(sizeof(WINE_FILESTOREINFO));

    if (VAR_7)
    {
        CERT_STORE_PROV_INFO VAR_8 = { 0 };

        VAR_7->dwOpenFlags = VAR_2;
        VAR_7->memStore = VAR_3;
        VAR_7->file = VAR_4;
        VAR_7->type = VAR_5;
        VAR_7->dirty = VAR_0;
        VAR_8.cbSize = sizeof(VAR_8);
        VAR_8.cStoreProvFunc = FUNC_0(VAR_1);
        VAR_8.rgpvStoreProvFunc = VAR_1;
        VAR_8.hStoreProv = VAR_7;
        VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_8);
    }
    return VAR_6;
}
