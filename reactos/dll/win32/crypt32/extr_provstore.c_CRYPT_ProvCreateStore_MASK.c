
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwStoreProvFlags; int * provControl; int * provDeleteCtl; int * provWriteCtl; int * provDeleteCrl; int * provWriteCrl; int * provDeleteCert; int * provWriteCert; int * provCloseStore; int hStoreProv; int * memStore; int hdr; } ;
typedef TYPE_1__ WINE_PROVIDERSTORE ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_6__ {int dwStoreProvFlags; size_t cStoreProvFunc; int ** rgpvStoreProvFunc; int hStoreProv; } ;
typedef int DWORD ;
typedef TYPE_2__ CERT_STORE_PROV_INFO ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;

WINECRYPT_CERTSTORE *FUNC_3(DWORD VAR_11,
 WINECRYPT_CERTSTORE *VAR_12, const CERT_STORE_PROV_INFO *VAR_13)
{
    WINE_PROVIDERSTORE *VAR_14 = FUNC_2(sizeof(WINE_PROVIDERSTORE));

    if (VAR_14)
    {
        FUNC_0(&VAR_14->hdr, VAR_11, VAR_10, &VAR_9);
        VAR_14->dwStoreProvFlags = VAR_13->dwStoreProvFlags;
        if (VAR_14->dwStoreProvFlags & VAR_5)
        {
            FUNC_1(VAR_12, 0);
            VAR_14->memStore = ((void*)0);
        }
        else
            VAR_14->memStore = VAR_12;
        VAR_14->hStoreProv = VAR_13->hStoreProv;
        if (VAR_13->cStoreProvFunc > VAR_0)
            VAR_14->provCloseStore =
             VAR_13->rgpvStoreProvFunc[VAR_0];
        else
            VAR_14->provCloseStore = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_6)
            VAR_14->provWriteCert = VAR_13->rgpvStoreProvFunc[
             VAR_6];
        else
            VAR_14->provWriteCert = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_2)
            VAR_14->provDeleteCert = VAR_13->rgpvStoreProvFunc[
             VAR_2];
        else
            VAR_14->provDeleteCert = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_7)
            VAR_14->provWriteCrl = VAR_13->rgpvStoreProvFunc[
             VAR_7];
        else
            VAR_14->provWriteCrl = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_3)
            VAR_14->provDeleteCrl = VAR_13->rgpvStoreProvFunc[
             VAR_3];
        else
            VAR_14->provDeleteCrl = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_8)
            VAR_14->provWriteCtl = VAR_13->rgpvStoreProvFunc[
             VAR_8];
        else
            VAR_14->provWriteCtl = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_4)
            VAR_14->provDeleteCtl = VAR_13->rgpvStoreProvFunc[
             VAR_4];
        else
            VAR_14->provDeleteCtl = ((void*)0);
        if (VAR_13->cStoreProvFunc >
         VAR_1)
            VAR_14->provControl = VAR_13->rgpvStoreProvFunc[
             VAR_1];
        else
            VAR_14->provControl = ((void*)0);
    }
    return (WINECRYPT_CERTSTORE*)VAR_14;
}
