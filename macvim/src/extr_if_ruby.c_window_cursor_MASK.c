
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int col; int lnum; } ;
struct TYPE_5__ {TYPE_1__ w_cursor; } ;
typedef TYPE_2__ win_T ;
typedef int VALUE ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static VALUE FUNC_3(VALUE VAR_0)
{
    win_T *VAR_1 = FUNC_1(VAR_0);

    return FUNC_2(FUNC_0(VAR_1->w_cursor.lnum), FUNC_0(VAR_1->w_cursor.col));
}
