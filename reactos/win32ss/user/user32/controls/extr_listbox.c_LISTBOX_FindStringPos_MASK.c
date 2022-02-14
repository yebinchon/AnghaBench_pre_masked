
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int UINT ;
struct TYPE_8__ {int itemID1; int itemID2; int dwLocaleId; int itemData2; scalar_t__ itemData1; int hwndItem; int CtlID; int CtlType; } ;
struct TYPE_7__ {int style; int nb_items; int owner; int locale; TYPE_1__* items; int self; } ;
struct TYPE_6__ {int data; int str; } ;
typedef scalar_t__ LPCWSTR ;
typedef int LPARAM ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;
typedef TYPE_3__ COMPAREITEMSTRUCT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static INT FUNC_4( LB_DESCR *VAR_4, LPCWSTR VAR_5, BOOL VAR_6 )
{
    INT VAR_7, VAR_8, VAR_9, VAR_10;

    if (!(VAR_4->style & VAR_1)) return -1;
    VAR_8 = 0;
    VAR_9 = VAR_4->nb_items;
    while (VAR_8 != VAR_9)
    {
        VAR_7 = (VAR_8 + VAR_9) / 2;
        if (FUNC_1(VAR_4))
            VAR_10 = FUNC_2( VAR_4->locale, VAR_5, VAR_4->items[VAR_7].str);
        else
        {
            COMPAREITEMSTRUCT VAR_11;
            UINT VAR_12 = (UINT)FUNC_0( VAR_4->self, VAR_0 );

            VAR_11.CtlType = VAR_2;
            VAR_11.CtlID = VAR_12;
            VAR_11.hwndItem = VAR_4->self;


            VAR_11.itemID1 = -1;
            VAR_11.itemData1 = (ULONG_PTR)VAR_5;
            VAR_11.itemID2 = VAR_7;
            VAR_11.itemData2 = VAR_4->items[VAR_7].data;
            VAR_11.dwLocaleId = VAR_4->locale;
            VAR_10 = FUNC_3( VAR_4->owner, VAR_3, VAR_12, (LPARAM)&VAR_11 );
        }
        if (!VAR_10) return VAR_7;
        if (VAR_10 < 0) VAR_9 = VAR_7;
        else VAR_8 = VAR_7 + 1;
    }
    return VAR_6 ? -1 : VAR_9;
}
