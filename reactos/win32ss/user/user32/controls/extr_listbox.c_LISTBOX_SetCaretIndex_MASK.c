
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ focus_item; int style; scalar_t__ nb_items; } ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT FUNC_3( LB_DESCR *VAR_5, INT VAR_6, BOOL VAR_7 )
{
    INT VAR_8 = VAR_5->focus_item;

    FUNC_2("old focus %d, index %d\n", VAR_8, VAR_6);

    if (VAR_5->style & VAR_1) return VAR_2;
    if ((VAR_6 < 0) || (VAR_6 >= VAR_5->nb_items)) return VAR_2;
    if (VAR_6 == VAR_8) return VAR_3;

    FUNC_0( VAR_5, VAR_0 );
    VAR_5->focus_item = VAR_6;

    FUNC_1( VAR_5, VAR_6, VAR_7 );
    FUNC_0( VAR_5, VAR_4 );

    return VAR_3;
}
