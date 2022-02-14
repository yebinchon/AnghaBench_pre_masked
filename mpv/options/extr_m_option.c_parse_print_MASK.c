
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_3__ {scalar_t__ priv; } ;
typedef TYPE_1__ m_option_t ;
typedef int (* m_opt_print_fn ) (struct mp_log*) ;


 int VAR_0 ;
 int FUNC_0 (struct mp_log*) ;

__attribute__((used)) static int FUNC_1(struct mp_log *VAR_1, const m_option_t *VAR_2,
                       struct bstr VAR_3, struct bstr VAR_4, void *VAR_5)
{
    ((m_opt_print_fn) VAR_2->priv)(VAR_1);
    return VAR_0;
}
