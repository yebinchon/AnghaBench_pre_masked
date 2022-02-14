
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmp_int; int to_link_addr; int to_link; int tls_multi; } ;
struct context {TYPE_1__ c2; } ;
typedef scalar_t__ interval_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (struct context*,scalar_t__) ;
 int FUNC_1 (struct context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct context*,int ,char*) ;
 int FUNC_7 (int ,int *,int *,int ,scalar_t__*) ;
 int FUNC_8 () ;

void
FUNC_9(struct context *VAR_4)
{
    interval_t VAR_5 = VAR_0;

    if (FUNC_5(&VAR_4->c2.tmp_int))
    {
        const int VAR_6 = FUNC_7
                                   (VAR_4->c2.tls_multi, &VAR_4->c2.to_link, &VAR_4->c2.to_link_addr,
                                   FUNC_1(VAR_4), &VAR_5);
        if (VAR_6 == VAR_2)
        {
            FUNC_8();
            FUNC_2(&VAR_4->c2.tmp_int);
        }
        else if (VAR_6 == VAR_3)
        {
            FUNC_6(VAR_4, VAR_1, "auth-control-exit");
        }

        FUNC_3(&VAR_4->c2.tmp_int, VAR_5);
    }

    FUNC_4(&VAR_4->c2.tmp_int, &VAR_5);

    if (VAR_5)
    {
        FUNC_0(VAR_4, VAR_5);
    }
}
