
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ col; } ;
typedef TYPE_1__ pos_T ;
struct TYPE_6__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2()
{
    pos_T VAR_4 = VAR_2->w_cursor;

    VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_1, ((void*)0));
    if (VAR_2->w_cursor.col != VAR_4.col)
 FUNC_1(&VAR_4);
}
