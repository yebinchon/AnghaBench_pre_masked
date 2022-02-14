
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_5__ {scalar_t__ char_height; int row; scalar_t__ col; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; void* left; void* right; } ;
typedef TYPE_1__ Rect ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_2, int VAR_3, guicolor_T VAR_4)
{
    Rect VAR_5;







 VAR_5.left = FUNC_0(VAR_1.col);
    VAR_5.top = FUNC_1(VAR_1.row) + VAR_1.char_height - VAR_3;
    VAR_5.right = VAR_5.left + VAR_2;
    VAR_5.bottom = VAR_5.top + VAR_3;

    FUNC_3(VAR_4);

    FUNC_2(&VAR_5);

}
