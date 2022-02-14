
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int himages; int num_zones; int zone_enumerator; int zone_mgr; int * zones; int * levels; void* zone_attr; void* hlv; void* htb; int hsec; } ;
typedef TYPE_1__ secdlg_data ;
typedef int ZONEATTRIBUTES ;
typedef int LPARAM ;
typedef int LONG_PTR ;
typedef int INT_PTR ;
typedef int HWND ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (void*,int ,int,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*,int,...) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_12 (TYPE_1__*,scalar_t__*,scalar_t__) ;
 void* FUNC_13 (int) ;
 TYPE_1__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static INT_PTR FUNC_17(HWND VAR_19)
{
    secdlg_data *VAR_20;
    HRESULT VAR_21;
    DWORD VAR_22;
    DWORD VAR_23 = 0;
    DWORD VAR_24;

    VAR_20 = FUNC_14(sizeof(secdlg_data));
    FUNC_10(VAR_19, VAR_0, (LONG_PTR) VAR_20);
    if (!VAR_20) {
        return VAR_1;
    }

    VAR_20->hsec = VAR_19;
    VAR_20->hlv = FUNC_3(VAR_19, VAR_2);
    VAR_20->htb = FUNC_3(VAR_19, VAR_3);

    FUNC_1(VAR_20->htb, VAR_1);

    FUNC_11("(%p)   (data: %p, listview: %p, trackbar: %p)\n", VAR_19, VAR_20, VAR_20->hlv, VAR_20->htb);

    FUNC_9(VAR_20->htb, VAR_11, VAR_1, FUNC_7(0, VAR_8 - 1));
    FUNC_9(VAR_20->htb, VAR_12, 1, 0 );


    VAR_20->himages = FUNC_6(FUNC_4(VAR_9), FUNC_4(VAR_10), VAR_4 | VAR_5, 1, 1);

    FUNC_11("using imagelist: %p\n", VAR_20->himages);
    if (!VAR_20->himages) {
        FUNC_0("ImageList_Create failed!\n");
        return VAR_1;
    }
    FUNC_9(VAR_20->hlv, VAR_6, VAR_7, (LPARAM)VAR_20->himages);

    VAR_21 = FUNC_15(VAR_20);
    if (FUNC_2(VAR_21)) {
        FUNC_0("got 0x%x\n", VAR_21);
        FUNC_16(VAR_20);
        return VAR_1;
    }

    FUNC_11("found %d zones\n", VAR_20->num_zones);


    VAR_20->zone_attr = FUNC_13(sizeof(ZONEATTRIBUTES) * VAR_20->num_zones);
    if (!VAR_20->zone_attr) {
        FUNC_16(VAR_20);
        return VAR_1;
    }


    VAR_20->zones = FUNC_13((sizeof(DWORD) + sizeof(DWORD)) * VAR_20->num_zones);
    if (!VAR_20->zones) {
        FUNC_16(VAR_20);
        return VAR_1;
    }
    VAR_20->levels = &VAR_20->zones[VAR_20->num_zones];


    FUNC_12(VAR_20, &VAR_23, VAR_14);
    FUNC_12(VAR_20, &VAR_23, VAR_15);
    FUNC_12(VAR_20, &VAR_23, VAR_17);
    FUNC_12(VAR_20, &VAR_23, VAR_18);

    for (VAR_24 = 0; VAR_24 < VAR_20->num_zones; VAR_24++)
    {
        VAR_21 = FUNC_5(VAR_20->zone_mgr, VAR_20->zone_enumerator, VAR_24, &VAR_22);
        if (FUNC_8(VAR_21) && (VAR_22 != (DWORD)VAR_16)) {
            if (!VAR_22 || (VAR_22 > VAR_18)) {
                FUNC_12(VAR_20, &VAR_23, VAR_22);
            }
        }
    }
    return VAR_13;
}
