
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CertMgrStoreInfo {scalar_t__ name; } ;
struct CertMgrData {int nStores; struct CertMgrStoreInfo const* stores; } ;
struct TYPE_2__ {int mask; scalar_t__ lParam; scalar_t__ pszText; } ;
typedef TYPE_1__ TCITEMW ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ HCERTSTORE ;
typedef int DWORD ;


 int FUNC_0 (struct CertMgrStoreInfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct CertMgrStoreInfo* VAR_8 ;
 struct CertMgrStoreInfo* VAR_9 ;

__attribute__((used)) static void FUNC_5(HWND VAR_10, DWORD VAR_11, struct CertMgrData *VAR_12)
{
    const struct CertMgrStoreInfo *VAR_13;
    int VAR_14, VAR_15;
    HWND VAR_16 = FUNC_3(VAR_10, VAR_4);

    if (VAR_11 & VAR_2)
    {
        VAR_13 = VAR_9;
        VAR_14 = FUNC_0(VAR_9);
    }
    else
    {
        VAR_13 = VAR_8;
        VAR_14 = FUNC_0(VAR_8);
    }
    if (VAR_11 & VAR_3)
        VAR_14 = 1;
    VAR_12->nStores = VAR_14;
    VAR_12->stores = VAR_13;
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
        LPCWSTR VAR_17;
        TCITEMW VAR_18;
        HCERTSTORE VAR_19;

        if (!(VAR_17 = FUNC_2(VAR_13[VAR_15].name)))
            VAR_17 = VAR_13[VAR_15].name;
        VAR_19 = FUNC_1(VAR_0, 0, 0,
         VAR_1, VAR_13[VAR_15].name);
        VAR_18.mask = VAR_6 | VAR_5;
        VAR_18.pszText = (LPWSTR)VAR_17;
        VAR_18.lParam = (LPARAM)VAR_19;
        FUNC_4(VAR_16, VAR_7, VAR_15, (LPARAM)&VAR_18);
    }
}
