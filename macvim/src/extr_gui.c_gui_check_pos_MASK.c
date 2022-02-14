
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ row; scalar_t__ col; scalar_t__ cursor_row; scalar_t__ cursor_col; int cursor_is_valid; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_0()
{
    if (VAR_1.row >= VAR_3)
 VAR_1.row = VAR_3 - 1;
    if (VAR_1.col >= VAR_2)
 VAR_1.col = VAR_2 - 1;
    if (VAR_1.cursor_row >= VAR_3 || VAR_1.cursor_col >= VAR_2)
 VAR_1.cursor_is_valid = VAR_0;
}
