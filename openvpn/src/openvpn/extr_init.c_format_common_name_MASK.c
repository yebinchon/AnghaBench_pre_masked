
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct TYPE_2__ {scalar_t__ tls_multi; } ;
struct context {TYPE_1__ c2; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,int ) ;
 int FUNC_3 (scalar_t__,int) ;

const char *
FUNC_4(struct context *VAR_0, struct gc_arena *VAR_1)
{
    struct buffer VAR_2 = FUNC_1(256, VAR_1);
    if (VAR_0->c2.tls_multi)
    {
        FUNC_2(&VAR_2, "[%s] ", FUNC_3(VAR_0->c2.tls_multi, 0));
    }
    return FUNC_0(&VAR_2);
}
