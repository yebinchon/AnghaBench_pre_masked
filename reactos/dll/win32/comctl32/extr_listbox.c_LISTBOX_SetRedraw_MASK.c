
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int style; scalar_t__ top_item; scalar_t__ page_size; scalar_t__ nb_items; int self; } ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2( LB_DESCR *VAR_3, BOOL VAR_4 )
{
    if (VAR_4)
    {
        if (!(VAR_3->style & VAR_1)) return;
        VAR_3->style &= ~VAR_1;
        if (VAR_3->style & VAR_0)
        {
            FUNC_0(VAR_3->self, ((void*)0), VAR_2);
            if ((VAR_3->top_item + VAR_3->page_size) > VAR_3->nb_items)
            {
                VAR_3->top_item = VAR_3->nb_items - VAR_3->page_size;
                if (VAR_3->top_item < 0) VAR_3->top_item = 0;
            }
            VAR_3->style &= ~VAR_0;
        }
        FUNC_1( VAR_3 );
    }
    else VAR_3->style |= VAR_1;
}
