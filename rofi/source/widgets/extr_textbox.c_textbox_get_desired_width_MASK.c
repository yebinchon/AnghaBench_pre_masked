
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ expand; } ;
typedef TYPE_1__ widget ;
struct TYPE_8__ {int flags; int layout; } ;
typedef TYPE_2__ textbox ;
typedef int RofiDistance ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9 ( widget *VAR_4 )
{
    if ( VAR_4 == ((void*)0) ) {
        return 0;
    }
    textbox *VAR_5 = (textbox *) VAR_4;
    unsigned int VAR_6 = ( ( VAR_5->flags & VAR_3 ) ? VAR_0 : 0 );
    if ( VAR_4->expand && VAR_5->flags & VAR_2 ) {
        return FUNC_5 ( VAR_5 ) + FUNC_7 ( VAR_4 ) + VAR_6;
    }
    RofiDistance VAR_7 = FUNC_4 ( FUNC_0 ( VAR_5 ), "width", 0 );
    int VAR_8 = FUNC_1 ( VAR_7, VAR_1 );
    if ( VAR_8 > 0 ) {
        return VAR_8;
    }
    int VAR_9 = FUNC_6 ( FUNC_0 ( VAR_5 ) );
    VAR_9 += FUNC_8 ( FUNC_0 ( VAR_5 ) );
    int VAR_10 = FUNC_2 ( VAR_5->layout );
    FUNC_3 ( VAR_5->layout, -1 );
    int VAR_11 = FUNC_5 ( VAR_5 );

    FUNC_3 ( VAR_5->layout, VAR_10 );
    return VAR_11 + VAR_9 + VAR_6;
}
