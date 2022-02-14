
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {TYPE_1__* session; } ;
struct key_state {scalar_t__ auth_deferred_expire; } ;
struct TYPE_2__ {struct key_state* key; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(const struct tls_multi *VAR_3)
{
    if (VAR_3)
    {
        const struct key_state *VAR_4 = &VAR_3->session[VAR_1].key[VAR_0];
        return VAR_2 < VAR_4->auth_deferred_expire;
    }
    return 0;
}
