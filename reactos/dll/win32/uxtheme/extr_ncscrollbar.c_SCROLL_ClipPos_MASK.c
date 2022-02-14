
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__* LPRECT ;



__attribute__((used)) static POINT FUNC_0( LPRECT VAR_0, POINT VAR_1 )
{
    if( VAR_1.x < VAR_0->left )
     VAR_1.x = VAR_0->left;
    else
        if( VAR_1.x > VAR_0->right )
 VAR_1.x = VAR_0->right;

    if( VAR_1.y < VAR_0->top )
     VAR_1.y = VAR_0->top;
    else
    if( VAR_1.y > VAR_0->bottom )
     VAR_1.y = VAR_0->bottom;

    return VAR_1;
}
