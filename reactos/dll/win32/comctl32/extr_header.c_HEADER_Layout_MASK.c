
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int dwStyle; int bRectsValid; scalar_t__ nHeight; int hwndSelf; } ;
struct TYPE_9__ {TYPE_2__* pwpos; TYPE_1__* prc; } ;
struct TYPE_8__ {scalar_t__ cy; scalar_t__ cx; int y; scalar_t__ x; int flags; scalar_t__ hwndInsertAfter; int hwnd; } ;
struct TYPE_7__ {int top; scalar_t__ left; scalar_t__ right; } ;
typedef int LRESULT ;
typedef TYPE_3__* LPHDLAYOUT ;
typedef TYPE_4__ HEADER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_1 (HEADER_INFO *VAR_4, LPHDLAYOUT VAR_5)
{
    VAR_5->pwpos->hwnd = VAR_4->hwndSelf;
    VAR_5->pwpos->hwndInsertAfter = 0;
    VAR_5->pwpos->x = VAR_5->prc->left;
    VAR_5->pwpos->y = VAR_5->prc->top;
    VAR_5->pwpos->cx = VAR_5->prc->right - VAR_5->prc->left;
    if (VAR_4->dwStyle & VAR_1)
        VAR_5->pwpos->cy = 0;
    else {
        VAR_5->pwpos->cy = VAR_4->nHeight;
        VAR_5->prc->top += VAR_4->nHeight;
    }
    VAR_5->pwpos->flags = VAR_2;

    FUNC_0("Layout x=%d y=%d cx=%d cy=%d\n",
           VAR_5->pwpos->x, VAR_5->pwpos->y,
           VAR_5->pwpos->cx, VAR_5->pwpos->cy);

    VAR_4->bRectsValid = VAR_0;

    return VAR_3;
}
