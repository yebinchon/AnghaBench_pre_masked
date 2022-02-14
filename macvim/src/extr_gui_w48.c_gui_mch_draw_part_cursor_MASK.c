
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_5__ {scalar_t__ char_height; int row; scalar_t__ col; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int HBRUSH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void
FUNC_5(
    int VAR_3,
    int VAR_4,
    guicolor_T VAR_5)
{
    HBRUSH VAR_6;
    RECT VAR_7;




    VAR_7.left =




      FUNC_2(VAR_1.col);
    VAR_7.top = FUNC_3(VAR_1.row) + VAR_1.char_height - VAR_4;
    VAR_7.right = VAR_7.left + VAR_3;
    VAR_7.bottom = VAR_7.top + VAR_4;
    VAR_6 = FUNC_0(VAR_5);
    FUNC_4(VAR_2, &VAR_7, VAR_6);
    FUNC_1(VAR_6);
}
