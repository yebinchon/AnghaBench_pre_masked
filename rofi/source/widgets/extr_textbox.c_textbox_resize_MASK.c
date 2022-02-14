
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_5__ {TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;


 int FUNC_0 (TYPE_2__*,int ,int ,short,short) ;

__attribute__((used)) static void FUNC_1 ( widget *VAR_0, short VAR_1, short VAR_2 )
{
    textbox *VAR_3 = (textbox *) VAR_0;
    FUNC_0 ( VAR_3, VAR_3->widget.x, VAR_3->widget.y, VAR_1, VAR_2 );
}
