
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rcHeader; } ;
struct TYPE_6__ {int hdpaColumns; scalar_t__ colRectsDirty; int hwndHeader; } ;
typedef int LPARAM ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef scalar_t__ INT ;
typedef TYPE_2__ COLUMN_INFO ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline COLUMN_INFO * FUNC_4(const LISTVIEW_INFO *VAR_2, INT VAR_3)
{
    static COLUMN_INFO VAR_4;

    if (VAR_3 == 0 && FUNC_1(VAR_2->hdpaColumns) == 0) return &VAR_4;
    FUNC_3 (VAR_3 >= 0 && VAR_3 < FUNC_1(VAR_2->hdpaColumns));


    if (VAR_2->colRectsDirty)
    {
        COLUMN_INFO *VAR_5;
        LISTVIEW_INFO *VAR_6 = (LISTVIEW_INFO*)VAR_2;
        INT VAR_7;

        for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_2->hdpaColumns); VAR_7++) {
            VAR_5 = FUNC_0(VAR_2->hdpaColumns, VAR_7);
            FUNC_2(VAR_2->hwndHeader, VAR_1, VAR_7, (LPARAM)&VAR_5->rcHeader);
        }
        VAR_6->colRectsDirty = VAR_0;
    }

    return FUNC_0(VAR_2->hdpaColumns, VAR_3);
}
