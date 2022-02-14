
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t nText; int entry; int Text; int * Blocks; int Type; } ;
struct TYPE_7__ {int Items; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef int SL_ITEM_TYPE ;
typedef TYPE_2__* PDOC_ITEM ;
typedef int * LPCWSTR ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,size_t) ;
 size_t FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static PDOC_ITEM FUNC_8 (SYSLINK_INFO *VAR_1, LPCWSTR VAR_2, UINT VAR_3,
                                        SL_ITEM_TYPE VAR_4, PDOC_ITEM VAR_5)
{
    PDOC_ITEM VAR_6;

    VAR_3 = FUNC_6(VAR_3, FUNC_7(VAR_2));
    VAR_6 = FUNC_0(FUNC_2(VAR_0, VAR_2[VAR_3 + 1]));
    if(VAR_6 == ((void*)0))
    {
        FUNC_1("Failed to alloc DOC_ITEM structure!\n");
        return ((void*)0);
    }

    VAR_6->nText = VAR_3;
    VAR_6->Type = VAR_4;
    VAR_6->Blocks = ((void*)0);
    FUNC_5(VAR_6->Text, VAR_2, VAR_3 + 1);
    if (VAR_5)
        FUNC_3(&VAR_5->entry, &VAR_6->entry);
    else
        FUNC_4(&VAR_1->Items, &VAR_6->entry);

    return VAR_6;
}
