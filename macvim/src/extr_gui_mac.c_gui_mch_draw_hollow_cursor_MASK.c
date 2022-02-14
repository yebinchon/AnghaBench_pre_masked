
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_5__ {scalar_t__ char_height; scalar_t__ char_width; int col; int row; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ Rect ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void
FUNC_5(guicolor_T VAR_1)
{
    Rect VAR_2;




    VAR_2.left = FUNC_0(VAR_0.col);
    VAR_2.top = FUNC_1(VAR_0.row);
    VAR_2.right = VAR_2.left + VAR_0.char_width;




    VAR_2.bottom = VAR_2.top + VAR_0.char_height;

    FUNC_3(VAR_1);

    FUNC_2(&VAR_2);
}
