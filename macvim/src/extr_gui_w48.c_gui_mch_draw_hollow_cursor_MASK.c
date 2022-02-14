
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_5__ {scalar_t__ char_height; scalar_t__ char_width; int col; int row; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef int HBRUSH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_1 ;

void
FUNC_6(guicolor_T VAR_2)
{
    HBRUSH VAR_3;
    RECT VAR_4;




    VAR_4.left = FUNC_2(VAR_0.col);
    VAR_4.top = FUNC_3(VAR_0.row);
    VAR_4.right = VAR_4.left + VAR_0.char_width;




    VAR_4.bottom = VAR_4.top + VAR_0.char_height;
    VAR_3 = FUNC_0(VAR_2);
    FUNC_4(VAR_1, &VAR_4, VAR_3);
    FUNC_1(VAR_3);
}
