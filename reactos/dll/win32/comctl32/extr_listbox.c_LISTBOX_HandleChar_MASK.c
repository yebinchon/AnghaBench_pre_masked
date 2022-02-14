
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {int style; int selected_item; scalar_t__ nb_items; int focus_item; scalar_t__ self; int owner; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int ,int ) ;
 int FUNC_4 (char,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static LRESULT FUNC_7( LB_DESCR *VAR_6, WCHAR VAR_7 )
{
    INT VAR_8 = -1;
    WCHAR VAR_9[2];

    VAR_9[0] = VAR_7;
    VAR_9[1] = '\0';

    if (VAR_6->style & VAR_3)
    {
        VAR_8 = FUNC_6( VAR_6->owner, VAR_5,
                                FUNC_4(VAR_7, VAR_6->focus_item),
                                (LPARAM)VAR_6->self );
        if (VAR_8 == -2) return 0;
    }
    if (VAR_8 == -1)
        VAR_8 = FUNC_1( VAR_6, VAR_6->focus_item, VAR_9, VAR_0);
    if (VAR_8 != -1)
    {
        if ((!FUNC_0(VAR_6)) && VAR_6->selected_item == -1)
           FUNC_3( VAR_6, VAR_8, VAR_4, VAR_0);
        FUNC_2( VAR_6, VAR_8, VAR_4 );
        if ((VAR_6->style & VAR_2) && VAR_6->nb_items)
            FUNC_5( VAR_6, VAR_1 );
    }
    return 0;
}
