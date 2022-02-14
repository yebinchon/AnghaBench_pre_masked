
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
struct TYPE_3__ {int flags; long long min; long long max; } ;
typedef TYPE_1__ m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long long FUNC_1 (struct bstr,struct bstr*,int) ;
 int FUNC_2 (struct mp_log*,char*,int ,int,...) ;

__attribute__((used)) static int FUNC_3(struct mp_log *VAR_5, const m_option_t *VAR_6,
                          struct bstr VAR_7, struct bstr VAR_8, void *VAR_9)
{
    if (VAR_8.len == 0)
        return VAR_3;

    struct bstr VAR_10;
    long long VAR_11 = FUNC_1(VAR_8, &VAR_10, 10);
    if (VAR_10.len)
        VAR_11 = FUNC_1(VAR_8, &VAR_10, 0);
    if (VAR_10.len) {
        FUNC_2(VAR_5, "The %.*s option must be an integer: %.*s\n",
               FUNC_0(VAR_7), FUNC_0(VAR_8));
        return VAR_0;
    }

    if ((VAR_6->flags & VAR_2) && (VAR_11 < VAR_6->min)) {
        FUNC_2(VAR_5, "The %.*s option must be >= %d: %.*s\n",
               FUNC_0(VAR_7), (int) VAR_6->min, FUNC_0(VAR_8));
        return VAR_4;
    }

    if ((VAR_6->flags & VAR_1) && (VAR_11 > VAR_6->max)) {
        FUNC_2(VAR_5, "The %.*s option must be <= %d: %.*s\n",
               FUNC_0(VAR_7), (int) VAR_6->max, FUNC_0(VAR_8));
        return VAR_4;
    }

    if (VAR_9)
        *(long long *)VAR_9 = VAR_11;

    return 1;
}
