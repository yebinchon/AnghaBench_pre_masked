
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
struct TYPE_3__ {int short_form; } ;


 char const* FUNC_0 (struct buffer*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,...) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_4(struct gc_arena *VAR_1)
{
    struct buffer VAR_2 = FUNC_2(256, VAR_1);
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); ++VAR_3)
    {
        if (VAR_3)
        {
            FUNC_3(&VAR_2, " ");
        }
        FUNC_3(&VAR_2, "[%s]", VAR_0[VAR_3].short_form);
    }
    return FUNC_0(&VAR_2);
}
