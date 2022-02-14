
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int border_offset; scalar_t__ footer_height; scalar_t__ tabline_height; scalar_t__ toolbar_height; scalar_t__ menu_height; scalar_t__ menu_is_active; scalar_t__ scrollbar_height; scalar_t__* which_scrollbars; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_6 ;
 int * FUNC_2 (int ,int ) ;

int
FUNC_3()
{
    int VAR_7;

    VAR_7 = 2 * VAR_5.border_offset;
    if (VAR_5.which_scrollbars[VAR_2])
 VAR_7 += VAR_5.scrollbar_height;
    return VAR_7;
}
