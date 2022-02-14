
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* editor; } ;
struct TYPE_7__ {int dwMask; int dwEffects; int crTextColor; } ;
struct TYPE_9__ {TYPE_1__ fmt; } ;
struct TYPE_8__ {int texthost; } ;
typedef TYPE_3__ ME_Style ;
typedef TYPE_4__ ME_Context ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static COLORREF FUNC_2( ME_Context *VAR_6, ME_Style *VAR_7, BOOL VAR_8 )
{
    COLORREF VAR_9;

    if (VAR_8)
        VAR_9 = FUNC_0( VAR_6->editor->texthost, VAR_4 );
    else if ((VAR_7->fmt.dwMask & VAR_3) && (VAR_7->fmt.dwEffects & VAR_1))
        VAR_9 = FUNC_1(0,0,255);
    else if ((VAR_7->fmt.dwMask & VAR_2) && (VAR_7->fmt.dwEffects & VAR_0))
        VAR_9 = FUNC_0( VAR_6->editor->texthost, VAR_5 );
    else
        VAR_9 = VAR_7->fmt.crTextColor;

    return VAR_9;
}
