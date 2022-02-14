
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwMask; int dwEffects; int yOffset; int yHeight; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ ME_Style ;
typedef int ME_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int) ;

__attribute__((used)) static int FUNC_1( const ME_Context *VAR_5, ME_Style *VAR_6 )
{
    int VAR_7 = 0, VAR_8 = 0;

    if ((VAR_6->fmt.dwMask & VAR_6->fmt.dwEffects) & VAR_2)
        VAR_8 = VAR_6->fmt.yOffset;

    if ((VAR_6->fmt.dwMask & VAR_6->fmt.dwEffects) & (VAR_4 | VAR_3))
    {
        if (VAR_6->fmt.dwEffects & VAR_1) VAR_8 = VAR_6->fmt.yHeight/3;
        if (VAR_6->fmt.dwEffects & VAR_0) VAR_8 = -VAR_6->fmt.yHeight/12;
    }

    if (VAR_8) VAR_7 = FUNC_0( VAR_5, VAR_8 );

    return VAR_7;
}
