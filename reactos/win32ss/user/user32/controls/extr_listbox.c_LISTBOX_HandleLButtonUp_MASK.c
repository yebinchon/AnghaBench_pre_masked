
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ self; int style; scalar_t__ nb_items; scalar_t__ captured; } ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT FUNC_4( LB_DESCR *VAR_6 )
{
    if (VAR_5 != VAR_4)
        FUNC_1( VAR_6->self, VAR_3 );
    VAR_5 = VAR_4;
    if (VAR_6->captured)
    {
        VAR_6->captured = VAR_0;
        if (FUNC_0() == VAR_6->self) FUNC_2();
        if ((VAR_6->style & VAR_2) && VAR_6->nb_items)
            FUNC_3( VAR_6, VAR_1 );
    }
    return 0;
}
