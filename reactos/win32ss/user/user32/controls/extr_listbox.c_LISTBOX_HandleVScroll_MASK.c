
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
typedef int WORD ;
struct TYPE_8__ {int style; int top_item; int nb_items; int self; } ;
struct TYPE_7__ {int cbSize; int nTrackPos; int fMask; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_3( LB_DESCR *VAR_4, WORD VAR_5, WORD VAR_6 )
{
    SCROLLINFO VAR_7;

    if (VAR_4->style & VAR_0) return 0;
    switch(VAR_5)
    {
    case 133:
        FUNC_2( VAR_4, VAR_4->top_item - 1, VAR_3 );
        break;
    case 134:
        FUNC_2( VAR_4, VAR_4->top_item + 1, VAR_3 );
        break;
    case 131:
        FUNC_2( VAR_4, VAR_4->top_item -
                            FUNC_1( VAR_4 ), VAR_3 );
        break;
    case 132:
        FUNC_2( VAR_4, VAR_4->top_item +
                            FUNC_1( VAR_4 ), VAR_3 );
        break;
    case 130:
        FUNC_2( VAR_4, VAR_6, VAR_3 );
        break;
    case 129:
        VAR_7.cbSize = sizeof(VAR_7);
        VAR_7.fMask = VAR_2;
        FUNC_0( VAR_4->self, VAR_1, &VAR_7 );
        FUNC_2( VAR_4, VAR_7.nTrackPos, VAR_3 );
        break;
    case 128:
        FUNC_2( VAR_4, 0, VAR_3 );
        break;
    case 135:
        FUNC_2( VAR_4, VAR_4->nb_items, VAR_3 );
        break;
    }
    return 0;
}
