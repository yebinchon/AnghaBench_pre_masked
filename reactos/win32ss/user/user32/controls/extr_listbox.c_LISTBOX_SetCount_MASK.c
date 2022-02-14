
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nb_items; int self; } ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_5( LB_DESCR *VAR_4, INT VAR_5 )
{
    LRESULT VAR_6;

    if (FUNC_0(VAR_4))
    {
        FUNC_4(VAR_0);
        return VAR_1;
    }


    if (VAR_5 > VAR_4->nb_items)
    {
        while (VAR_5 > VAR_4->nb_items)
            if ((VAR_6 = FUNC_2( VAR_4, -1, 0 )) < 0)
                return VAR_6;
    }
    else if (VAR_5 < VAR_4->nb_items)
    {
        while (VAR_5 < VAR_4->nb_items)
            if ((VAR_6 = FUNC_3( VAR_4, (VAR_4->nb_items - 1) )) < 0)
                return VAR_6;
    }

    FUNC_1( VAR_4->self, ((void*)0), VAR_3 );
    return VAR_2;
}
