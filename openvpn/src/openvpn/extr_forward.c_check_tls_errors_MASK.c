
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tls_multi; int link_socket; scalar_t__ tls_exit_signal; } ;
struct context {TYPE_2__ c2; } ;
struct TYPE_3__ {scalar_t__ n_hard_errors; scalar_t__ n_soft_errors; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct context *VAR_0)
{
    void FUNC_2(struct context *VAR_1);

    void FUNC_3(struct context *VAR_2);

    if (VAR_0->c2.tls_multi && VAR_0->c2.tls_exit_signal)
    {
        if (FUNC_0(VAR_0->c2.link_socket))
        {
            if (VAR_0->c2.tls_multi->n_soft_errors)
            {
                FUNC_2(VAR_0);
            }
        }
        else
        {
            if (VAR_0->c2.tls_multi->n_hard_errors)
            {
                FUNC_3(VAR_0);
            }
        }
    }
}
