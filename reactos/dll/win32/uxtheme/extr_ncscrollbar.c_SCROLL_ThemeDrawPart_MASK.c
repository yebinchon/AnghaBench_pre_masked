
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hDC; int scrolltheme; } ;
struct TYPE_9__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_8__ {int* rgstate; } ;
typedef TYPE_1__ SCROLLBARINFO ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PDRAW_CONTEXT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int,int,TYPE_2__*,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(PDRAW_CONTEXT VAR_5, int VAR_6,int VAR_7, SCROLLBARINFO* VAR_8, int VAR_9, int VAR_10, int VAR_11, RECT* VAR_12)
{
    if (VAR_12->right <= VAR_12->left || VAR_12->bottom <= VAR_12->top)
        return;

    if(VAR_8->rgstate[VAR_9] & VAR_4)
        VAR_7 += VAR_0 - VAR_2;
    else if (VAR_11 == VAR_9)
        VAR_7 += VAR_1 - VAR_2;
    else if (VAR_10 == VAR_9)
        VAR_7 += VAR_3 - VAR_2;

    FUNC_0(VAR_5->scrolltheme, VAR_5->hDC, VAR_6, VAR_7, VAR_12, ((void*)0));
}
