
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int state; } ;
struct TYPE_11__ {TYPE_1__ Link; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_12__ {int MouseDownID; } ;
typedef TYPE_3__ SYSLINK_INFO ;
typedef int POINT ;
typedef TYPE_4__* PDOC_ITEM ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int const*,int*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_4__*,int) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT FUNC_2 (SYSLINK_INFO *VAR_3, const POINT *VAR_4)
{
    if(VAR_3->MouseDownID > -1)
    {
        PDOC_ITEM VAR_5;
        int VAR_6;

        VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_6, VAR_2);
        if((VAR_5 != ((void*)0)) && (VAR_5->u.Link.state & VAR_0) && (VAR_3->MouseDownID == VAR_6))
        {
            FUNC_1(VAR_3, VAR_1, VAR_5, VAR_6);
        }
    }

    VAR_3->MouseDownID = -1;

    return 0;
}
