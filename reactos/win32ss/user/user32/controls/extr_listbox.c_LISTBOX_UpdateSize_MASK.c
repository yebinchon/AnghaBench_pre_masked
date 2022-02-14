
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int width; int height; int style; int item_height; int self; int focus_item; } ;
struct TYPE_11__ {int bottom; int right; int left; int top; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef TYPE_2__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ,int ,int ,int,int,int) ;
 int FUNC_9 (char*,int ,int,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10( LB_DESCR *VAR_9 )
{
    RECT VAR_10;
    LONG VAR_11 = FUNC_2( VAR_9->self, VAR_1 );

    FUNC_0( VAR_9->self, &VAR_10 );
    if (VAR_11 & VAR_8)
        VAR_10.bottom += FUNC_1(VAR_4);
    VAR_9->width = VAR_10.right - VAR_10.left;
    VAR_9->height = VAR_10.bottom - VAR_10.top;
    if (!(VAR_9->style & VAR_2) && !(VAR_9->style & VAR_3))
    {
        INT VAR_12;
        RECT VAR_13;

        FUNC_3( VAR_9->self, &VAR_13 );
        if(VAR_9->item_height != 0)
            VAR_12 = VAR_9->height % VAR_9->item_height;
        else
            VAR_12 = 0;
        if ((VAR_9->height > VAR_9->item_height) && VAR_12)
        {
            FUNC_9("[%p]: changing height %d -> %d\n",
                  VAR_9->self, VAR_9->height, VAR_9->height - VAR_12 );
            FUNC_8( VAR_9->self, 0, 0, 0, VAR_13.right - VAR_13.left,
                          VAR_13.bottom - VAR_13.top - VAR_12,
                          VAR_7 | VAR_5 | VAR_6 );
            return;
        }
    }
    FUNC_9("[%p]: new size = %d,%d\n", VAR_9->self, VAR_9->width, VAR_9->height );
    FUNC_6( VAR_9 );
    FUNC_7( VAR_9 );


    if (FUNC_5( VAR_9, VAR_9->focus_item, &VAR_10 ) == 1)
    {
        FUNC_4( VAR_9->self, &VAR_10, VAR_0 );
    }
}
