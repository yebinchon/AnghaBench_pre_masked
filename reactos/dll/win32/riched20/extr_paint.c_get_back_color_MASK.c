
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* editor; } ;
struct TYPE_8__ {int dwMask; int dwEffects; int crBackColor; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct TYPE_7__ {int texthost; } ;
typedef TYPE_3__ ME_Style ;
typedef TYPE_4__ ME_Context ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static COLORREF FUNC_1( ME_Context *VAR_4, ME_Style *VAR_5, BOOL VAR_6 )
{
    COLORREF VAR_7;

    if (VAR_6)
        VAR_7 = FUNC_0( VAR_4->editor->texthost, VAR_2 );
    else if ( (VAR_5->fmt.dwMask & VAR_1)
            && !(VAR_5->fmt.dwEffects & VAR_0) )
        VAR_7 = VAR_5->fmt.crBackColor;
    else
        VAR_7 = FUNC_0( VAR_4->editor->texthost, VAR_3 );

    return VAR_7;
}
