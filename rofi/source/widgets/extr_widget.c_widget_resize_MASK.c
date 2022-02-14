
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {short w; short h; int (* resize ) (TYPE_1__*,short,short) ;} ;
typedef TYPE_1__ widget ;


 int FUNC_0 (TYPE_1__*,short,short) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 ( widget *VAR_0, short VAR_1, short VAR_2 )
{
    if ( VAR_0 != ((void*)0) ) {
        if ( VAR_0->resize != ((void*)0) ) {
            if ( VAR_0->w != VAR_1 || VAR_0->h != VAR_2 ) {
                VAR_0->resize ( VAR_0, VAR_1, VAR_2 );
            }
        }
        else {
            VAR_0->w = VAR_1;
            VAR_0->h = VAR_2;
        }

        FUNC_1 ( VAR_0 );
    }
}
