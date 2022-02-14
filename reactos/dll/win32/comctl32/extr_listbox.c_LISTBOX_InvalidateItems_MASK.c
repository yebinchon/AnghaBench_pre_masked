
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int style; int self; int width; int height; } ;
struct TYPE_7__ {scalar_t__ top; int right; int left; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2( LB_DESCR *VAR_4, INT VAR_5 )
{
    RECT VAR_6;

    if (FUNC_1( VAR_4, VAR_5, &VAR_6 ) == 1)
    {
        if (VAR_4->style & VAR_2)
        {
            VAR_4->style |= VAR_0;
            return;
        }
        VAR_6.bottom = VAR_4->height;
        FUNC_0( VAR_4->self, &VAR_6, VAR_3 );
        if (VAR_4->style & VAR_1)
        {

            VAR_6.left = VAR_6.right;
            VAR_6.right = VAR_4->width;
            VAR_6.top = 0;
            FUNC_0( VAR_4->self, &VAR_6, VAR_3 );
        }
    }
}
