
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursor; int text; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_2 ( textbox *VAR_0 )
{
    if ( VAR_0 && VAR_0->cursor >= 0 ) {
        int VAR_1 = FUNC_0 ( VAR_0->text, -1 ) - VAR_0->cursor;
        if ( VAR_1 >= 0 ) {
            FUNC_1 ( VAR_0, VAR_0->cursor, VAR_1 );
        }
    }
}
