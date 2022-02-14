
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* driver; scalar_t__ eq_opts_cache; scalar_t__ gl_opts_cache; scalar_t__ opts_cache; } ;
struct TYPE_2__ {int (* control ) (struct vo*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*,int ,int *) ;
 int FUNC_3 (struct vo*,int ,int *) ;
 int FUNC_4 (struct vo*,int ,int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
    struct vo *VAR_4 = VAR_3;

    if (FUNC_0(VAR_4->opts_cache)) {
        FUNC_1(VAR_4);


        if (VAR_4->driver->control)
            VAR_4->driver->control(VAR_4, VAR_1, ((void*)0));
    }

    if (VAR_4->gl_opts_cache && FUNC_0(VAR_4->gl_opts_cache)) {

        if (VAR_4->driver->control)
            VAR_4->driver->control(VAR_4, VAR_2, ((void*)0));
    }

    if (FUNC_0(VAR_4->eq_opts_cache)) {

        if (VAR_4->driver->control)
            VAR_4->driver->control(VAR_4, VAR_0, ((void*)0));
    }
}
