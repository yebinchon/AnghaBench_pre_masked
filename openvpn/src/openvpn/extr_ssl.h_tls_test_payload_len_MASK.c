
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {TYPE_1__* session; } ;
struct key_state {scalar_t__ state; int plaintext_read_buf; } ;
struct TYPE_2__ {struct key_state* key; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline int
FUNC_1(const struct tls_multi *VAR_3)
{
    if (VAR_3)
    {
        const struct key_state *VAR_4 = &VAR_3->session[VAR_2].key[VAR_0];
        if (VAR_4->state >= VAR_1)
        {
            return FUNC_0(&VAR_4->plaintext_read_buf);
        }
    }
    return 0;
}
