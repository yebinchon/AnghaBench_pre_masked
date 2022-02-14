
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int char_width; int char_height; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

void
FUNC_3(
    int VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5)
{
    RECT VAR_6;




    VAR_6.left = FUNC_0(VAR_3);
    VAR_6.top = FUNC_1(VAR_2);
    VAR_6.right = VAR_6.left + VAR_5 * VAR_0.char_width;
    VAR_6.bottom = VAR_6.top + VAR_4 * VAR_0.char_height;
    FUNC_2(VAR_1, &VAR_6);
}
