
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwEffects; int bUnderlineType; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ ME_Style ;
typedef int * HPEN ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;






 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HPEN FUNC_2( ME_Style *VAR_4, COLORREF VAR_5 )
{
    if (VAR_4->fmt.dwEffects & VAR_0)
        return FUNC_0( VAR_3, 1, VAR_5 );


    if (VAR_4->fmt.dwEffects & VAR_1)
    {
        switch (VAR_4->fmt.bUnderlineType)
        {
        case 132:
        case 128:
        case 130:
            return FUNC_0( VAR_3, 1, VAR_5 );
        case 131:
            return FUNC_0( VAR_2, 1, VAR_5 );
        default:
            FUNC_1( "Unknown underline type (%u)\n", VAR_4->fmt.bUnderlineType );

        case 133:
        case 129:
            break;
        }
    }
    return ((void*)0);
}
