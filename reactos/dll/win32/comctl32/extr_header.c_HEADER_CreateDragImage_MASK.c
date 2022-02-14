
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t uNumItem; int hwndSelf; int * hFont; TYPE_2__* items; int bRectsValid; } ;
struct TYPE_8__ {int right; int bottom; int top; int left; } ;
struct TYPE_9__ {TYPE_1__ rect; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef size_t INT ;
typedef int * HIMAGELIST ;
typedef int * HFONT ;
typedef TYPE_2__ HEADER_ITEM ;
typedef TYPE_3__ HEADER_INFO ;
typedef int HDC ;
typedef int * HBITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ,size_t,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_10 (int *,int *,int *) ;
 int * FUNC_11 (int,int,int ,int,int) ;
 int FUNC_12 (int *,int ) ;
 int VAR_5 ;
 int * FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,int ,int *) ;

__attribute__((used)) static HIMAGELIST
FUNC_15 (HEADER_INFO *VAR_6, INT VAR_7)
{
    HEADER_ITEM *VAR_8;
    HIMAGELIST VAR_9;
    HBITMAP VAR_10, VAR_11;
    LRESULT VAR_12;
    RECT VAR_13;
    HDC VAR_14;
    HDC VAR_15;
    int VAR_16, VAR_17;
    HFONT VAR_18;

    if (VAR_7 >= VAR_6->uNumItem)
        return ((void*)0);

    if (!VAR_6->bRectsValid)
        FUNC_9(VAR_6);

    VAR_8 = &VAR_6->items[VAR_7];
    VAR_17 = VAR_8->rect.right - VAR_8->rect.left;
    VAR_16 = VAR_8->rect.bottom - VAR_8->rect.top;

    VAR_15 = FUNC_5(((void*)0));
    VAR_14 = FUNC_1(VAR_15);
    VAR_10 = FUNC_0(VAR_15, VAR_17, VAR_16);
    FUNC_12(((void*)0), VAR_15);
    VAR_11 = FUNC_13(VAR_14, VAR_10);
    FUNC_14(VAR_14, -VAR_8->rect.left, -VAR_8->rect.top, ((void*)0));
    VAR_18 = VAR_6->hFont ? VAR_6->hFont : FUNC_6(VAR_5);
    FUNC_13(VAR_14, VAR_18);

    FUNC_4(VAR_6->hwndSelf, &VAR_13);
    VAR_12 = FUNC_8(VAR_6, VAR_1, VAR_14, &VAR_13);
    FUNC_7(VAR_6, VAR_14, VAR_7, VAR_3, VAR_12);
    if (VAR_12 & VAR_2)
        FUNC_8(VAR_6, VAR_0, VAR_14, &VAR_13);

    VAR_10 = FUNC_13(VAR_14, VAR_11);
    FUNC_2(VAR_14);

    if (VAR_10 == ((void*)0))
        return ((void*)0);

    VAR_9 = FUNC_11(VAR_17, VAR_16, VAR_4, 1, 1);
    FUNC_10(VAR_9, VAR_10, ((void*)0));
    FUNC_3(VAR_10);
    return VAR_9;
}
