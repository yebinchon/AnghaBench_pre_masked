
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int right; int left; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef TYPE_1__* LPRECT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_1( LPRECT VAR_0, POINT VAR_1, BOOL VAR_2 )
{
    RECT VAR_3 = *VAR_0;
    int VAR_4;



    if (VAR_2)
    {
        VAR_4 = VAR_0->right - VAR_0->left;
        VAR_3.left -= VAR_4*8;
        VAR_3.right += VAR_4*8;
        VAR_3.top -= VAR_4*2;
        VAR_3.bottom += VAR_4*2;
    }
    else
    {
        VAR_4 = VAR_0->bottom - VAR_0->top;
        VAR_3.left -= VAR_4*2;
        VAR_3.right += VAR_4*2;
        VAR_3.top -= VAR_4*8;
        VAR_3.bottom += VAR_4*8;
    }
    return FUNC_0( &VAR_3, VAR_1 );
}
