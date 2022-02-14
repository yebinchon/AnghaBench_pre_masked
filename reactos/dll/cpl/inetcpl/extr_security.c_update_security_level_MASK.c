
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* levels; scalar_t__ last_level; int htb; int hsec; } ;
typedef TYPE_1__ secdlg_data ;
typedef scalar_t__ WCHAR ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,size_t,scalar_t__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,size_t) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (char*,...) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__*) ;
 int VAR_9 ;
 size_t FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(secdlg_data *VAR_10, DWORD VAR_11, DWORD VAR_12)
{
    WCHAR VAR_13[512];
    DWORD VAR_14;

    FUNC_6("(%p, lv_index: %u, tb_index: %u)\n", VAR_10, VAR_11, VAR_12);

    if ((VAR_10->levels[VAR_11] != VAR_10->last_level) || (VAR_12 > 0)) {

        if (!VAR_10->levels[VAR_11] || !VAR_10->last_level)
            FUNC_5(VAR_10->htb, VAR_10->levels[VAR_11] ? VAR_6 : VAR_5);

        VAR_14 = (VAR_12 > 0) ? VAR_12 : FUNC_8(VAR_10->levels[VAR_11]);

        VAR_13[0] = 0;
        FUNC_2(VAR_9, VAR_2 + VAR_14, VAR_13, FUNC_0(VAR_13));
        FUNC_6("new level #%d: %s\n", VAR_14, FUNC_7(VAR_13));
        FUNC_4(FUNC_1(VAR_10->hsec, VAR_0), VAR_13);

        VAR_13[0] = 0;
        FUNC_2(VAR_9, VAR_3 + (VAR_14 * 0x10), VAR_13, FUNC_0(VAR_13));
        FUNC_6("new level info: %s\n", FUNC_7(VAR_13));
        FUNC_4(FUNC_1(VAR_10->hsec, VAR_1), VAR_13);

        if (VAR_14)
            FUNC_3(VAR_10->htb, VAR_7, VAR_8, VAR_4 - VAR_14);

        VAR_10->last_level = VAR_10->levels[VAR_11];

    }
}
