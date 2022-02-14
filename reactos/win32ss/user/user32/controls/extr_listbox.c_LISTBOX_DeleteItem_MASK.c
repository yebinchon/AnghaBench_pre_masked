
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int UINT ;
struct TYPE_9__ {size_t itemID; scalar_t__ itemData; int hwndItem; int CtlID; int CtlType; } ;
struct TYPE_8__ {int owner; int self; int nb_items; TYPE_1__* items; } ;
struct TYPE_7__ {int str; scalar_t__ data; } ;
typedef int LPWSTR ;
typedef int LPARAM ;
typedef TYPE_2__ LB_DESCR ;
typedef size_t INT ;
typedef TYPE_3__ DELETEITEMSTRUCT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6( LB_DESCR *VAR_4, INT VAR_5 )
{

    ULONG_PTR VAR_6 = VAR_4->items[VAR_5].data;
    LPWSTR VAR_7 = VAR_4->items[VAR_5].str;

    if (!VAR_4->nb_items)
        FUNC_5( VAR_4->self, VAR_1, 0, 0 );






    if (FUNC_4(VAR_4) || VAR_6)
    {
        DELETEITEMSTRUCT VAR_8;
        UINT VAR_9 = (UINT)FUNC_1( VAR_4->self, VAR_0 );

        VAR_8.CtlType = VAR_2;
        VAR_8.CtlID = VAR_9;
        VAR_8.itemID = VAR_5;
        VAR_8.hwndItem = VAR_4->self;
        VAR_8.itemData = VAR_6;
        FUNC_5( VAR_4->owner, VAR_3, VAR_9, (LPARAM)&VAR_8 );
    }
    if (FUNC_2(VAR_4))
        FUNC_3( FUNC_0(), 0, VAR_7 );
}
