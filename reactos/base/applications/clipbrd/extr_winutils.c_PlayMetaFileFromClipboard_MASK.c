
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hMF; int mm; } ;
struct TYPE_4__ {int top; int left; int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPMETAFILEPICT ;
typedef int HGLOBAL ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;

void FUNC_7(HDC VAR_1, const RECT *VAR_2)
{
    LPMETAFILEPICT VAR_3;
    HGLOBAL VAR_4;

    VAR_4 = FUNC_0(VAR_0);
    if (!VAR_4)
        return;

    VAR_3 = (LPMETAFILEPICT)FUNC_1(VAR_4);
    if (!VAR_3)
        return;

    FUNC_4(VAR_1, VAR_3->mm);
    FUNC_5(VAR_1, VAR_2->right, VAR_2->bottom, ((void*)0));
    FUNC_6(VAR_1, VAR_2->left, VAR_2->top, ((void*)0));
    FUNC_3(VAR_1, VAR_3->hMF);
    FUNC_2(VAR_4);
}
