
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor; } ;
typedef TYPE_1__ textbox ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1 ( textbox *VAR_0 )
{
    int VAR_1 = VAR_0->cursor;
    FUNC_0 ( VAR_0, VAR_0->cursor - 1 );
    return VAR_1 != VAR_0->cursor;
}
