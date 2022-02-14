
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t last_lv_index; int hsec; TYPE_2__* zone_attr; } ;
typedef TYPE_1__ secdlg_data ;
struct TYPE_6__ {int szDisplayName; int * szDescription; } ;
typedef TYPE_2__ ZONEATTRIBUTES ;
typedef int WCHAR ;
typedef size_t DWORD ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (int ,int ,int *,size_t) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (TYPE_1__*,size_t,int ) ;

__attribute__((used)) static void FUNC_8(secdlg_data *VAR_5, DWORD VAR_6)
{
    ZONEATTRIBUTES *VAR_7 = &VAR_5->zone_attr[VAR_6];
    WCHAR VAR_8[VAR_3];
    DWORD VAR_9;

    FUNC_3(FUNC_1(VAR_5->hsec, VAR_1), VAR_7->szDescription);

    VAR_9 = FUNC_2(VAR_4, VAR_2, VAR_8, FUNC_0(VAR_8));
    FUNC_6(&VAR_8[VAR_9], VAR_7->szDisplayName, FUNC_0(VAR_8) - VAR_9 - 1);

    FUNC_4("new title: %s\n", FUNC_5(VAR_8));
    FUNC_3(FUNC_1(VAR_5->hsec, VAR_0), VAR_8);

    FUNC_7(VAR_5, VAR_6, 0);
    VAR_5->last_lv_index = VAR_6;
}
