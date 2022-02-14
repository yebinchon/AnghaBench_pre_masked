
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_6__ {scalar_t__ dxyLineButton; TYPE_2__ rcScrollBar; } ;
typedef TYPE_1__ SCROLLBARINFO ;
typedef TYPE_2__ RECT ;
typedef int PDRAW_CONTEXT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,TYPE_1__*,int ,int,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( PDRAW_CONTEXT VAR_7, SCROLLBARINFO* VAR_8,
                               BOOL VAR_9, int VAR_10, int VAR_11 )
{
    RECT VAR_12;
    int VAR_13;

    VAR_12 = VAR_8->rcScrollBar;
    if( VAR_9 )
    {
        VAR_12.bottom = VAR_12.top + VAR_8->dxyLineButton;
        VAR_13 = VAR_3;
    }
    else
    {
        VAR_12.right = VAR_12.left + VAR_8->dxyLineButton;
        VAR_13 = VAR_1;
    }

    FUNC_0(VAR_7, VAR_4, VAR_13, VAR_8, VAR_6, VAR_10, VAR_11, &VAR_12);

    VAR_12 = VAR_8->rcScrollBar;
    if( VAR_9 )
    {
        VAR_12.top = VAR_12.bottom - VAR_8->dxyLineButton;
        VAR_13 = VAR_0;
    }
    else
    {
        VAR_13 = VAR_2;
        VAR_12.left = VAR_12.right - VAR_8->dxyLineButton;
    }

    FUNC_0(VAR_7, VAR_4, VAR_13, VAR_8, VAR_5, VAR_10, VAR_11, &VAR_12);
}
