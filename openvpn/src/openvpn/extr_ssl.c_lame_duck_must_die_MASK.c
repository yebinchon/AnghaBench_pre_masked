
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tls_session {struct key_state* key; } ;
struct key_state {scalar_t__ state; scalar_t__ const must_die; } ;
typedef int interval_t ;


 int FUNC_0 (scalar_t__ const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__ const) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline bool
FUNC_2(const struct tls_session *VAR_4, interval_t *VAR_5)
{
    const struct key_state *VAR_6 = &VAR_4->key[VAR_0];
    if (VAR_6->state >= VAR_2)
    {
        const time_t VAR_7 = VAR_3;
        FUNC_0(VAR_6->must_die);
        if (VAR_7 < VAR_6->must_die)
        {
            FUNC_1(VAR_5, VAR_6->must_die - VAR_7);
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (VAR_6->state == VAR_1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
