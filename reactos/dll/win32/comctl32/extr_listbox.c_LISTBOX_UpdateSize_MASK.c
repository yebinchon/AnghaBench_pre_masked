
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int width; int height; int style; int item_height; int self; int focus_item; } ;
struct TYPE_11__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ,int ,int,int,int) ;
 int FUNC_7 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_8( LB_DESCR *VAR_6 )
{
    RECT VAR_7;

    FUNC_0( VAR_6->self, &VAR_7 );
    VAR_6->width = VAR_7.right - VAR_7.left;
    VAR_6->height = VAR_7.bottom - VAR_7.top;
    if (!(VAR_6->style & VAR_1) && !(VAR_6->style & VAR_2))
    {
        INT VAR_8;
        RECT VAR_9;

        FUNC_1( VAR_6->self, &VAR_9 );
        if(VAR_6->item_height != 0)
            VAR_8 = VAR_6->height % VAR_6->item_height;
        else
            VAR_8 = 0;
        if ((VAR_6->height > VAR_6->item_height) && VAR_8)
        {
            FUNC_7("[%p]: changing height %d -> %d\n",
                  VAR_6->self, VAR_6->height, VAR_6->height - VAR_8 );
            FUNC_6( VAR_6->self, 0, 0, 0, VAR_9.right - VAR_9.left,
                          VAR_9.bottom - VAR_9.top - VAR_8,
                          VAR_5 | VAR_3 | VAR_4 );
            return;
        }
    }
    FUNC_7("[%p]: new size = %d,%d\n", VAR_6->self, VAR_6->width, VAR_6->height );
    FUNC_4( VAR_6 );
    FUNC_5( VAR_6 );


    if (FUNC_3( VAR_6, VAR_6->focus_item, &VAR_7 ) == 1)
    {
        FUNC_2( VAR_6->self, &VAR_7, VAR_0 );
    }
}
