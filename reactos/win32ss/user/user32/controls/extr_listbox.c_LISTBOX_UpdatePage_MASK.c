
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int item_height; int height; int page_size; int style; int top_item; int self; } ;
typedef TYPE_1__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2( LB_DESCR *VAR_3 )
{
    INT VAR_4;

    if ((VAR_3->item_height == 0) || (VAR_4 = VAR_3->height / VAR_3->item_height) < 1)
                       VAR_4 = 1;
    if (VAR_4 == VAR_3->page_size) return;
    VAR_3->page_size = VAR_4;
    if (VAR_3->style & VAR_1)
        FUNC_0( VAR_3->self, ((void*)0), VAR_2 );
    FUNC_1( VAR_3, VAR_3->top_item, VAR_0 );
}
