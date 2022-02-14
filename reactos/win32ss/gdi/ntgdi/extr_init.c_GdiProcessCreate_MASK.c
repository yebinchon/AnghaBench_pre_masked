
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* Peb; } ;
struct TYPE_10__ {struct TYPE_10__* pPoolRgnAttr; struct TYPE_10__* pPoolBrushAttr; struct TYPE_10__* pPoolDcAttr; int GDIDcAttrFreeList; int GDIBrushAttrFreeList; int PrivateFontListLock; scalar_t__ PrivateMemFontHandleCount; int PrivateMemFontListHead; int PrivateFontListHead; } ;
struct TYPE_9__ {int GdiDCAttributeList; int GdiSharedHandleTable; } ;
typedef int RGN_ATTR ;
typedef TYPE_2__* PPROCESSINFO ;
typedef TYPE_3__* PEPROCESS ;
typedef int NTSTATUS ;
typedef int DC_ATTR ;
typedef int BRUSH_ATTR ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (int,char) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;

NTSTATUS
FUNC_6(PEPROCESS VAR_2)
{
    PPROCESSINFO VAR_3 = FUNC_5(VAR_2);
    FUNC_0(VAR_3);

    FUNC_4(&VAR_3->PrivateFontListHead);
    FUNC_4(&VAR_3->PrivateMemFontListHead);
    VAR_3->PrivateMemFontHandleCount = 0;
    FUNC_1(&VAR_3->PrivateFontListLock);

    FUNC_4(&VAR_3->GDIBrushAttrFreeList);
    FUNC_4(&VAR_3->GDIDcAttrFreeList);


    VAR_2->Peb->GdiSharedHandleTable = FUNC_2(VAR_2);
    VAR_2->Peb->GdiDCAttributeList = VAR_0;


    VAR_3->pPoolDcAttr = FUNC_3(sizeof(DC_ATTR), 'acdG');
    VAR_3->pPoolBrushAttr = FUNC_3(sizeof(BRUSH_ATTR), 'arbG');
    VAR_3->pPoolRgnAttr = FUNC_3(sizeof(RGN_ATTR), 'agrG');
    FUNC_0(VAR_3->pPoolDcAttr);
    FUNC_0(VAR_3->pPoolBrushAttr);
    FUNC_0(VAR_3->pPoolRgnAttr);

    return VAR_1;
}
