
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lnum; int col; } ;
typedef TYPE_1__ pos_T ;
typedef scalar_t__ char_u ;
struct TYPE_5__ {TYPE_1__ w_cursor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 TYPE_3__* VAR_1 ;
 scalar_t__* FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static pos_T *
FUNC_3()
{
    static pos_T VAR_2;
    char_u *VAR_3;
    char_u *VAR_4;

    VAR_2 = VAR_1->w_cursor;
    while (--VAR_2.lnum > 0)
    {
 VAR_3 = FUNC_1(VAR_2.lnum);
 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4))
 {
     VAR_2.col = (int)(VAR_4 - VAR_3);
     return &VAR_2;
 }
 if (*VAR_4 != VAR_0)
     break;
    }
    return ((void*)0);
}
